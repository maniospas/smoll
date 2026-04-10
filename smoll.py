# nuitka --standalone --onefile --output-filename=smoll smoll.py

import os
import sys
import argparse
import itertools
import subprocess
import platform
import urllib.request
from pathlib import Path
from collections import deque

RED   = "\033[31m"
GREEN = "\033[32m"
YELLOW= "\033[33m"
RESET = "\033[0m"
symbols = "=\\/+-*@<>!%&#!(){}[]:.',;|"
END_TOKEN = "...]" # impossible for something else to be tokenized as this
START_TOKEN = "[..." # impossible for something else to be tokenized as this
err_code_table: dict[str,int] = dict()
err_code_table["success"] = 0
debug_mode = True
repositories: dict[str, str] = dict()

class CompfailException(Exception): pass
class FastReturnException(Exception): pass

def pretty_name(name: str):
    return name.replace("__", ".")

temps: list[str]= list()
def create_temp():
    temp = "__temp"+str(len(temps))+"v"
    temps.append(temp)
    return temp

def longest_common_prefix(strings: list[str]) -> str:
    if not strings: return ""
    strings.sort()
    first, last = strings[0], strings[-1]
    i = 0
    while i < len(first) and first[i] == last[i]: i += 1
    return first[:i]

class CodeSegment:
    def tostring(self): return ""
    def copy(self, prefix: str): return self

class CodeWord(CodeSegment):
    def __init__(self, name: str): self.name = name
    def tostring(self): return self.name
    def copy(self, prefix: str): return self

class Variable(CodeSegment):
    def __init__(self, name: str, type: "ImplementedType", immutable: bool=True, isprivate: bool=False):
        self.name = name
        self.type = type
        self.immutable = immutable
        self.isprivate = isprivate
    def tostring(self): return self.name
    def copy(self, prefix: str): return Variable(prefix+"__"+self.name, self.type, self.immutable, self.isprivate)
    def renamed_copy(self, new_name: str): return Variable(new_name, self.type, self.immutable, self.isprivate)
    def mutable_copy(self): return Variable(self.name, self.type, False, self.isprivate)
    def private_copy(self): return Variable(self.name, self.type, self.immutable, True)
    def is_same(self, other: "Variable"):
        if self.type!=other.type: return False
        if self.immutable!=other.immutable: return False
        if self.isprivate!=other.isprivate: return False
        #if self.type.builtin and self.name!=other.name: return False # skip name matching
        return True

def signature_like(vars: list[Variable], impl=None):
    ret = ""
    i = 0
    while i<len(vars):
        if ret: ret += ", "
        type = vars[i].type
        arg_name = vars[i].name
        if arg_name.startswith("__temp") or "____" in arg_name: arg_name = ""
        else: arg_name = " "+arg_name.replace("__", ".")
        if not vars[i].immutable: ret += "mut "
        if type.builtin: 
            if type==POINTER_TYPE and impl: 
                pointer_type = impl.get_pointer_type(vars[i])
                if pointer_type is None: ret += "any "
                else: ret += pointer_type.name+" "
            ret += type.name+arg_name
            i += 1
        elif type.is_buffer_of: 
            ret += type.is_buffer_of.name+"[]"+arg_name
            i += len(type.rets)
        else:
            ret += type.name+arg_name
            i += len(type.rets)
        assert len(type.rets)
    return ret
    

class ImplementedType:
    def __init__(self, name: str, builtin:str|None=None, at:"Token"=None, memory_size=0):
        self.name = name
        self.monomorphic_name = name+create_temp()
        self.return_names: dict[str, int] = dict() # map return names to indexes in rets
        self.args: list[str] = list()
        self.rets: list[str] = list()
        self.vars: dict[str, Variable] = dict()
        self.implementation = list()
        self.preparation: list[CodeSegment] = list()
        self.deallocation: list[CodeSegment] = list()
        self.builtin = builtin
        self.nominal = True if builtin else False
        self.at = at
        self.nesting: str = list()
        self.has_returned_once = False
        self.needs_failure_mode = False
        self.is_buffer_of: ImplementedType|None = None
        self.dependent_implementations: list[ImplementedType] = list()
        self._pointer_types: dict[str, ImplementedType] = dict() # only place pointer variables here
        self._pointer_type_dependencies: dict[str, str] = dict() # only place pointer variables here
        self.invalidated: dict[str, Token] = dict() # invalidated variables and the place where the invalidation occurred
        self.invalidate_types_when_called: list[ImplementedType] = list()
        if self.builtin is not None:
            self.vars["value"] = Variable("value", self)
            self.rets.append("value")
            self._memory_size = memory_size
        else: self._memory_size = 0
        # these parameters help decide whether we should declare static inline
        self.complexity = 0
        self.num_calls = 0
        self.force_not_inline = False 
        # this is used to throw a FastReturnException the first time the function returns
        self.fast_return_exception = False
        self.has_been_completed = False

    def set_pointer_type(self, var: Variable, type: "ImplementedType"):
        assert var.type == POINTER_TYPE
        assert var.name not in self._pointer_type_dependencies
        assert not self.get_pointer_type(var)
        self._pointer_types[var.name] = type

    def follow_pointer_dependency(self, var: Variable):
        varname = var.name
        if varname not in self._pointer_type_dependencies: return None
        while varname in self._pointer_type_dependencies:
            varname = self._pointer_type_dependencies.get(varname, "")
        return self.vars[varname]

    def get_pointer_type(self, var: Variable):
        ret = self._pointer_types.get(var.name, None)
        if ret is not None: return ret
        dependency: str = self._pointer_type_dependencies.get(var.name, None)
        if dependency is None: return None
        return self.get_pointer_type(self.vars[dependency])

    def set_pointer_depedency(self, var: Variable, depends_on: Variable):
        assert var not in self._pointer_type_dependencies
        assert not self.get_pointer_type(var)
        #assert self.get_pointer_type(depends_on), "Need to have pointer type for "+depends_on.name+" in "+self.name
        self._pointer_type_dependencies[var.name] = depends_on.name

    def memory_size(self):
        if self.builtin: return self._memory_size
        ret = self._memory_size
        for arg in self.args: ret += self.vars[arg].type.memory_size()
        return ret

    def signature(self):
        args = signature_like([self.vars[arg] for arg in self.args], impl=self)
        rets = signature_like([self.vars[arg] for arg in self.rets], impl=self)
        return self.name+"("+args+") -> ("+rets+")"

    def assign(self, varname: str, value: list[Variable], error_token: "Token", perform_immutability_checks: bool=True, top_entry: bool=True):
        if len(value)==0: error_token.error("type", "no expression value to assign to variable '"+varname+"'")
        if len(value)>1:
            if top_entry and "__" in varname and not varname.startswith("__temp"):
                if not any(v.startswith(varname) for v in self.vars.keys()):
                    error_token.error("type", "trying to add a field that the type does not have '"+pretty_name(varname)+"'")
            common_prefix = longest_common_prefix([var.name for var in value])
            len_common_prefix = len(common_prefix)
            for var in value: self.assign(varname+"__"+var.name[len_common_prefix:], [var], error_token, perform_immutability_checks, False)
            return None
            error_token.error("type", "cannot assign more than one values to variable '"+varname+"'")
        existing = self.vars.get(varname, None)
        if not existing:
            if top_entry and "__" in varname and not varname.startswith("__temp"):
                if not any(v.startswith(varname) for v in self.vars.keys()):
                    error_token.error("type", "trying to add a field that the type does not have '"+pretty_name(varname)+"'")
            current_prefix = varname+"__"
            found = [val for varname, val in self.vars.items() if varname.startswith(current_prefix)]
            if found:
                if len(found)!=len(value): error_token.error("type", "cannot overwrite tuple with one of different length")
                for i in range(len(value)): assign(found[i], [value[i]], error_token, perform_immutability_checks, top_entry=False)
                return None
        if existing is not None and existing.type!=value[0].type: error_token.error("type", "mismatching types '"+existing.type.signature()+"' vs '"+value[0].type.signature()+"'")
        if perform_immutability_checks and existing and existing.immutable: error_token.error("type", "cannot overwrite immutable variable '"+varname+"'")
        if existing and not existing.immutable and value[0].immutable: 
            value[0] = value[0].mutable_copy()
            #error_token.error("type", "cannot overwrite mutable variable with immutable one '"+varname+"'")
        #if existing is None: # force the following two lines so that we can revoke mutability
        existing = value[0].renamed_copy(varname)
        self.vars[varname] = existing
        if existing.type==POINTER_TYPE:
            if varname in self.invalidated: del self.invalidated[varname]
            existing_pointer_type = self.get_pointer_type(existing)
            other_pointer_type = self.get_pointer_type(value[0])
            #print(existing.name, existing_pointer_type.name if existing_pointer_type else None, value[0].name, other_pointer_type.name if other_pointer_type else None)
            if existing_pointer_type is not None:
                if existing_pointer_type!=other_pointer_type: error_token.error("safety", "cannot overwrite pointer with different type '"+existing_pointer_type.signature()+"' vs '"+other_pointer_type.signature()+"'")
            else:
                if self.get_pointer_type(value[0]): self.set_pointer_depedency(existing, value[0])
        if existing.type.builtin: self.implementation.extend([existing, CodeWord("="), value[0], CodeWord(";")])

    def returns(self, value: list[Variable], error_token: "Token"):
        if self.has_returned_once and len(self.rets)!=len(value):
            error_token.error("type", "this value returned here is a different type than previous returns '"+signature_like([self.vars[ret] for ret in self.rets])+"' vs '"+signature_like(value)+"'")
        for pos, arg in enumerate(value):
            if not arg.name.startswith("__temp"): self.return_names[arg.name] = pos
            if self.has_returned_once: 
                self.assign(self.rets[pos], [arg], error_token, perform_immutability_checks=False, top_entry=False) # TODO: do not use assign but a manual setting to allow overwriting (or make mutable)
            else: 
                self.rets.append(arg.name)
                self.vars[arg.name] = arg # needed to reflect changes in const permissions
        self.has_returned_once = True
        if self.fast_return_exception: 
            self.force_not_inline = True
            self.has_returned_once = True
            raise FastReturnException

    def transpile(self) -> str:
        ret_body_start = ""
        ret_body_end = ""
        arg_code = ""
        for arg in self.args:
            if self.vars[arg].type.builtin: 
                if arg_code: arg_code += ", "
                if self.vars[arg].immutable: arg_code += self.vars[arg].type.builtin+" "+arg
                else: 
                    tmp = create_temp()
                    arg_code += self.vars[arg].type.builtin+"* "+tmp
                    ret_body_start += self.vars[arg].type.builtin+" "+arg+"=*"+tmp+";\n  "
                    ret_body_end += "*"+tmp+"="+arg+";\n  "

            # other args are just class alignment
            # else: raise Exception("cannot handle non-builtin arguments: '"+arg+"'")
        ret_code = ""
        for arg in self.rets:
            if self.vars[arg].type.builtin:
                tmp = create_temp()
                if ret_code: ret_code += ", "
                ret_code += self.vars[arg].type.builtin+"* "+tmp
                ret_body_end += "*"+tmp+"="+arg+";\n  "
            # other args are just class alignment
            # else: raise Exception("cannot handle non-builtin returns: '"+arg+"'") # we d
        if arg_code and ret_code: arg_code += ", "
        arg_code += ret_code
        doinline = (self.complexity<500 or self.num_calls<=1) and not self.force_not_inline

        ret = ("static inline " if doinline else "")+("int " if self.needs_failure_mode else "void ")+self.monomorphic_name+"("+arg_code+") {\n  "
        ret += ret_body_start
        for var, val in self.vars.items():
            if var in self.args: continue
            if val.type.builtin: ret += val.type.builtin+" "+var+"=0;\n  "
            # non-built-ins are theoretical constructs only
        if self.needs_failure_mode: ret += "int __temp_errcode=0;\n  "
        prev = ";"
        for token in self.implementation:
            tok = token.tostring()
            if prev[0] not in symbols and tok[0] not in symbols and prev!=";": ret += " "
            prev = tok
            if tok==";": ret += ";\n  "
            elif tok=="{": ret += "{\n  "
            elif tok=="}": ret += "}\n  "
            else: ret += tok
        if ret_body_end: ret += "__temp_return:\n  "
        ret += ret_body_end
        if self.needs_failure_mode:
            ret += "return 0;\n  __temp_failure:\n  return __temp_errcode;\n}"
        else: ret = ret[:-2]+"}"
        return ret

class UnionType:
    def __init__(self, name):
        self.name = name
        self.variations: list[ImplementedType] = list()

    def append(self, variation: ImplementedType):
        self.variations.append(variation)
        return self

class File:
    def __init__(self, path: str):
        self.path = path
        self.types: dict[str, UnionType] = dict()
        self.namespaces: dict[str, File] = dict()
        self.is_main_file = None

class Token:
    def __init__(self, text, file: File, row, col):
        self.text = text
        self.file = file
        self.row = row
        self.col = col
    def starts(self): return self.text==START_TOKEN
    def ends(self): return self.text == END_TOKEN
    def is_string(self): return len(self.text)>=2 and self.text[0]=="\"" and self.text[len(self.text)-1]=="\""
    def is_int(self):
        try:
            int(self.text)
            return True
        except: return False
    def is_uint(self):
        try:
            return int(self.text)>=0
        except: return False
    def is_float(self):
        try:
            float(self.text)
            return True
        except: return False
    def error(self, errtype: str, message: str):
        try:
            with open(self.file.path, "r", encoding="utf-8") as f:
                for i, line in enumerate(f, start=1):
                    if i == self.row:
                        source_line = line.rstrip("\n")
                        break
                else: source_line = ""
        except OSError as exc:
            print(f"{RED}{errtype} error:{RESET} {message}")
            print(f"   (could not open source file {self.file.path!r}: {exc})")
            sys.exit(1)
        token_len = max(len(self.text), 1)
        pointer = " " * (self.col - 1) + "^" * token_len
        location = f"{self.file.path} line {self.row} column {self.col}"
        print(f"{RED}{errtype} error{RESET}: {message}")
        print(f"{RED}at{RESET} {location}")
        print(source_line)
        print(f"{RED}{pointer}{RESET}")
        sys.exit(1)

def get(tokens: list[Token], pos: int) -> Token:
    if pos>=len(tokens): tokens[len(tokens)-1].error("syntax", "unexpected end of file")
    if tokens[pos].starts(): tokens[pos].error("syntax", "unexpected indentation")
    return tokens[pos]


def get_skip(tokens: list[Token], pos: int) -> Token:
    if pos>=len(tokens): tokens[len(tokens)-1].error("syntax", "unexpected end of file")
    return tokens[pos]

def peek_text(tokens: list[Token], pos: int) -> str:
    if pos >= len(tokens): return ""
    return tokens[pos].text

def resolve_call(file: File, impl: ImplementedType, method: UnionType, vars: list[Variable], error_token: Token) -> list[Variable]:
    available_types: list[ImplementedType] = list()
    for variation in method.variations:
        if len(variation.args)!=len(vars): continue
        is_available = True
        for i in range(len(vars)):
            # we can allow lowering buffers to generic any
            if vars[i].type!= variation.vars[variation.args[i]].type and variation.vars[variation.args[i]].type.is_buffer_of!=ANY_TYPE:
                is_available = False
                break
        # first check for pointer mismatches (this is a safety error)
        for varpos, var in enumerate(vars):
            if var.type!=POINTER_TYPE: continue
            var_pointer_type = impl.get_pointer_type(var)
            other_pointer_type = variation.get_pointer_type(variation.vars[variation.args[varpos]])
            if var_pointer_type is not None and other_pointer_type is not None and var_pointer_type!=ANY_TYPE and other_pointer_type!=ANY_TYPE and var_pointer_type!=other_pointer_type:
                is_available = False
                # TODO: make a proper is_available check, that also accounts for internal pointer types but allows structural equivalence
                # is_available = len(var_pointer_type.args)==len(other_pointer_type.args)
                # for arg1, arg2 in zip(var_pointer_type.args, other_pointer_type.args):
                #     if var_pointer_type
                if not is_available: break
        if is_available: available_types.append(variation)
    if len(available_types)==0:
        # has_defs = False
        # for i, tok in enumerate(file.tokens):
        #     if tok.text=="def" and peek_text(tokens, i+1)==method.name
        error_token.error("type", "could not resolve any call for '"+method.name+"("+signature_like(vars, impl)+")' candidates:\n    "+"\n    ".join([t.signature() for t in method.variations]))
    if len(available_types)>1:
        error_token.error("type", "more than one conflicting call '"+method.name+"("+signature_like(vars, impl)+")' candidates:\n    "+"\n    ".join([t.signature() for t in available_types]))

    callee: ImplementedType = available_types[0]
    # first check for pointer mismatches (this is a safety error)
    for varpos, var in enumerate(vars):
        if var.type!=POINTER_TYPE: continue # so we know for a fact that
        var_pointer_type = impl.get_pointer_type(var)
        other_pointer_type = callee.get_pointer_type(callee.vars[callee.args[varpos]])
        if (var_pointer_type is None or var_pointer_type==ANY_TYPE) and other_pointer_type is not None and other_pointer_type!=ANY_TYPE:
            impl._pointer_types[var.name] = other_pointer_type

    # TODO: we will now call the method, but we could also inline it in the future maybe
    tmp = create_temp()
    rets = list()
    if callee.needs_failure_mode:
        impl.implementation.extend([
            CodeWord("__temp_errcode"),
            CodeWord("="),
            CodeWord(callee.monomorphic_name),
            CodeWord("("),
        ])
    else:
        impl.implementation.extend([
            CodeWord(callee.monomorphic_name),
            CodeWord("("),
        ])
    for varpos, var in enumerate(vars):
        if var.type.builtin: 
            if callee.vars[callee.args[varpos]].immutable:
                impl.implementation.extend([var, CodeWord(",")])
                continue
            #if var.isprivate: error_token.error("type", "a mutable argument cannot modify an immutable class field: '"+pretty_name(var.name)+"'")
            #if var.immutable: error_token.error("type", "a mutable argument cannot modify an immutable variable '"+pretty_name(var.name)+"'")
            impl.implementation.extend([CodeWord("&"), var, CodeWord(",")])

    for invalid_type in callee.invalidate_types_when_called:
        for var, val in impl.vars.items():
            if val.type == invalid_type and not var.endswith("__unsafe_ptr"):
                impl.invalidated[var] = error_token
    impl.invalidate_types_when_called.extend(callee.invalidate_types_when_called)

    # this is a critical point for ... pointers ;-) actually for buffers
    # we are next going to go through all the actual pointer compliance checks
    # so it is correct (actually, mandatory) to promote the return result to the 
    # corresponding input buffer type - we will do so by detecting pointers attached to buffers,
    # which have a known structure, with the pointers as the first argument.


    for ret_pos, ret in enumerate(callee.rets):
        varname = tmp+"__"+ret
        original = callee.vars[ret]
        variable = original.renamed_copy(varname)
        impl.vars[varname] = variable
        rets.append(variable)
        if variable.type.builtin: impl.implementation.extend([CodeWord("&"), variable, CodeWord(",")])
        if original.type!=POINTER_TYPE: continue
        original_pointer_type = callee.get_pointer_type(original)
        if original_pointer_type is None or original_pointer_type==ANY_TYPE:
            original_pointer_dependency: Variable = callee.follow_pointer_dependency(original)
            if original_pointer_dependency is None: original_pointer_dependency = original
            if original_pointer_dependency is not None:
                for varpos, varname in enumerate(callee.args):
                    if varname!=original_pointer_dependency.name: continue
                    impl.set_pointer_depedency(variable, vars[varpos])
                    pointer_type: ImplementedType = impl.get_pointer_type(vars[varpos])
                    if pointer_type and pointer_type!=ANY_TYPE and ret_pos and rets[ret_pos-1].type.is_buffer_of==ANY_TYPE:
                        rets[ret_pos-1].type = buffer_types[pointer_type].variations[0]
                    break
        
        else: 
            impl.set_pointer_type(variable, original_pointer_type)
            # overwrite known pointer types here for the pointer (it's fine to change the type because rets are copies)
    if callee.rets or vars: impl.implementation[-1] = CodeWord(")") # replace last comma with closing parenthesis
    else: impl.implementation.append(CodeWord(")"))
    impl.implementation.append(CodeWord(";"))
    if callee.needs_failure_mode:
        impl.implementation.extend([
            CodeWord("if"),
            CodeWord("("),
            CodeWord("__temp_errcode"),
            CodeWord(")"),
            CodeWord("{"),
        ])
        if debug_mode:
            text = "\\033[31mat\\033[0m "+error_token.file.path.replace('"','\\"')+" line "+str(error_token.row)+" column "+str(error_token.col)+"\\n"
            text +="   unhandled error from "+callee.signature()+"\\n"
            impl.implementation.extend([
                CodeWord("printf"),
                CodeWord("("),
                CodeWord('"%s", "'+text+'"'),
                CodeWord(")"),
                CodeWord(";"),
            ])
        impl.implementation.extend([
            CodeWord("goto"),
            CodeWord("__temp_failure"),
            CodeWord(";"),
            CodeWord("}")
        ])
        impl.needs_failure_mode = True
    impl.dependent_implementations.append(callee)
    impl.complexity += callee.complexity+len(callee.implementation)
    callee.num_calls += 1
    if callee==FAIL_TYPE: 
        if impl.nesting: error_token.error("safety", "cannot create a compilation-time failure inside a 'while' or an 'if' whose condition does not evaluate to compile-time known boolean")
        raise CompfailException()
    return rets

def process_deref(file: File, pos: int, ret: list[Variable], impl: ImplementedType, current_token: Token):
    if len(ret)!=1: current_token.error("type", "can only deref a 'ptr' but got '"+signature_like(ret)+"'")
    if ret[0].type!=POINTER_TYPE: current_token.error("type", "can only deref a 'ptr' but got '"+signature_like(ret)+"'")
    if ret[0].name in impl.invalidated: current_token.error("safety", "this pointer could have been invalidated by a previous call; re-obtain it from its buffer")
    pointer_type = impl.get_pointer_type(ret[0])
    if pointer_type is None: current_token.error("type", "there is no known type attached to the pointer to deref at this point")
    if pointer_type == ANY_TYPE: current_token.error("type", "cannot deref a pointer on 'any' data (this can be specialized)")
    new_vars = list()
    prefix = create_temp()+"__"
    progress = 0
    for ret_name in pointer_type.rets:
        r_var = pointer_type.vars[ret_name].renamed_copy(prefix+ret_name)
        new_vars.append(r_var)
        mem_size = r_var.type.memory_size()
        impl.vars[r_var.name] = r_var
        if not mem_size: continue
        # non-allocation check is mandatory unfortunately
        impl.implementation.extend([
            CodeWord("if"),
            CodeWord("("),
            CodeWord("!"),
            ret[0],
            CodeWord(")"),
            CodeWord("{"),
        ])
        if debug_mode:
            text = "\\033[31mmemory error\\033[0m unallocated pointer\\n"
            text += "\\033[31mat\\033[0m "+current_token.file.path.replace('"','\\"')+" line "+str(current_token.row)+" column "+str(current_token.col)+"\\n"
            impl.implementation.extend([
                CodeWord("printf"),
                CodeWord("("),
                CodeWord('"%s", "'+text+'"'),
                CodeWord(")"),
                CodeWord(";"),
            ])
        impl.implementation.extend([
            CodeWord("goto"),
            CodeWord("__temp_failure"),
            CodeWord(";"),
            CodeWord("}")
        ])
        impl.needs_failure_mode = True
        impl.implementation.extend(
            [CodeWord(w) for w in "memcpy (".split(" ")]
            + [CodeWord("&")]
            + [r_var]
            + [CodeWord(",")]
            + [CodeWord(w) for w in "( char * )".split(" ")]
            + [ret[0]]
            + ([CodeWord("+"), CodeWord(str(progress))] if progress else [])
            + [CodeWord(","), CodeWord(str(mem_size))]
            + [CodeWord(")"), CodeWord(";")]
        )
        progress += mem_size
    return pos, new_vars

buffer_types: dict[ImplementedType, UnionType] = dict()

def find_unique_variations(variations: list[ImplementedType]):
    all_found: list[ImplementedType] = list()
    for impl in variations:
        already_parsed = False
        for variation in all_found:
            is_same = len(variation.rets)==len(impl.rets)
            if is_same:
                for variation_arg, impl_arg in zip(variation.rets, impl.rets):
                    if variation.vars[variation_arg].type!=impl.vars[impl_arg].type:
                        is_same = False
            if is_same:
                already_parsed = True
                break
        if not already_parsed: all_found.append(impl)
    return all_found

def process_type(file: File, tokens: list[Token], pos: int) -> tuple[int, File|UnionType]:
    name = get(tokens, pos).text
    if peek_text(tokens, pos+1)!="::":
        if name in operators: tokens[pos].error("syntax", "the previous expression has ended")
        type: UnionType = file.types.get(name, None)
        if type is None: 
            #raise("unknown type '"+name+"'")
            found = False
            for tokpos, tok in enumerate(tokens):
                if tok.text=="def" and peek_text(tokens, tokpos+1)==name:
                    if peek_text(tokens, tokpos+2)=="=": tokens[pos].error("type", "type union is declared later per 'def "+name+"'")
                    else: tokens[pos].error("type", "usage of 'def "+name+"' before its definition; perhaps declare it as 'rec fib'")
                elif tok.text=="rec" and peek_text(tokens, tokpos+1)==name:
                    tokens[pos].error("type", "usage of 'rec "+name+"' before its definition") 
            tokens[pos].error("type", "unknown type '"+name+"'")
        if peek_text(tokens, pos+1)=="[":
            if get(tokens, pos+2).text!="]": get(tokens, pos+1).error("syntax", "to denote a buffer type use '[]'")
            buffer_type = buffer_types.get(type, None)
            if buffer_type is None:
                buffer_type = UnionType(type.name+"__temp_buffer")
                for variation in find_unique_variations(type.variations):
                    variation_buffer_type = buffer_types.get(type, None)
                    if variation_buffer_type is None:
                        actual_variation = ImplementedType(buffer_type.name+"__buffer")
                        actual_variation.is_buffer_of = variation
                        type_arg = create_temp()+actual_variation.name
                        for varg in variation.rets:
                            if variation.vars[varg].type == POINTER_TYPE:
                                tokens[pos].error("safety", "cannot place pointers or buffers onto buffers")
                        actual_variation.vars[type_arg] = Variable(type_arg, actual_variation)
                        actual_variation.vars["unsafe_ptr"] = Variable("unsafe_ptr", POINTER_TYPE, immutable=False, isprivate=False)
                        actual_variation.vars["unsafe_size"] = Variable("unsafe_size", UINT_TYPE, immutable=False, isprivate=False)
                        actual_variation.vars["align"] = Variable("align", UINT_TYPE, immutable=True, isprivate=False)
                        actual_variation.set_pointer_type(actual_variation.vars["unsafe_ptr"], variation)
                        actual_variation.implementation.extend([
                            actual_variation.vars["align"],
                            CodeWord("="),
                            CodeWord(str(variation.memory_size())),
                            CodeWord(";")
                        ])
                        actual_variation.rets.append(type_arg)
                        actual_variation.rets.append("unsafe_ptr")
                        actual_variation.rets.append("unsafe_size")
                        actual_variation.rets.append("align")
                        variation_buffer_type = UnionType(buffer_type.name+"__temp_buffer")
                        variation_buffer_type.append(actual_variation)
                        buffer_types[variation] = variation_buffer_type
                    buffer_type.variations.extend(variation_buffer_type.variations)
                buffer_types[type] = buffer_type
            file.types[buffer_type.name] = buffer_type
            return pos+3, buffer_type
        for variation in type.variations: 
            if variation==ANY_TYPE: tokens[pos].error("safety", "can only place on buffers or ponters the type 'any'")
        return pos+1, type
    namespace: File = file.namespaces.get(name, None)
    if namespace is None: tokens[pos].error("import", "unknown namespace '"+name+"'")
    return process_type(namespace, tokens, pos+2)

def process_linear_type(file: File, tokens: list[Token], pos: int) -> tuple[int, File|UnionType]:
    prev_pos = pos
    pos, type = process_type(file, tokens, pos)
    if not isinstance(type, UnionType): tokens[prev_pos].error("type", "expecting a type instead of namespace")
    if peek_text(tokens, pos) == "|":
        prev_pos = pos
        pos, alternatives = process_linear_type(file, tokens, pos+1)
        ret = UnionType(type.name+"|"+alternatives.name)
        ret.variations.extend(type.variations)
        ret.variations.extend(alternatives.variations)
        ret.variations = list(set(ret.variations))
        type = ret
    return pos, type

def skip_statement(file: File, tokens: list[Token], pos: int):
    depth = 0
    budget = 1
    while pos<len(tokens):
        tok = peek_text(tokens, pos)
        if tok==START_TOKEN and depth==0: break
        if tok == "(": depth += 1
        elif tok == ")": 
            depth -= 1
            budget = 0
            if depth<0: break
        elif tok[0] in symbols or tok=="is" or tok=="and" or tok=="or": budget = 1
        elif depth==0:
            budget -= 1
            if budget<0: break
        pos += 1
    return pos

operators = {
    ">>": (">>", 11),
    "<<": ("<<", 11),
    "and": ("and", 10),
    "or": ("or", 9),
    "is": ("is", 8),
    "<": ("lt",7),
    ">": ("gt",7),
    "<=":("le",7),
    ">=":("ge",7),
    "==":("eq",7),
    "!=":("neq",7),
    "+": ("add",5),
    "-": ("sub",6),
    "*": ("mul",2),
    "**":("pow",1),
    "/": ("div",3),
    "%": ("mod",4),
    "[": ("get", 0.5),
    ".": ("dot", 0.5),
    "->": ("access",-1),
}


def process_statement_operator(file: File, tokens: list[Token], impl: ImplementedType, pos: int, rets: list[Variable], current_operator_priority:int) -> tuple[int, list[Variable]]:
    # apply this when returning from process_statement
    while True:
        op = peek_text(tokens, pos)
        op_name, op_priority = operators.get(op, (None, 0))
        if op_name is None: return pos, rets
        if current_operator_priority==9 and op_priority==10: 
            tokens[pos].error("safety", "there is no clear priority order between 'and' and 'or'; be explicit with parentheses")
        if current_operator_priority==10 and op_priority==9: 
            tokens[pos].error("safety", "there is no clear priority order between 'and' and 'or'; be explicit with parentheses")
        if current_operator_priority and current_operator_priority<op_priority:
            return pos, rets
        op_token = tokens[pos]
        if current_operator_priority==7 and op_priority==7: 
            op_token.error("safety", "there is no clear priority order between multiple equalities and inequalities; be explicit with parentheses")

        if op_name==">>" or op_name=="<<":
            err_token = op_token
            pos, ret = process_statement(file, tokens, pos+1, impl, current_operator_priority=0) # don't touch rets
            pos, ret = process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
            if op_name ==">>": ret, rets = rets, ret
            if len(rets)!=1: err_token.error("type", "can not apply '"+op_name+"' to non-pointer '"+signature_like(rets)+"'")
            var = rets[0]
            if var is not None and var.isprivate: err_token.error("type", "cannot set to immutable class field: '"+pretty_name(current)+"'")
            if var is None: err_token.error("type", "can only set a value to an existing ptr with '"+op_name+"' but found '"+signature_like(rets)+"'")
            if var.type!=POINTER_TYPE: err_token.error("type", "can only set a value to an existing ptr with '"+op_name+"' but found '"+signature_like(rets)+"'")
            if var.name in impl.invalidated: err_token.error("safety", "this pointer could have been invalidated by a previous call; re-obtain it from its buffer")
            pointer_type: ImplementedType = impl.get_pointer_type(var)
            if pointer_type is None: err_token.error("type", "cannot "+op_name+" a value onto a pointer with unknown associated type")
            if len(pointer_type.rets)!=len(ret): err_token.error("type", "this is a pointer to data of different type: '"+signature_like(ret)+"' vs '"+pointer_type.signature()+"'")
            for pr, r in zip(pointer_type.rets, ret):
                if pointer_type.vars[pr].type != r.type: err_token.error("type", "this is a pointer to data of different type: '"+signature_like(ret)+"' vs '"+pointer_type.signature()+"'")
            # we now have a contract that we can place our data on the pointer
            progress = 0
            for r in ret:
                mem_size = r.type.memory_size()
                if not mem_size: continue
                # non-allocation check is mandatory unfortunately
                impl.implementation.extend([
                    CodeWord("if"),
                    CodeWord("("),
                    CodeWord("!"),
                    var,
                    CodeWord(")"),
                    CodeWord("{"),
                ])
                if debug_mode:
                    text = "\\033[31mmemory error\\033[0m unallocated pointer\\n"
                    text += "\\033[31mat\\033[0m "+err_token.file.path.replace('"','\\"')+" line "+str(err_token.row)+" column "+str(err_token.col)+"\\n"
                    impl.implementation.extend([
                        CodeWord("printf"),
                        CodeWord("("),
                        CodeWord('"%s", "'+text+'"'),
                        CodeWord(")"),
                        CodeWord(";"),
                    ])
                impl.implementation.extend([
                    CodeWord("goto"),
                    CodeWord("__temp_failure"),
                    CodeWord(";"),
                    CodeWord("}")
                ])
                impl.needs_failure_mode = True
                impl.implementation.extend(
                    [CodeWord(w) for w in "memcpy ( ( char * )".split(" ")]
                    + [var]
                    + ([CodeWord("+"), CodeWord(str(progress))] if progress else [])
                    + [CodeWord(","), CodeWord("&")]
                    + [r]
                    + [CodeWord(","), CodeWord(str(mem_size))]
                    + [CodeWord(")"), CodeWord(";")]
                )
                progress += mem_size
            prev_ret = ret
            continue
        
        if op_name=="and":
            if len(rets)!=1: op_token.error("type", "the left hand side must always be true/false for 'and'")
            if rets[0].type==TRUE_TYPE:
                pos, rets = process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority) 
                continue
            if rets[0].type==FALSE_TYPE:
                pos = skip_statement(file, tokens, pos+1) 
                continue
            if rets[0].type!=BOOL_TYPE: op_token.error("type", "the left hand side must always be true/false for 'and'")
            impl.implementation.extend([
                CodeWord("if"),
                CodeWord("("),
                rets[0],
                CodeWord(")"),
                CodeWord("{")
            ])
            pos, rets = process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority)
            pack_name = create_temp()
            impl.assign(pack_name, rets, op_token)
            rets = [v for k, v in impl.vars.items() if k.startswith(pack_name)]
            impl.implementation.append(CodeWord("}"))
            continue

        if op_name=="or":
            if len(rets)!=1: op_token.error("type", "the left hand side must always be true/false for 'or'")
            if rets[0].type==TRUE_TYPE:
                pos = skip_statement(file, tokens, pos+1) 
                continue
            if rets[0].type==FALSE_TYPE:
                pos, rets = process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority) 
                continue
            if rets[0].type!=BOOL_TYPE: op_token.error("type", "the left hand side must always be true/false for 'or'")
            impl.implementation.extend([
                CodeWord("if"),
                CodeWord("("),
                CodeWord("!"),
                rets[0],
                CodeWord(")"),
                CodeWord("{")
            ])
            pos, rets = process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority) 
            pack_name = create_temp()
            impl.assign(pack_name, rets, op_token)
            rets = [v for k, v in impl.vars.items() if k.startswith(pack_name)]
            impl.implementation.append(CodeWord("}"))
            continue

        if op_name=="is":
            is_pos = pos
            pos += 1
            # first parse type extraction statements
            if peek_text(tokens, pos)=="type":
                pos, processed_rets = process_statement(file, tokens, pos+1, impl, current_operator_priority=0)
                matched = len(processed_rets)==len(rets)
                if matched:
                    for processed_ret, rets_ret in zip(processed_rets, rets):
                        if processed_ret.type!=rets_ret.type:
                            matched = False
                            break
                tmp = create_temp()
                rets = [Variable(tmp, TRUE_TYPE) if matched else Variable(tmp, FALSE_TYPE)]
                impl.vars[tmp] = rets[0]
                continue
            pos, type = process_linear_type(file, tokens, pos)
            found = False
            for variation in type.variations:
                matched = len(variation.rets)==len(rets)
                if matched:
                    for variation_ret, rets_ret in zip(variation.rets, rets):
                        if variation.vars[variation_ret].type!=rets_ret.type:
                            matched = False
                            break
                if matched:
                    found = True
                    break
            tmp = create_temp()
            rets = [Variable(tmp, TRUE_TYPE) if found else Variable(tmp, FALSE_TYPE)]
            impl.vars[tmp] = rets[0]
            continue
        if op==".":
            current_token = tokens[pos]
            if len(rets)==1 and rets[0].type==POINTER_TYPE:
                pos, rets = process_deref(file, pos, rets, impl, current_token)
                pos += 1
                continue
            current = longest_common_prefix([r.name for r in rets])
            if current.endswith("__"): current=current[:-2]
            pos -= 1
            while peek_text(tokens, pos+1) == ".":
                pos += 2
                current += "__"+get(tokens, pos).text
                is_field = True
                if current in impl.vars: break
            pos += 1
            var = impl.vars.get(current, None)
            if var is None:
                current_prefix = current+"__"
                rets = [r for r in rets if r.name.startswith(current_prefix)]
                if rets or peek_text(tokens, pos+1)=="is": continue
                current_token.error("type", "not found field '"+pretty_name(current)+"'") 
            rets = [var]
            continue
        elif op=="[":
            err_token = tokens[pos]
            type = file.types.get("get", None)
            if type is None: err_token.error("type", "missing implementation for 'get'")
            pos, additional_rets = process_statement(file, tokens, pos+1, impl, current_operator_priority=0)
            rets = resolve_call(file, impl, type, rets+additional_rets, err_token)
            if peek_text(tokens, pos)!="]": err_token.error("syntax", "missing closing ']'")
            pos += 1
            continue
        elif op_priority==-1:
            pos, type = process_type(file, tokens, pos+1)
            if not isinstance(type, UnionType): op_token.error("type", "resolved to a file but not a type")
            pos -= 1
            op_priority = -0.5
        else: 
            type: UnionType = file.types.get(op_name, None)
            if type is None: op_token.error("type", "missing implementation for '"+op_name+"'")
        pos, additional_rets = process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority, for_call=True)
        rets = resolve_call(file, impl, type, rets+additional_rets, op_token)
    return pos, rets


def process_statement(file: File, tokens: list[Token], pos: int, impl: ImplementedType, current_operator_priority: int, for_call: bool=False) -> tuple[int, list[Variable]]:
    current_token = get(tokens, pos)
    current = current_token.text
    if current=="fail":
        pos += 1
        message = get(tokens, pos)
        if not message.is_string(): message.error("syntax", "a string literal must contain an error message after 'fail'")
        text = message.text
        text = text[1:(len(text)-1)] # remove string limits
        err_code = err_code_table.get(text, None)
        if err_code is None:
            err_code = len(err_code_table)
            err_code_table[text] = err_code
        if debug_mode:
            text = "\\033[31mfail\\033[0m "+text
            text += "\\n\\033[31mat\\033[0m "+message.file.path.replace('"','\\"')+" line "+str(message.row)+" column "+str(message.col)+"\\n"
            impl.implementation.extend([
                CodeWord("printf"),
                CodeWord("("),
                CodeWord('"%s", "'+text+'"'),
                CodeWord(")"),
                CodeWord(";"),
            ])
        impl.implementation.extend([
            CodeWord("__temp_errcode"),
            CodeWord("="),
            CodeWord(str(err_code)),
            CodeWord(";"),
            CodeWord("goto"),
            CodeWord("__temp_failure"),
            CodeWord(";")
        ])
        impl.needs_failure_mode = True
        return process_statement_operator(file, tokens, impl, pos+1, [], current_operator_priority)
    if current=="true":
        tmp = create_temp()
        variable = Variable(tmp, BOOL_TYPE) 
        impl.vars[tmp] = variable
        impl.implementation.extend([
            variable,
            CodeWord("="),
            CodeWord("1"),
            CodeWord(";")
        ])
        return process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if current=="false":
        tmp = create_temp()
        variable = Variable(tmp, BOOL_TYPE)
        impl.vars[tmp] = variable
        impl.implementation.extend([
            variable,
            CodeWord("="),
            CodeWord("0"),
            CodeWord(";")
        ])
        return process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if current_token.is_string():
        tmp = create_temp()
        variable = Variable(tmp, CSTR_TYPE)
        impl.vars[tmp] = variable
        impl.implementation.extend([variable, CodeWord("="), CodeWord(current), CodeWord(";")])
        return process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if current_token.is_uint():
        tmp = create_temp()
        variable = Variable(tmp, UINT_TYPE)
        impl.vars[tmp] = variable
        impl.implementation.extend([variable, CodeWord("="), CodeWord(current), CodeWord(";")])
        return process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if current_token.is_int():
        tmp = create_temp()
        variable = Variable(tmp, INT_TYPE)
        impl.vars[tmp] = variable
        impl.implementation.extend([variable, CodeWord("="), CodeWord(current), CodeWord(";")])
        return process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if current_token.is_float():
        tmp = create_temp()
        variable = Variable(tmp, FLOAT_TYPE)
        impl.vars[tmp] = variable
        impl.implementation.extend([variable, CodeWord("="), CodeWord(current), CodeWord(";")])
        return process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if current == "&" or current=="mut":
        pos, ret = process_statement(file, tokens, pos+1, impl, current_operator_priority)
        return process_statement_operator(file, tokens, impl, pos, [r.mutable_copy() for r in ret], current_operator_priority)
    if current == "INVALIDATE":
        pos, type = process_linear_type(file, tokens, pos+1)
        for var, val in impl.vars.items():
            if val.type in type.variations and not var.endswith("__unsafe_ptr"):
                impl.invalidated[var] = current_token
        impl.invalidate_types_when_called.extend(type.variations)
        return pos, []
    # if current == "deref" or current==":":
    #     pos, ret = process_statement(file, tokens, pos+1, impl, current_operator_priority)
    #     pos, ret = process_deref(file, pos, ret, impl, current_token)
    #     return process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority)
    if current == "class":
        pos, ret = process_statement(file, tokens, pos+1, impl, current_operator_priority)
        tmp = create_temp()
        var = Variable(tmp, impl)
        impl.vars[tmp] = var
        return process_statement_operator(file, tokens, impl, pos, [var]+[r.private_copy() if r.immutable else r for r in ret], current_operator_priority)

    if current == "(":
        ret = list()
        while True:
            pos += 1
            if peek_text(tokens, pos)==")": break
            pos, segment = process_statement(file, tokens, pos, impl, current_operator_priority=0)
            pos, segment = process_statement_operator(file, tokens, impl, pos, segment, current_operator_priority=0)
            ret.extend(segment)
            peek = peek_text(tokens, pos)
            if peek==")": break
            if peek==",":
                continue
            get(tokens, pos).error("syntax", "expecting comma or closing parenthesis")
        pos += 1 # skip closing parenthesis
        if peek_text(tokens, pos)=="->" or peek_text(tokens, pos)=="[" or (peek_text(tokens, pos) in operators and for_call): return pos, ret  # manual left-to-right piping
        return process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
    is_field = False
    while peek_text(tokens, pos+1) == ".":
        if current in impl.vars: break
        pos += 2
        current += "__"+get(tokens, pos).text
        is_field = True
    var = impl.vars.get(current, None)

    if peek_text(tokens, pos+1) == "=":
        if var is not None and var.isprivate: tokens[pos].error("type", "cannot set to immutable class field: '"+pretty_name(current)+"'")
        current_prefix = current+"__"
        pos, ret = process_statement(file, tokens, pos+2, impl, current_operator_priority=0)
        pos, ret = process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
        previous = [val for varname, val in impl.vars.items() if varname.startswith(current_prefix)]
        if len(previous)!=len(ret) and previous: current_token.error("type", "cannot set an incompatible type on '"+pretty_name(current)+"'")
        if previous:
            for p, r in zip(previous, ret): impl.assign(p.name, [r], current_token)
        else: impl.assign(current, ret, current_token)
        found = [] # [val for varname, val in impl.vars.items() if varname.startswith(current_prefix)]
        return pos, found

    if var is None:
        # first try to see if this is a group of values
        # if not found but followed by 'is' consider it of type void
        current_prefix = current+"__"
        found = [val for varname, val in impl.vars.items() if varname.startswith(current_prefix)]
        if found or peek_text(tokens, pos+1)=="is": return process_statement_operator(file, tokens, impl, pos+1, found, current_operator_priority) 

        # if it was a field, don't try type resolution but immediately fail now
        if is_field: current_token.error("type", "not found field '"+current+"'") 

        # then resolve to a call based on type
        pos, method = process_linear_type(file, tokens, pos)
        #if isinstance(method, File): tokens[pos].error("type", "did not resolve completely to a type")
        if peek_text(tokens, pos-1)=="]": vars = list()
        else: pos, vars = process_statement(file, tokens, pos, impl, current_operator_priority, for_call=True)
        varsret = resolve_call(file, impl, method, vars, current_token)
        return process_statement_operator(file, tokens, impl, pos, varsret, current_operator_priority)
    return process_statement_operator(file, tokens, impl, pos+1, [var], current_operator_priority)

def process_body(file: File, tokens: list[Token], pos: int, impl: ImplementedType, one_line: bool=False):
    def skip_statement(file: File, tokens: list[Token], pos: int):
        get(tokens, pos).error("safety", "this statement needs to start in a new line because it could be skipped (for now, skipping relies on code block indentation to properly end)")

    if peek_text(tokens, pos)!=START_TOKEN and not one_line: tokens[pos].error("syntax", "expecting indentation")
    pos += 1
    start_pos = pos
    while pos<len(tokens):
        if one_line and pos>start_pos: return pos
        name = get(tokens, pos)
        pos += 1
        if name.text==END_TOKEN and not one_line: return pos
        if name.text=="{":
            depth = 1
            while pos<len(tokens):
                tok = tokens[pos]
                if tok.starts(): continue
                if tok.ends(): continue
                if tok.text == "{": depth += 1
                if tok.text == "}": depth -= 1
                if depth == 0: break
                var = impl.vars.get(tok.text, None)
                if var is not None: impl.implementation.append(var)
                elif tok.text=="type" and peek_text(tokens, pos+1)=="(":
                    prev_pos = pos
                    pos += 1
                    pos, rets = process_statement(file, tokens, pos, impl, current_operator_priority=0)
                    if len(rets)!=1: tokens[prev_pos].error("syntax", "can get the type one value")
                    if not rets[0].type.builtin: tokens[prev_pos].error("syntax", "can get the type of a builtin only")
                    #impl.implementation.append(CodeWord(rets[0].type.builtin))
                    varname = get(tokens, pos).text
                    variable = Variable(varname, rets[0].type)
                    impl.vars[varname] = variable
                    impl.implementation.append(variable)
                elif tok.text=="builtins" and peek_text(tokens, pos+1)=="::":
                    pos += 2
                    pos, type = process_type(file_cache["builtins"], tokens, pos)
                    if len(type.variations)!=1: get(tokens, pos).error("type", "more than one types in union '"+pretty_name(type.name)+"'")
                    if type.variations[0].builtin is None: get(tokens, pos).error("type", "only builtin types can be unpacked here '"+pretty_name(type.name)+"'")
                    #impl.implementation.append(CodeWord(type.variations[0].builtin))
                    varname = get(tokens, pos).text
                    variable = Variable(varname, type.variations[0])
                    if varname in impl.vars: get(tokens, pos).error("type", "variable already exists '"+pretty_name(varname)+"'")
                    impl.vars[varname] = variable
                    impl.implementation.append(variable)
                else: impl.implementation.append(CodeWord(tok.text))
                pos += 1
            if depth: name.error("syntax", "imbalanced brackets")
            pos += 1
            continue
        if name.text=="return":
            #if impl.fast_return_exception and not impl.nesting and not impl.has_returned_once: 
            #    name.error("safety", "the first return must occur conditionally in recursive functions: 'rec "+impl.name+"'")
            pos, ret = process_statement(file, tokens, pos, impl, current_operator_priority=0)
            impl.returns(ret, name)
            if not ret: impl.implementation.extend([CodeWord("return"), CodeWord(";")])
            else: impl.implementation.extend([CodeWord("goto"), CodeWord("__temp_return"), CodeWord(";")])
            continue
        if name.text=="continue" or name.text=="break":
            if not impl.nesting or impl.nesting[-1]!="while": name.error("syntax", "need to be in a loop to '"+name.text+"'")
            impl.implementation.extend([CodeWord(name.text), CodeWord(";")])
            continue
        if name.text=="while":
            impl.nesting.append("while")
            if_pos = pos-1
            impl.implementation.extend([
                CodeWord("while(1)"),
                CodeWord("{"),
            ])
            pos, ret = process_statement(file, tokens, pos, impl, current_operator_priority=0)
            if len(ret)!=1: name.error("type", "conditions can only evaluate to 'bool'")
            if ret[0].type==TRUE_TYPE:
                if peek_text(tokens, pos)==START_TOKEN: pos = process_body(file, tokens, pos, impl)
                else: pos = process_body(file, tokens, pos-1, impl, one_line=True)    
            elif ret[0].type==FALSE_TYPE:
                if peek_text(tokens, pos)!=START_TOKEN: pos = skip_statement(file, tokens, pos)
                else:
                    depth = 1
                    pos += 1
                    while depth:
                        next_token = get_skip(tokens, pos).text
                        if next_token==START_TOKEN: depth += 1
                        elif next_token==END_TOKEN: depth -= 1
                        pos += 1
            else:
                if ret[0].type!=BOOL_TYPE: name.error("type", "conditions can only evaluate to 'bool' or be constantly true/false")
                impl.implementation.extend([
                    CodeWord("if"), 
                    CodeWord("("),
                    CodeWord("!"),
                    ret[0],
                    CodeWord(")"),
                    CodeWord("break"),
                    CodeWord(";"),
                ])
                if peek_text(tokens, pos)==START_TOKEN: pos = process_body(file, tokens, pos, impl)
                else: pos = process_body(file, tokens, pos-1, impl, one_line=True)
            impl.implementation.append(CodeWord("}"))
            impl.nesting.pop()
            continue
        if name.text=="if":
            if_pos = pos-1
            pos, ret = process_statement(file, tokens, pos, impl, current_operator_priority=0)
            if len(ret)!=1: name.error("type", "conditions can only evaluate to 'bool' but found '"+signature_like(ret)+"'")
            if ret[0].type==TRUE_TYPE:
                if peek_text(tokens, pos)==START_TOKEN: pos = process_body(file, tokens, pos, impl)
                else: pos = process_body(file, tokens, pos-1, impl, one_line=True)
                if peek_text(tokens, pos)=="else":
                    pos += 1
                    if get(tokens, pos).text!=START_TOKEN: pos = skip_statement(file, tokens, pos)
                    else:
                        depth = 1
                        pos += 1
                        while depth:
                            next_token = get_skip(tokens, pos).text
                            if next_token==START_TOKEN: depth += 1
                            elif next_token==END_TOKEN: depth -= 1
                            pos += 1
                continue
            if ret[0].type==FALSE_TYPE:
                if peek_text(tokens,pos)!=START_TOKEN: pos = skip_statement(file, tokens, pos)
                else:
                    depth = 1
                    pos += 1
                    while depth:
                        next_token = get_skip(tokens, pos).text
                        if next_token==START_TOKEN: depth += 1
                        elif next_token==END_TOKEN: depth -= 1
                        pos += 1
                if peek_text(tokens, pos)=="else":
                    if peek_text(tokens, pos)==START_TOKEN: pos = process_body(file, tokens, pos, impl)
                    else: pos = process_body(file, tokens, pos-1, impl, one_line=True)
                continue
            if ret[0].type!=BOOL_TYPE: name.error("type", "conditions can only evaluate to 'bool'")
            impl.implementation.extend([
                CodeWord("if"), 
                CodeWord("("),
                ret[0],
                CodeWord(")"),
                CodeWord("{")
            ])
            previous_vars = {k: v for k, v in impl.vars.items()}
            impl.nesting.append("if")
            if peek_text(tokens, pos)==START_TOKEN: pos = process_body(file, tokens, pos, impl)
            else: pos = process_body(file, tokens, pos-1, impl, one_line=True)
            impl.nesting.pop()
            impl.implementation.append(CodeWord("}"))
            if peek_text(tokens, pos)=="else":
                diff_vars_if = {k: v for k, v in impl.vars.items() if k not in previous_vars}
                impl.vars = previous_vars
                previous_vars = {k: v for k, v in impl.vars.items()}
                impl.implementation.extend([CodeWord("else"), CodeWord("{")])
                pos += 1
                impl.nesting.append("if")
                if peek_text(tokens, pos)==START_TOKEN: pos = process_body(file, tokens, pos, impl)
                else: pos = process_body(file, tokens, pos-1, impl, one_line=True)
                impl.nesting.pop()
                impl.implementation.append(CodeWord("}"))
                for k, v in impl.vars.items():
                    var = diff_vars_if.get(k, None)
                    if var is None: continue
                    if var.type!=v.type:
                        tokens[if_pos].error("safety", "the conditional blocks starting here have a variable with different types '"+k+"'")
                    if var.isprivate!=v.isprivate:
                        tokens[if_pos].error("safety", "the conditional blocks starting here have a variable that changes on whether it is packed in a class '"+k+"'")
                    if var.immutable!=v.immutable:
                        tokens[if_pos].error("safety", "the conditional blocks starting here have a variable that changes on whether it is immutable '"+k+"'") 
                for k, v in diff_vars_if.items():
                    var = impl.vars.get(k, None)
                    if var is None:
                        impl.vars[k] = v
                        continue
                    if var.type!=v.type:
                        tokens[if_pos].error("safety", "the conditional blocks starting here have a variable with different types '"+k+"'")
                    if var.isprivate!=v.isprivate:
                        tokens[if_pos].error("safety", "the conditional blocks starting here have a variable that changes on whether it is packed in a class '"+k+"'")
                    if var.immutable!=v.immutable:
                        tokens[if_pos].error("safety", "the conditional blocks starting here have a variable that changes on whether it is immutable '"+k+"'") 
            continue
        pos, _ = process_statement(file, tokens, pos-1, impl, 0)
    return pos

def process_repo(file: File, tokens: list[Token], pos: int):
    pos += 1
    url_token = get(tokens, pos)
    if not url_token.is_string(): url_token.error("syntax", "repo expects a cstr repo path or url but got '"+name_token.text+"'")
    pos += 1
    if get(tokens, pos).text!="as": tokens[pos].error("syntax", "repo declaration expects 'as' here")
    pos += 1
    local_token = get(tokens, pos)
    if not local_token.is_string(): url_token.error("syntax", "repo expects a cstr repo alias after 'as' but got '"+name_token.text+"'")
    pos += 1
    symbol = local_token.text[1:len(local_token.text)-1]
    path = url_token.text[1:len(url_token.text)-1]
    for repo in repositories:
        if repo.startswith(symbol) or symbol.startswith(repo): local_token.error("syntax", "cannot have specialization between new and old repos '"+symbol+"' and '"+repo+"'")
    if not file.is_main_file:
        if symbol not in repositories:
            tokens[pos-4].error("safety", "for safety, repos can only be defined for the first time in the main file\nFile '"+file.path+"' requires that you add this repo declaration to your main file")
        elif path!= repositories[symbol]:
            tokens[pos-4].error("safety",  "repo '"+symbol+"' has a declaration here that conflicts with a previous one '"+path+"' and '"+repositories[symbol]+"'")
    repositories[symbol] = path
    return pos

def process_import(file: File, tokens: list[Token], pos: int):
    pos += 1
    name_token = get(tokens, pos)
    if not name_token.is_string(): 
        namespace = file.namespaces.get(name_token.text, None)
        if namespace is None: tokens[pos].error("syntax", "import expects a cstr filename or a known namespace but got '"+name_token.text+"'")
        assert isinstance(namespace, File)
        imported = namespace
    else: 
        name = name_token.text
        name = name[1:len(name)-1]
        name = resolve_name(name, name_token)
        if not os.path.exists(name) and name not in file_cache: name_token.error("import", "cannot import file '"+name+"'")
        imported: File = load(name)
    pos += 1
    if peek_text(tokens, pos)=="::":
        pos, imported = process_type(imported, tokens, pos + 1)
    as_mode = peek_text(tokens, pos)=="as"
    if as_mode:
        pos += 1
        name_token = get(tokens, pos)
        name = name_token.text
        pos += 1
    if isinstance(imported, UnionType):
        if not as_mode: name = imported.name
        if name in file.types: name_token.error("import", "cannot overwrite type '"+name+"'")
        file.types[name] = imported
        return pos
    assert isinstance(imported, File)
    if as_mode:
        if name in file.namespaces: name_token.error("import", "cannot overwrite existing namespace '"+name+"'")
        file.namespaces[name] = imported
        return pos
    for type_name, type_value in imported.types.items():
        existing = file.types.get(type_name, None)
        if existing is not None:
            new_type = UnionType(type_name)
            new_type.variations.extend(existing.variations)
            new_type.variations.extend(type_value.variations)
            new_type.variations = list(set(new_type.variations))
            type_value = new_type
        file.types[type_name] = type_value
    for namespace_name, namespace_value in imported.namespaces.items():
        existing = file.namespaces.get(namespace_name, None)
        if existing is not None and existing!=namespace_value: name_token.error("import", "cannot overwrite existing type '"+name+"'")
        file.namespaces[namespace_name] = namespace_value
    return pos

def process_def(file: File, tokens: list[Token], pos: int, fast_return_exception: bool):
    start_token = get(tokens, pos)
    pos += 1
    name = get(tokens, pos).text
    abstract_arg_types = list()
    abstract_arg_names = list()
    abstract_arg_immutability = list()
    abstract_arg_convert_to_ptr = list()
    pos += 1
    if get(tokens, pos).text!="(": tokens[pos].error("syntax", "expecting opening parenthesis")
    pos += 1
    while peek_text(tokens, pos)!=")":
        arg_immutability = True
        if get(tokens, pos).text=="&" or get(tokens, pos).text=="mut":
            pos += 1
            arg_immutability = False
        if peek_text(tokens, pos)=="ptr":
            tokens[pos].error("syntax", "pointers should follow their attached data type. Perhaps you meant 'any ptr'?")
        if peek_text(tokens, pos)=="any" and peek_text(tokens, pos+1)=="ptr":
            pos += 1
            arg_type = smol_namespace.types["any"]
        else: pos, arg_type = process_linear_type(file, tokens, pos)
        if peek_text(tokens, pos)=="ptr":
            pos += 1
            abstract_arg_convert_to_ptr.append(True)
        else: abstract_arg_convert_to_ptr.append(False)
        arg_name = peek_text(tokens, pos)
        if arg_name==")" or arg_name==",": arg_name = "__temp_anon"+str(len(abstract_arg_types)) # reproducible argument names for is_same checks
        else: pos += 1
        abstract_arg_types.append(find_unique_variations(arg_type.variations))
        if POINTER_TYPE in arg_type.variations: tokens[pos].error("syntax", "pointers should follow their attached data type. Perhaps you meant 'any ptr'?")
        abstract_arg_names.append(arg_name)
        abstract_arg_immutability.append(arg_immutability)
        next_symbol = peek_text(tokens, pos)
        if next_symbol==")": break
        if next_symbol!=",": tokens[pos].error("syntax", "expecting comma between arguments")
        pos += 1 # skip the comma
    if get(tokens, pos).text!=")": tokens[pos].error("syntax", "expecting closing parenthesis")
    pos += 1
    starting_pos = pos
    greatest_pos = None
    for arg_types in itertools.product(*abstract_arg_types):
        pos = starting_pos
        impl = ImplementedType(name, at=start_token)
        impl.fast_return_exception = fast_return_exception
        try:
            for arg_name, arg_type, immutable, convert_to_ptr in zip(abstract_arg_names, arg_types, abstract_arg_immutability, abstract_arg_convert_to_ptr):
                if convert_to_ptr:
                    impl.vars[arg_name] = Variable(arg_name, POINTER_TYPE, immutable)
                    impl.args.append(arg_name)
                    impl.set_pointer_type(impl.vars[arg_name], arg_type)
                    continue
                elif arg_type.builtin:
                    impl.vars[arg_name] = Variable(arg_name, arg_type, immutable)
                    impl.args.append(arg_name)
                    if arg_type==POINTER_TYPE: impl.set_pointer_type(impl.vars[arg_name], ANY_TYPE)
                    continue
                for ret in arg_type.rets:
                    ret_name = arg_name+"__"+ret
                    impl.vars[ret_name] = arg_type.vars[ret].renamed_copy(ret_name)
                    if immutable: impl.vars[ret_name] = impl.vars[ret_name].private_copy()
                    impl.args.append(ret_name)
            found_type: UnionType = file.types.get(impl.name)
            already_parsed = None
            if found_type is not None:
                # there may be some duplicate argument schemes - skip those
                # the duplicate schemes arise, e.g., when we overload constructors for the same type
                for variation_position, variation in enumerate(found_type.variations):
                    is_same = len(variation.args)==len(impl.args)
                    if is_same:
                        for variation_arg, impl_arg in zip(variation.args, impl.args):
                            if not variation.vars[variation_arg].is_same(impl.vars[impl_arg]):
                                is_same = False
                    if is_same:
                        already_parsed = variation_position
                        break
                if already_parsed is not None: 
                    if found_type.variations[already_parsed].at!=impl.at: continue
            try:
                pos = process_body(file, tokens, pos, impl)
            except FastReturnException: 
                assert fast_return_exception
            #if not impl.force_not_inline and fast_return_exception: continue # register only forcefully RECURSIVE variations
            #make a union type to store the implementation if one does not already exist
            if found_type is None:
                found_type = UnionType(impl.name)
                file.types[impl.name] = found_type
            if already_parsed is not None:
                for a in impl.__dict__:
                    if a not in ["monomorphic_name", "force_not_inline"]:
                        setattr(found_type.variations[already_parsed], a, getattr(impl, a))
            else: found_type.variations.append(impl)
            greatest_pos = pos
        except CompfailException: pass
    if name not in file.types: start_token.error("safety", "no valid variations of '"+name+"'; either due to compiler::fail everywhere or becuase you are trying to overload a function that exists.")
    if greatest_pos is None: start_token.error("safety", "no valid variations of '"+name+"'; either due to compiler::fail everywhere or because you are trying to overload a function that exists.")
    pos = greatest_pos
    return pos  # all parsing should end at the same position

def process_union(file: File, tokens: list[Token], pos: int):
    start_token = get(tokens, pos)
    pos += 1
    union_name = get(tokens, pos).text
    if union_name in file.types: tokens[pos].error("type", "type already exists '"+union_name+"'")
    pos += 1
    if get(tokens,pos).text!="=": tokens[pos].error("syntax", "expecting '='")
    pos += 1
    union_type = UnionType(union_name)
    while True:
        pos, variation = process_type(file, tokens, pos)
        union_type.variations.extend(variation.variations)
        if peek_text(tokens, pos)!="|": break
        pos += 1
    file.types[union_name] = union_type
    return pos

def process(file: File, tokens: list[Token], pos: int) -> File:
    # this schema assumes that imports and repos happen before defs
    # first pass: process functions only up to their first return
    has_made_def = False
    i = 0
    while i<len(tokens):
        tok = tokens[i]
        if tok.text=="def" or tok.text=="rec": 
            has_made_def = True
            if peek_text(tokens, i+2)=="=": 
                if tok.text=="rec": tok.error("cannot define a type union with 'rec'")
                i = process_union(file, tokens, i)
            else: 
                pos_end = i
                depth = 0
                while pos_end<len(tokens):
                    txt = get_skip(tokens, pos_end).text
                    if txt==START_TOKEN: depth += 1
                    if txt==END_TOKEN: 
                        depth -= 1
                        if depth==0: break
                    pos_end += 1
                i = process_def(file, tokens, i, fast_return_exception=tok.text=="rec")
                i = pos_end+1
        elif tok.text=="import": 
            if has_made_def: tok.error("syntax", "can only import before the file's first 'def'")
            i = process_import(file, tokens, i)
        elif tok.text=="repo": 
            if has_made_def: tok.error("syntax", "can declare repos before the file's first 'def'")
            i = process_repo(file, tokens, i)
        else: tok.error("syntax", "expecting  'def', 'repo', or 'import' but found '"+str(tok.text)+"'")
    # second pass: process the rest of functions (skip other syntax stuff)
    i = 0
    while i<len(tokens):
        tok = tokens[i]
        if tok.text=="rec":
            i = process_def(file, tokens, i, fast_return_exception=False)
        else: i += 1
    return file

def resolve_name(path: str, at_token: Token|None) -> str:
    symbol = path
    for repo, url in repositories.items():
        if path.startswith(repo):
            path = url+path[len(repo):]
            symbol = path # TODO: decide between this and the commented implementation (this one is a tad slower but more flexible)
            break
    # if not os.path.exists(path) and not path.startswith("https://") and not path.startswith("http://"):
    #     for repo, url in repositories.items():
    #         if path.startswith(repo):
    #             path = url+path[len(repo):]
    #             break
    if path.startswith("https://") or path.startswith("http://"):
        if symbol==path: 
            symbol = "./.cache"+urllib.parse.urlsplit(path).path
            if os.path.exists(symbol): return symbol
        try: 
            os.makedirs(os.path.dirname(symbol), exist_ok=True)
            download_with_progress(path, symbol, "download     "+os.path.basename(symbol).ljust(40))
        except Exception as e: 
            if at_token: at_token.error("download", str(e))
            print("[✗] failed:")
            print(str(e))
            sys.exit(1)
    else: symbol = path
    return symbol

def _load(path: str, is_main_file: bool=False) -> File:
    file = File(path)
    file.is_main_file = is_main_file
    tokens = list()
    nesting_levels = [0]
    row = 0
    with open(path, "r") as f:
        for line in f:
            row += 1
            count_spaces = len(line)
            line = line.strip(" \t")
            count_spaces -= len(line)
            if not len(line) or line.startswith("//") or line=="\n": continue
            prev_nesting_level = nesting_levels[len(nesting_levels)-1]
            while count_spaces < prev_nesting_level:
                tokens.append(Token(END_TOKEN, file, row, prev_nesting_level+1))
                nesting_levels.pop() # pop from back
                prev_nesting_level = nesting_levels[len(nesting_levels)-1]
                if count_spaces > prev_nesting_level: Token(" "*count_spaces, file, row, 1).error("syntax", "misaligned indentation")
            if count_spaces > prev_nesting_level:
                tokens.append(Token(START_TOKEN, file, row, count_spaces+1))
                nesting_levels.append(count_spaces)
            col = 0
            token_start = 0
            while col < len(line):
                c = line[col] # c is a character
                if c in " \t\n\r":
                    if token_start<col: tokens.append(Token(line[token_start:col], file, row, token_start + 1 + count_spaces))
                    while True:
                        col += 1
                        if col==len(line): break
                        c = line[col]
                        if c not in " \t\n\r": break
                    token_start = col
                elif c=="\"":
                    if token_start<col: tokens.append(Token(line[token_start:col], file, row, token_start + 1 + count_spaces))
                    token_start = col
                    while True:
                        col += 1
                        if col==len(line): Token(line[token_start:col], file, row, token_start + 1 + count_spaces).error("syntax", "string never closed (strings cannot continue across multiple lines) - "+line[token_start:col])
                        if line[col]=="\"" and (line[col-1]!="\\" or col<2 or line[col-2]=="\\"): break
                    col += 1
                    tokens.append(Token(line[token_start:col], file, row, token_start + 1 + count_spaces))
                    token_start = col
                elif c=="/" and col<len(line)-1 and line[col+1]=="/":
                    if token_start<col: tokens.append(Token(line[token_start:col], file, row, token_start + 1 + count_spaces))
                    token_start = col # comment out stuff
                    break
                elif c in symbols:
                    if token_start<col: tokens.append(Token(line[token_start:col], file, row, token_start + 1 + count_spaces))
                    token_start = col
                    while True:
                        col += 1
                        if col==len(line): break
                        if c in "(){}[];&|.": break
                        c = line[col]
                        if c not in symbols or c in "(){}[];&|": break
                    if token_start<col: tokens.append(Token(line[token_start:col], file, row, token_start + 1 + count_spaces))
                    token_start = col
                else: col += 1
            if token_start<col: tokens.append(Token(line[token_start:col], file, row, token_start +1 + count_spaces))

    processed_tokens = list()
    len_tokens = len(tokens)
    i = 0
    while i<len_tokens:
        token = tokens[i]
        if token.is_int() and i<len_tokens-2 and tokens[i+1].text=="." and tokens[i+2].is_int():
            try:
                float_token = Token(token.text+"."+tokens[i+2].text, token.file, token.row, token.col)
                float(float_token.text)
                processed_tokens.append(float_token)
                i += 3
                continue
            except: pass
        processed_tokens.append(token)
        i += 1
    return file, processed_tokens

def download_with_progress(url: str, filepath: str, message: str):
    filename = os.path.basename(filepath)
    try:
        response = urllib.request.urlopen(url)
        total_size = int(response.getheader('Content-Length').strip())
    except Exception as e:
        print(f"\r[{YELLOW}+{RESET}] {message} ... (unknown size)")
        urllib.request.urlretrieve(url, filepath)
        return
    chunk_size = 8192
    downloaded = 0
    with open(filepath, 'wb') as f:
        while True:
            chunk = response.read(chunk_size)
            if not chunk: break
            f.write(chunk)
            downloaded += len(chunk)
            percent = downloaded / total_size * 50
            bar_len = 30
            filled_len = int(bar_len * downloaded // total_size)
            bar = '█' * filled_len + '-' * (bar_len - filled_len)
            sys.stdout.write(f"\r[{YELLOW}+{RESET}] {message} {GREEN}[{bar}]{RESET} {percent:.1f}% | {YELLOW}{downloaded // 1024 // 1024}MB{RESET} / {total_size // 1024 // 1024}MB")
            sys.stdout.flush()
    print()

file_cache: dict[str, File] = dict()
def load(path: str, is_main_file: bool=False) -> File:
    file = file_cache.get(path, None)
    if file is None:
        # this weird sequencing here is so that we can import partially imported modules without circular overflow
        file, processed_tokens = _load(path, is_main_file)
        file_cache[path] = file
        process(file, processed_tokens, 0)
    return file

POINTER_TYPE = ImplementedType("ptr", "void*", memory_size=8)
CSTR_TYPE = ImplementedType("cstr", "const char*", memory_size=8)
BOOL_TYPE = ImplementedType("bool", "int", memory_size=8)
INT_TYPE = ImplementedType("int", "long long int", memory_size=8)
FLOAT_TYPE = ImplementedType("float", "double", memory_size=8)
UINT_TYPE = ImplementedType("nat", "unsigned long long", memory_size=8)
CHAR_TYPE = ImplementedType("char", "char", memory_size=1)
FALSE_TYPE = ImplementedType("false", "int")
TRUE_TYPE = ImplementedType("true", "int")
FAIL_TYPE = ImplementedType("skipdef")
ANY_TYPE = ImplementedType("any")
# FAIL_TYPE.vars["message"] = CSTR_TYPE
# FAIL_TYPE.args.append("message") 
SAME_CONTENTS_TYPE = ImplementedType("attach_type")
SAME_CONTENTS_TYPE.vars["to"] = Variable("to", POINTER_TYPE)
SAME_CONTENTS_TYPE.vars["from"] = Variable("from", POINTER_TYPE)
SAME_CONTENTS_TYPE.rets.append("to")
SAME_CONTENTS_TYPE.args.extend(["to", "from"])
SAME_CONTENTS_TYPE.set_pointer_type(SAME_CONTENTS_TYPE.vars["from"], ANY_TYPE)
SAME_CONTENTS_TYPE.set_pointer_depedency(SAME_CONTENTS_TYPE.vars["to"], SAME_CONTENTS_TYPE.vars["from"])

smol_namespace = File("builtins")
smol_namespace.types["cstr"] = UnionType("cstr").append(CSTR_TYPE)
smol_namespace.types["int"] = UnionType("int").append(INT_TYPE)
smol_namespace.types["nat"] = UnionType("nat").append(UINT_TYPE)
smol_namespace.types["float"] = UnionType("float").append(FLOAT_TYPE)
smol_namespace.types["bool"] = UnionType("bool").append(BOOL_TYPE)
smol_namespace.types["err"] = UnionType("err").append(ImplementedType("err", "int"))
smol_namespace.types["blank"] = UnionType("blank").append(ImplementedType("void"))
smol_namespace.types["char"] = UnionType("char").append(CHAR_TYPE)
smol_namespace.types["any"] = UnionType("any").append(ANY_TYPE)

fixed_namespace = File("compiler")
fixed_namespace.types["skipdef"] = UnionType("skipdef").append(FAIL_TYPE)
fixed_namespace.types["true"] = UnionType("true").append(TRUE_TYPE)
fixed_namespace.types["false"] = UnionType("false").append(FALSE_TYPE)
fixed_namespace.types["ptr"] = UnionType("ptr").append(POINTER_TYPE)
fixed_namespace.types["attach_type"] = UnionType("attach_type").append(SAME_CONTENTS_TYPE)
smol_namespace.namespaces["compiler"] = fixed_namespace

file_cache["builtins"] = smol_namespace

def write_and_compile(output_name: str, main_defs: list[ImplementedType], entry_point: str|None) -> None:
    src_path = Path(f"{output_name}.c")
    exe_path = Path(output_name)
    header = (
        "#include <stdio.h>\n"
        "#include <stdlib.h>\n"
        "#include <string.h>\n"
        "\n"
    )

    generated_c_funcs = list()
    c_decls = list()
    already_generated = set()
    def add_implementation(next_def: ImplementedType):
        for candidate_def in next_def.dependent_implementations:
            if candidate_def not in already_generated:
                already_generated.add(candidate_def)
                add_implementation(candidate_def)
        transpiled = next_def.transpile()
        if next_def.force_not_inline: c_decls.append(transpiled[:transpiled.find("{")]+";")
        generated_c_funcs.append(transpiled)
    for main_def in main_defs: add_implementation(main_def)
    if entry_point: generated_c_funcs.append(f"""int main() {{{entry_point}();return 0;}}""")

    body = "\n".join(c_decls)+"\n"+"\n\n".join(generated_c_funcs)
    src_path.write_text(header + body, encoding="utf-8")
    print(f"[{YELLOW}+{RESET}] transpile    {src_path}")
    gcc_cmd = {
        "gcc": [
            "gcc",
            "-O3",
            str(src_path),
            "-o",
            str(exe_path),
        ],
        "antcc": [
            "./antcc",
            "-O2",
            str(src_path),
            "-o",
            str(exe_path),
        ]
    }.get(chosen_compiler, None)
    if gcc_cmd is None:
        print("[✗] "+chosen_compiler+" not found")
        sys.exit(1)
    print(f"[{YELLOW}+{RESET}] compile     ", " ".join(gcc_cmd))
    result = subprocess.run(gcc_cmd, capture_output=True, text=True)
    if result.returncode != 0:
        print("[✗] "+chosen_compiler+" failed:")
        print(result.stderr)
        sys.exit(1)

# ---- MAIN
parser = argparse.ArgumentParser(description="Compile a .s file and optionally run the result.")
parser.add_argument("source", metavar="SOURCE", help="Path to the .s source file to compile.",)
parser.add_argument("--build", action="store_true", help="Build without running.",)
parser.add_argument("--debug", action="store_true", help="Enable debug messages for all failure.",)
parser.add_argument("--back", action="store", help="Choose a backend compiler among auto, antcc, gcc, clang.",)
args = parser.parse_args()
debug_mode = args.debug
chosen_compiler = args.back or "auto"
if chosen_compiler == "auto":
    #if os.path.exists("antcc"): chosen_compiler = "antcc"
    #else: 
    chosen_compiler = "gcc"
src_path = Path(args.source)
if not src_path.is_file(): print(f"{RED}error{RESET}: source file {src_path} does not exist"); sys.exit(1)

print(f"[{YELLOW}+{RESET}] process      {src_path}")
file: File = load(resolve_name(str(src_path), None), is_main_file=True)
main_type: UnionType = file.types.get("main", None)
if not main_type: print(f"{RED}error{RESET}: missing main type"); sys.exit(1)
if len(main_type.variations) > 1: print(f"{RED}error{RESET}: more than one main type"); sys.exit(1)
if main_type.variations[0].rets: print(f"{RED}error{RESET}: main type can only fail or return 'blank()'"); sys.exit(1)

exe_path = src_path.with_suffix("")
write_and_compile(exe_path, {main_type.variations[0]}, main_type.variations[0].monomorphic_name)
if not args.build:
    if not exe_path.is_file(): print(f"{RED}error{RESET}: executable {exe_path} not found"); sys.exit(1)
    print(f"[{YELLOW}+{RESET}] run          ./{exe_path}")
    result = subprocess.run("./"+str(exe_path), text=True, check=False, stdin=sys.stdin, stdout=sys.stdout, stderr=sys.stderr)
    if result.returncode != 0: sys.exit(result.returncode)