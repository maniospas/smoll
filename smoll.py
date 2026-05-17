# Copyright 2025-2026 maniospas
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Run via python (e.g., for development):
# python -m smoll test.s
#
# Compile with:
# nuitka --standalone --onefile --lto=yes --output-filename=smoll --python-flag=no_asserts --python-flag=no_site --python-flag=static_hashes smoll.py


import time
import asyncio
import os
import sys
import struct
import argparse
import itertools
import subprocess
import platform
import urllib.request
import urllib.parse
from pathlib import Path
from collections import deque
from typing import Optional
#import gc
#gc.set_threshold(150000)

RED   = "\033[31m"
GREEN = "\033[32m"
YELLOW= "\033[33m"
PURPLE= "\033[35m"
RESET = "\033[0m"
symbols = "=\\/+-*@<>!%&#!(){}[]:.',;|^"
END_TOKEN = "...]" # impossible for something else to be tokenized as this
START_TOKEN = "[..." # impossible for something else to be tokenized as this
err_code_table: dict[str,int] = dict()
err_code_list = ["\"noerr\"", "\"error\""]
err_code_table["noerr"] = 0
err_code_table["error"] = 1
debug_mode = True
repositories: dict[str, str] = dict()
externals: list["File"] = list()

def strip_quotes(text: str) -> str:
    if len(text)>=2 and text[0]=="\"" and text[-1]=="\"": return text[1:-1]
    return text

class CompfailException(Exception): pass
class FastReturnException(Exception): pass
class FatalException(Exception): pass
class ImportError(Exception): 
    def __init__(self):
        super().__init__(self)

class MemoryEmulator:
    def __init__(self, size: int):
        self.contents = bytearray(size)
        self.consumed = 1
        self.size = size
        self.named_locs: dict[str,int] = dict()
        self.alloc_sizes: dict[int,int] = dict()

    def alloc(self, size: int):
        if self.consumed+size>self.size: return 0
        ret = self.consumed
        self.consumed += size
        self.alloc_sizes[ret] = size
        return ret

    def realloc(self, original: int, size: int):
        # TODO: for now we just alloc again and disuse the previous location
        if original not in self.alloc_sizes: return 0
        if self.alloc_sizes[original]>=size:
            #self.alloc_sizes[original] = size
            return original
        if self.consumed+size>self.size: return 0
        ret = self.consumed
        self.consumed += size
        self.memcpy(ret, original, self.alloc_sizes[original])
        del self.alloc_sizes[original]
        self.alloc_sizes[ret] = size
        return ret

    def free(self, original: int):
        if original not in self.alloc_sizes: return original
        self.memset(original, 0, self.alloc_sizes[original]) # safety in case the VM ends up actually useful
        del self.alloc_sizes[original]
        return 0
    
    def named_alloc_value(self, text: str, contents: str):
        if text not in self.named_locs: 
            contents = contents.encode('raw_unicode_escape').decode('unicode_escape').encode('utf-8')
            size = len(contents)
            addr = self.alloc(size+1)
            self.named_locs[text] = addr
            self.contents[addr:(addr+size)] = contents
            self.contents[addr+len(contents)] = 0
        return self.named_locs[text]

    def named_alloc(self, text: str, size: int):
        if text not in self.named_locs: 
            self.named_locs[text] = self.alloc(size)
        return self.named_locs[text]

    def strcpy(self, addr: int, addr2: int):
        try: end = self.contents.index(0, addr2)
        except ValueError: end = len(self.contents)
        self.contents[addr:(addr+end-addr2)] = self.contents[addr2:end]
        self.contents[addr+end-addr2] = 0

    def strlen(self, addr: int):
        try: end = self.contents.index(0, addr)
        except ValueError: end = len(self.contents)
        return end-addr

    def memcpy(self, addr: int, addr2: int, size: int):
        self.contents[addr:(addr+size)] = self.contents[addr2:(addr2+size)]
    
    def memcmp(self, addr: int, addr2: int, size: int):
        return 0 if self.contents[addr:(addr+size)] == self.contents[addr2:(addr2+size)] else 1

    def as_str(self, addr: int, size: int):
        try: end = self.contents.index(0, addr)
        except ValueError: end = len(self.contents)
        return self.contents[addr:min(addr+size,end)].decode('utf-8')
    
    def as_cstr(self, addr: int) -> str:
        try: end = self.contents.index(0, addr)
        except ValueError: end = len(self.contents)
        return self.contents[addr:end].decode('utf-8')

    def write_uint32(self, addr: int, value: int):
        struct.pack_into('<I', self.contents, addr, value)
    def read_uint32(self, addr: int) -> int:
        return struct.unpack_from('<I', self.contents, addr)[0]

    def write_uint16(self, addr: int, value: int):
        struct.pack_into('<H', self.contents, addr, value)
    def read_uint16(self, addr: int) -> int:
        return struct.unpack_from('<H', self.contents, addr)[0]

    def write_int64(self, addr: int, value: int):
        struct.pack_into('<q', self.contents, addr, value)

    def read_int64(self, addr: int) -> int:
        return struct.unpack_from('<q', self.contents, addr)[0]

    def write_uint64(self, addr: int, value: int):
        struct.pack_into('<Q', self.contents, addr, value)

    def read_uint64(self, addr: int) -> int:
        return struct.unpack_from('<Q', self.contents, addr)[0]

    def write_float64(self, addr: int, value: float):
        struct.pack_into('<d', self.contents, addr, value)

    def read_float64(self, addr: int) -> float:
        return struct.unpack_from('<d', self.contents, addr)[0]

    def memset(self, addr: int, value: int, size: int):
        self.contents[addr:(addr + size)] = bytes([value & 0xFF]) * size


def pretty_name(name: str):
    parts = name.split("__")
    last_good_part = 0
    while last_good_part<len(parts):
        if not parts[last_good_part]: break
        last_good_part += 1
    if last_good_part>=len(parts):
        return ".".join(parts)
    first_end_good_part = len(parts)
    while first_end_good_part>last_good_part:
        first_end_good_part -= 1
        if not parts[first_end_good_part]: break        
    ret = ".".join(parts[:(last_good_part+1)])+".."
    if first_end_good_part<len(parts)-2:
        ret += ".".join(parts[(first_end_good_part+2):])
    return ret 

temps: list[str]= list()
def create_temp():
    temp = "__temp"+str(len(temps))+"v"
    temps.append(temp)
    return temp

def longest_common_prefix(strings: list[str]) -> str:
    if not strings: return ""
    strings = [s for s in strings]
    strings.sort()
    first, last = strings[0], strings[-1]
    i = 0
    found = 0
    while i < len(first) and first[i] == last[i]: 
        if i and first[i]=="_" and first[i-1]=="_":
            found = i+1
        if i == len(first)-1:
            found = i+1
        i += 1
    prefix = first[:found]
    if "____temp" in prefix: prefix = prefix[:prefix.rfind("____temp")+2]
    return prefix
#from mypy_extensions import mypyc_attr

#@mypyc_attr(acyclic=True)
class CodeSegment:
    def tostring(self): return ""
    def copy(self, prefix: str): return self
    def is_temp(self): return False

#@mypyc_attr(acyclic=True)
class CodeWord(CodeSegment):
    def __init__(self, name: str): self.name = name
    def tostring(self): return self.name
    def copy(self, prefix: str): return self
    
CODEWORD_EQUALS = CodeWord("=")
CODEWORD_LPAR = CodeWord("(")
CODEWORD_RPAR = CodeWord(")")
CODEWORD_AMP = CodeWord("&")
CODEWORD_NOT = CodeWord("!")
CODEWORD_COMMA = CodeWord(",")
CODEWORD_ADD = CodeWord("+")
CODEWORD_MUL = CodeWord("*")
CODEWORD_LBRACKET = CodeWord("{")
CODEWORD_RBRACKET = CodeWord("}")
CODEWORD_SEMICOLON = CodeWord(";")
CODEWORD_PRINTF = CodeWord("printf")
CODEWORD_GOTO = CodeWord("goto")
CODEWORD_IF = CodeWord("if")

def print_lsp_var(tok, signature:str):
    print("---")
    print("variable")
    print(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    print(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print("```rust\n"+signature+"\n```")

def print_lsp_string(tok):
    print("---")
    print("string")
    print(os.path.abspath(tok.file.resolved_path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    print(os.path.abspath(tok.file.resolved_path))
    print(tok.row)
    print(tok.col)
    print("a string literal")

def print_lsp_literal(tok: "Token", name: str):
    print("---")
    print("number")
    print(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    print(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(name)

def print_lsp_keyword(tok: "Token", description: str):
    print("---")
    print("keyword")
    print(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    print(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(description)

def print_lsp_definition(tok: "Token", description: str):
    print("---")
    print("keyword")
    print(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    print(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(description)

def print_lsp_decorator(tok: "Token", description: str):
    print("---")
    print("decorator")
    print(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    print(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(description)

class CallPointer(CodeSegment):
    def __init__(self, callee: "ImplementedType"):
        self.name = callee.monomorphic_name
        self.callee = callee
    def tostring(self): return self.name
    def copy(self, prefix: str): return self

#@mypyc_attr(acyclic=True)
class Variable(CodeSegment):
    def __init__(self, name: str, type: "ImplementedType", immutable: bool=True, isprivate: bool=False, _references: str|None=None):
        self.name = name
        self.type = type
        self.immutable = immutable
        self.isprivate = isprivate
        self._references = _references
    def tostring(self): return self.name
    def copy(self, prefix: str): return Variable(prefix+"__"+self.name, self.type, self.immutable, self.isprivate, self._references)
    def renamed_copy(self, new_name: str): return Variable(new_name, self.type, self.immutable, self.isprivate, self._references)
    def mutable_copy(self, error_token): 
        if error_token and self.type==POINTER_TYPE and self.immutable: 
            error_token.error("safety", "cannot make mutable an immutable pointer '"+pretty_name(self.name)+"'", suggestions=["set the pointer or its data structure locally as a 'ref'; this fixes references to the original while mutating the rest", "if you know what you are doing, use 'unsafe_mut' instead to overwrite safety"])
        if error_token and self._references: # this should not appear when 'mut' is used for both mutation and safe mutation
            error_token.error("safety", "cannot make a reference mutable '"+pretty_name(self.name), suggestions=["use 'safe_mut' instead", "use 'ref mut' instead of 'mut ret'"])
        return Variable(self.name, self.type, False, self.isprivate, self._references)
    def immutable_copy(self): return Variable(self.name, self.type, True, False, self._references)
    def private_copy(self): return Variable(self.name, self.type, self.immutable, True, self._references)
    def is_same(self, other: "Variable"):
        if self.type!=other.type: return False
        if self.immutable!=other.immutable: return False
        if self.isprivate!=other.isprivate: return False
        #if self.type.builtin and self.name!=other.name: return False # skip name matching
        return True
    def is_temp(self): return self.name.startswith("__temp")
    def stable_copy(self):
        return Variable(self.name, self.type, self.immutable, self.isprivate, self.name)
    def stabilized_name(self) -> str:
        if self._references is None: return self.name
        return self._references
        
def signature_like(vars: list[Variable], impl=None):
    ret = ""
    i = 0
    where: list[str] = list()
    while i<len(vars):
        if ret: ret += ", "
        type = vars[i].type
        arg_name = vars[i].name
        if arg_name.startswith("__temp") or "____" in arg_name: arg_name = ""
        else: arg_name = " "+arg_name.replace("__", ".")
        if type.builtin: 
            if not vars[i].immutable: ret += "mut "
            if type==POINTER_TYPE and impl: 
                pointer_type = impl.get_pointer_type(vars[i])
                if pointer_type is None: ret += "any "
                else: ret += pointer_type.name+" "
            ret += type.name+arg_name
            i += 1
        elif type.is_literal_of: 
            ret += type.at.text
            i += len(type.rets)
        elif type.is_buffer_of: 
            if all(not vars[k].immutable for k in range(i, min(len(vars),i+len(type.rets)))): ret += "mut "
            elif all(vars[k].immutable for k in range(i, min(len(vars),i+len(type.rets)))): ret += "const "
            element_size = type.is_buffer_of.memory_size()
            ret += type.is_buffer_of.name+"[]"+arg_name+" element size "+(str(element_size) if element_size else "?")
            i += len(type.rets)
        else:
            if all(not vars[k].immutable for k in range(i, min(len(vars),i+len(type.rets)))): ret += "mut "
            elif all(vars[k].immutable for k in range(i, min(len(vars),i+len(type.rets)))): ret += "const "
            ret += type.name+arg_name
            i += len(type.rets)
        assert len(type.rets)
    return ret

global_cstr2var: dict[str,str] = dict() # from literal to variable name
global_var2cstr: dict[str,str] = dict() # from variable name to literal

class ImplementedType:
    def __init__(self, name: str, builtin:str|None=None, at:Optional["Token"]=None, memory_size=0):
        self.name = name
        self.invalidated_by = self # which type's invalidation cause invalidation of this - right now helps invalidate pointer buffers
        self.is_literal_of: Optional["ImplementedType"] = None
        self.monomorphic_name = name+create_temp()
        self.has_retrieved_class: Optional["Token"] = None
        self.has_retrieved_singleton: Optional["Token"] = None
        self.return_names: dict[str, int] = dict() # map return names to indexes in rets
        self.doc: list[str] = list()
        self.VM: str|None = None # an equivalent python implementation for the VM
        self.effect_names: list[str] = list()
        self.args: list[str] = list()
        self.rets: list[str] = list()
        self.vars: dict[str, Variable] = dict()
        self.implementation: list[CodeSegment] = list()
        self.preparation: list[CodeSegment] = list()
        self.deallocation: list[CodeSegment] = list()
        self.used_error_codes: set[ImplementedType] = set() # called functions whose error codes we actually use
        self.spawned_error_codes: set[int] = set() # called fails
        self.has_caught_used_error_codes = False
        self.builtin = builtin
        self.nominal = True if builtin else False
        self.at = at
        self.nesting: list[str] = list()
        self.has_returned_once = False
        self.needs_failure_mode = False
        self.has_any_complaint = False
        self.is_buffer_of: ImplementedType|None = None
        self.used_globals: set[str] = set()
        self.dependent_implementations: list[ImplementedType] = list() # deoendent pointer TYPES
        self.dependent_assignments: dict[str, str] = dict() # e.g., dependent memory regions
        self.defers: list[list[CodeSegment]] = list() # release code for specific variables
        self.returned_defers: list[list[CodeSegment]] = list()
        self._pointer_types: dict[str, ImplementedType] = dict() # only place pointer variables here
        self._pointer_type_dependencies: dict[str, str] = dict() # only place pointer variables here
        self.invalidated: dict[str, Token] = dict() # invalidated variables and the place where the invalidation occurred
        self.invalidate_types_when_called: list[ImplementedType] = list()
        self.invalidate_types_on_defer: list[ImplementedType] = list() # add to invalidate_types_when_called only if there if we keep at least one defer locally
        self.accumulating_defers: list[dict[str, Token]] = [dict()] # for the top level we defer at the end of code block, but track loop defers here
        self.is_parsing_a_defer = False
        self.is_parsing_a_try: list[Variable|None] = list() # list of variables that hold try results
        self.can_try_interpreter: bool = True
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

    def gather_spawned_error_codes(self, discovered: set["ImplementedType"]):
        ret = set()
        if self in discovered: return ret
        discovered.add(self)
        ret = ret.union(self.spawned_error_codes)
        if not self.has_caught_used_error_codes: return ret
        for other in self.used_error_codes: ret = ret.union(other.gather_spawned_error_codes(discovered))
        return ret

    def stabilize(self, rets: list[str]):
        return [self.vars[ret._references] if ret._references else ret for ret in rets]

    def simplify(self) -> None:
        label_usage: dict[str, int] = dict()
        variable_sets: dict[str, int] = dict()

        # remove final return goto
        if len(self.implementation)>=3 and self.implementation[-3].tostring()=="goto" and self.implementation[-2].tostring()=="__temp_return":
            assert self.implementation[-1].tostring()==";"
            self.implementation = self.implementation[:-3]

        # remove goto next label, otherwise count label usage, and count variable modifications
        new_implementation = list()
        pos = -1
        while pos<len(self.implementation)-1:
            pos += 1
            v = self.implementation[pos]
            text = v.tostring()
            if text in ["=", "&"] and pos:
                var = self.implementation[pos-1].tostring()
                variable_sets[var] = variable_sets.get(var, 0)+1
            if text=="goto" and pos<len(self.implementation)-2:
                label = self.implementation[pos+1].tostring()
                assert self.implementation[pos+2].tostring()==";"
                if pos<len(self.implementation)-4 and self.implementation[pos+3].tostring()==label:
                    assert self.implementation[pos+4].tostring()==":"
                    pos += 1 # skip the goto statement
                    continue
                label_usage[label] = label_usage.get(label,0)+1
            new_implementation.append(v)
        self.implementation = new_implementation

        # remove variables that are set only once, unless those are args or returned
        for var in self.rets: variable_sets[var] = variable_sets.get(var, 0)+2
        for var in self.args: variable_sets[var] = variable_sets.get(var, 0)+2
        for var in self.returned_defers:
            if isinstance(var, Variable): variable_sets[var.name] = variable_sets.get(var.name, 0)+2
        substitute: dict[str,Variable] = dict()

        for var, val in list(self.vars.items()):
            if var.startswith("__temp") and "____" in var and var not in substitute and var not in self.args and var not in self.rets:
                val = val.renamed_copy(create_temp())
                substitute[var] = val
                self.vars[val.name] = val

        def count(impl):
            pos = -1
            while pos<len(impl)-1:
                pos += 1
                v = impl[pos]
                text = v.tostring() 
                if text=="=" and pos and pos<len(self.implementation)-2 and impl[pos+2]==";":
                    var = impl[-1].tostring()
                    rhs = impl[1].tostring()
                    if variable_sets.get(var,0)==1 and rhs in self.vars:
                        substitute[var] = substitute.get(rhs, impl[1])
        count(self.implementation)
        
        def rename(impl):
            new_implementation = list()
            pos = -1
            while pos<len(impl)-1:
                pos += 1
                v = impl[pos]
                text = v.tostring() 
                new_implementation.append(substitute.get(text, v))
            return new_implementation

        self.implementation = rename(self.implementation)
        self.defers = [rename(defer) for defer in self.defers]
        self.returned_defers = [rename(defer) for defer in self.returned_defers]

        def remove_noop(impl):
            new_implementation = list()
            pos = -1
            while pos<len(impl)-1:
                pos += 1
                if pos<len(impl)-3 and impl[pos+1].tostring()=="=" and impl[pos].tostring()==impl[pos+2].tostring() and impl[pos+3].tostring()==";":
                    pos += 3
                    continue
                new_implementation.append(impl[pos])
            return new_implementation

        self.implementation = remove_noop(self.implementation)
        self.defers = [remove_noop(defer) for defer in self.defers]
        self.returned_defers = [remove_noop(defer) for defer in self.returned_defers]


        # clean up the set of used variables

        varset: set[str] = set()
        for vs in self.args: varset.add(vs)
        for vs in self.rets: varset.add(vs)
        for v in self.implementation:
            if isinstance(v, Variable): varset.add(v.name)
        for defer in self.defers:
            for v in defer:
                if isinstance(v, Variable): varset.add(v.name)
        for defer in self.returned_defers:
            for v in defer:
                if isinstance(v, Variable): varset.add(v.name)
        self.vars = {k:v for k,v in self.vars.items() if k in varset}


    def set_pointer_type(self, var: Variable, type: "ImplementedType"):
        assert var.type == POINTER_TYPE
        assert var.name not in self._pointer_type_dependencies
        assert not self.get_pointer_type(var)
        self._pointer_types[var.name] = type

    def follow_pointer_dependency(self, var: Variable) -> Variable|None:
        varname = var.name
        if varname not in self._pointer_type_dependencies: return None
        visited: set[str] = set()
        while varname in self._pointer_type_dependencies:
            varname = self._pointer_type_dependencies.get(varname, "")
            if varname in visited: return None
            visited.add(varname)
        return self.vars[varname]

    def get_pointer_type(self, var: Variable) -> Optional["ImplementedType"]:
        assert isinstance(var, Variable)
        visited: set[str] = set()
        while True:
            ret = self._pointer_types.get(var.name, None)
            if ret is not None: return ret
            dependency: str|None = self._pointer_type_dependencies.get(var.name, None)
            if dependency is None: return None
            if dependency in visited: return None
            visited.add(dependency)
            var = self.vars.get(dependency)
            if var is None: return None

    def set_pointer_depedency(self, var: Variable, depends_on: Variable):
        assert isinstance(var, Variable)
        assert isinstance(depends_on, Variable)
        assert var not in self._pointer_type_dependencies
        assert not self.get_pointer_type(var)
        #assert self.get_pointer_type(depends_on), "Need to have pointer type for "+depends_on.name+" in "+self.name
        self._pointer_type_dependencies[var.name] = depends_on.name

    def memory_size(self):
        if self.builtin: return self._memory_size
        ret = self._memory_size
        i = 0
        while i<len(self.rets):
            arg = self.rets[i]
            # if self.vars[arg].type.is_buffer_of: 
            #     i += 4
            #     continue
            if self.vars[arg].type.builtin: ret += self.vars[arg].type.memory_size()
            i += 1
        return ret

    def signature(self):
        if self.is_buffer_of: return "buffer of "+signature_like([self.is_buffer_of.vars[arg] for arg in self.is_buffer_of.rets], self.is_buffer_of)
        args = signature_like([self.vars[arg] for arg in self.args], impl=self)
        rets = signature_like([self.vars[arg] for arg in self.rets], impl=self)
        return ("" if "__" in self.name else self.name)+"("+args+") -> ("+rets+")"+(" with effects "+','.join(self.effect_names) if self.effect_names else "")

    def assign(self, varname: str, value: list[Variable], error_token: "Token", perform_immutability_checks: bool=True, top_entry: bool=True):
        # for segment in varname.split("--"):
        #     if segment in ["def", "repo", "import", "return", "mut", "unsafe_mut", "const"]:
        #         error_token.error("safety", "keyword '"+segment+"' cannot be assigned to")
        #     if segment in operators:
        #         error_token.error("safety", "operator '"+segment+"' cannot be assigned to")
        if len(value)==0: error_token.error("type", "no expression value to assign to variable '"+varname+"'")
        if len(value)>1:
            common_prefix = longest_common_prefix([var.name for var in value])
            len_common_prefix = len(common_prefix)
            if top_entry and "__" in varname and not varname.startswith("__temp"):
                if not any(v.startswith(varname) for v in self.vars.keys()):
                    error_token.error("type", "trying to add a field that the type does not have '"+pretty_name(varname)+"'")
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
                for i in range(len(value)): self.assign(found[i].name, [value[i]], error_token, perform_immutability_checks, top_entry=False)
                return None
        if existing is not None and existing.type!=value[0].type: 
            if existing.type == POINTER_TYPE: error_token.error("type", "mismatching types '"+existing.type.signature()+"' vs '"+value[0].type.signature()+"'\nPerhaps you meant to place a value on a pointer with the pattern '"+existing.name+"&& = ...'")
            if existing.type.is_buffer_of and value[0].type.is_buffer_of and match_structure_with(existing.type.is_buffer_of, value[0].type.is_buffer_of): 
                pass
            else: error_token.error("type", "mismatching types '"+existing.type.signature()+"' vs '"+value[0].type.signature()+"'")
        if perform_immutability_checks and existing and existing.immutable: 
            # allow overwrting a variable by itself, especially if the overwriting is a reference to the same thing
            if (self.get_assignment(existing.stabilized_name(), [value[0].stabilized_name()]) or self.get_assignment(value[0].stabilized_name(), [existing.stabilized_name()])) or (existing.type==value[0].type and not existing.type.builtin): pass
            elif not existing.type.builtin and "____" in varname: error_token.error("safety", "cannot overwrite immutable class instance '"+pretty_name(varname.split("____")[0])+"'")
            else: error_token.error("safety", "cannot overwrite immutable variable '"+pretty_name(varname)+"' unless with itself or a directly equal value")
        if existing and existing._references is not None and value[0]._references!=existing._references and perform_immutability_checks:
            error_token.error("safety", "variable '"+pretty_name(existing.name.split("____")[0])+"' is an in-scope reference to '"+pretty_name(existing._references.split("____")[0])+"' and can only admit another reference to the same variable")
        if existing and not existing.immutable and value[0].immutable: 
            value[0] = value[0].mutable_copy(error_token)
            #error_token.error("type", "cannot overwrite mutable variable with immutable one '"+varname+"'")
        #if existing is None: # force the following two lines so that we can revoke mutability
        existing = value[0].renamed_copy(varname)
        self.vars[varname] = existing
        if existing.type==POINTER_TYPE:
            if existing.stabilized_name() in self.invalidated: del self.invalidated[existing.stabilized_name()]
            existing_pointer_type = self.get_pointer_type(existing)
            other_pointer_type = self.get_pointer_type(value[0])
            #print(existing.name, existing_pointer_type.name if existing_pointer_type else None, value[0].name, other_pointer_type.name if other_pointer_type else None)
            if existing_pointer_type is not None:
                if existing_pointer_type!=other_pointer_type and (other_pointer_type is None or not match_structure_with(existing_pointer_type, other_pointer_type)):
                    error_token.error("safety", "cannot overwrite pointer with different type '"+existing_pointer_type.signature()+"' vs '"+(other_pointer_type.signature() if other_pointer_type else "missing type")+"'")
            else:
                self.set_pointer_depedency(existing, value[0])

        accumulated_defer = self.accumulating_defers[-1].get(existing.name, None)
        if accumulated_defer is not None: # important to do this before setting dependent_assignments
            if not self.get_assignment(existing.name, [value[0].name]):
                error_token.error("safety", "this creates a leaking resource '"+pretty_name(value[0].name)+"'", reason=accumulated_defer, raason_message="due to overwriting", suggestions=["release the resource with 'del'", "initialize the resource before the loop"])
        accumulated_defer = self.accumulating_defers[-1].get(value[0].stabilized_name(), None)
        if accumulated_defer is not None:
            self.accumulating_defers[-1][existing.name] = accumulated_defer

        # TODO: this is risky but a huge optimization for code size if it can be made to work somehow (e.g., delegate to future invalidations by setting to dependent_assignments)
        already_assigned = False#self.get_assignment(existing.stabilized_name(), [value[0].stabilized_name()])# or self.get_assignment(value[0].stabilized_name(), [existing.stabilized_name()])
           
        self.dependent_assignments[existing.name] = value[0].stabilized_name()
        if not already_assigned and existing.type.builtin and (existing._references is None or not perform_immutability_checks): self.implementation.extend([existing, CODEWORD_EQUALS, value[0], CODEWORD_SEMICOLON])

    def get_assignment(self, from_name: str, _to_name: list[str]):
        assert isinstance(from_name, str)
        assert isinstance(_to_name, list)
        to_name = set(_to_name)
        if from_name in to_name: return from_name
        graph: dict[str,list[str]]= dict()
        for k, v in self.dependent_assignments.items():
            if v not in graph: graph[v] = list()
            graph[v].append(k)
            if k not in graph: graph[k] = list()
            graph[k].append(v)
        
        visited: set[str] = set()
        pending: set[str] = set()
        pending.add(from_name)
        while pending:
            next_value = pending.pop()
            if next_value in to_name: return next_value
            visited.add(next_value)
            for candidate in graph.get(next_value, list()):
                if candidate not in visited: pending.add(candidate)
        return None

    def returns(self, value: list[Variable], error_token: "Token", is_safe: bool):
        for v in value:
            if v._references is not None: 
                #if not any(u.name==v._references for u in value):
                #    error_token.error("safety", "returning reference '"+pretty_name(v.name)+"' without the accompanying referenced value '"+pretty_name(v._references)+"'")
                self.assign(v.name, [self.vars[v._references]], error_token, perform_immutability_checks=False, top_entry=False)
                v._references = None

        if is_safe:
            for v in value: 
                if v.type.invalidated_by==POINTER_TYPE and not v.stabilized_name().endswith("__unsafe_ptr") and v.stabilized_name()!="unsafe_ptr":
                    error_token.error("safety", "return '"+pretty_name(v.stabilized_name())+"' is a pointer and hence cannot be returned - name it 'unsafe_ptr' to permit this but consider that the pointed resource may not exist anymore")
                if v.stabilized_name() in self.invalidated:
                    error_token.error("safety", "return '"+pretty_name(v.stabilized_name())+"' has been invalidated", reason=self.invalidated[v.stabilized_name()])
        
        if self.has_returned_once and len(self.rets)!=len(value):
            error_token.error("type", "this value returned here is a different type than previous returns '"+signature_like([self.vars[ret] for ret in self.rets])+"' vs '"+signature_like(value)+"'")
        for pos, arg in enumerate(value):
            if not arg.name.startswith("__temp"): self.return_names[arg.name] = pos
            if self.has_returned_once: 
                self.assign(self.rets[pos], [arg], error_token, perform_immutability_checks=False, top_entry=False) # TODO: do not use assign but a manual setting to allow overwriting (or make mutable)
            else:
                self.rets.append(arg.name)
                self.vars[arg.name] = arg # needed to reflect changes in const permissions
        for i in range(len(self.rets)):
            for j in range(i+1,len(self.rets)):
                if self.rets[i]==self.rets[j]: error_token.error("safety", "cannot return the same variable multiple times; conflict for '"+pretty_name(self.rets[i])+"'")
        if True:
            to_remove = list()
            for defer in self.defers:
                orignal_defer = defer
                normalized_defer: list[CodeSegment] = list()
                for segment in defer:
                    if isinstance(segment, Variable) and segment.name not in global_var2cstr:
                        ret = self.get_assignment(segment.stabilized_name(), self.rets) # we have computed these now (DO NOT MOVE EARLIER)
                        normalized_defer.append(self.vars[ret] if ret else segment)
                        #print(self.name, ret, "Returned as", segment.tostring())
                    else: 
                        normalized_defer.append(segment)
                defer = normalized_defer
                has_any_returned_value = any(u.tostring()==v.name for v in value for u in defer)
                if not has_any_returned_value: continue
                if any(not segment.immutable and segment.tostring() in self.args and not segment.tostring() in self.rets for segment in value):
                    error_token.error("safety", "cannot have a 'defer' that mixes non-returned mutable argument and returns")
                has_assigned = set()
                has_not_assigned = set()
                for pos, segment in enumerate(defer):
                    if pos<len(defer)-1 and defer[pos+1].tostring()=="=" and not segment in has_not_assigned: has_assigned.add(segment)
                    has_not_assigned.add(segment)
                    if isinstance(segment, Variable) and segment.name not in global_var2cstr and not segment.is_temp() and not any(segment.tostring()==v.name for v in value) and not segment in has_assigned:
                        if not segment in value: error_token.error("safety", "cannot return a partial 'defer'\nThis return statement does not explicitly return '"+pretty_name(segment.tostring())+"'. However, a value from that is used within a 'defer' that also contains returned values; the latter would be delegated for later calling without knowing the missing return value.", suggestions=["return '"+pretty_name(segment.tostring())+"' too, or any structure it resides in", "do not return variables within the same 'defer'"])
                self.returned_defers.append(defer)
                to_remove.append(orignal_defer)
            for defer in to_remove: self.defers.remove(defer)
        self.has_returned_once = True
        if self.fast_return_exception: 
            self.force_not_inline = True
            self.has_returned_once = True
            raise FastReturnException
    
    def interpret(self, values: list[int|float], memory: MemoryEmulator, recursion_budget) -> list:
        #if not self.can_try_interpreter: self.at.error("interpreter", "'"+self.name+"' is not interpretable")
        
        # memory is basically a list of chars
        args = [k for k in self.args if self.vars[k].type.builtin]+[k for k in self.rets if self.vars[k].type.builtin]
        input_args = len([k for k in self.args if self.vars[k].type.builtin])
        #by_reference = [not self.vals[k].immutable for k in self.args if self.vals[k].builtin]+[True for k in self.rets if self.vals[k].builtin]
        assert isinstance(values, list)
        assert len(values)==len(args)
        _arg_values = values
        local_vars: dict[str,int|float] = dict(zip(args[:input_args],values[:input_args]))
        #print(self.name, values)
        self.can_try_interpreter = False

        def process_expression(impl: list["Token"], pos: int, end: int):
            if pos>end: return
            if impl[pos].tostring()=="(" and impl[end].tostring()==")":
                return process_expression(impl,pos+1,end-1)
            if impl[pos].tostring()=="!":
                condition = process_expression(impl,pos+1,end)
                return 0 if condition else 1
            if impl[pos].tostring()=="*":
                if pos<=end-3 and impl[pos+2].tostring()=="=":
                    index = process_expression(impl, pos+1, pos+1)
                    value = process_expression(impl, pos+3, end)
                    # determine the pointee type to know write width
                    ptr_var = impl[pos+1].tostring()
                    if ptr_var in self.vars:
                        pointee_type = self.get_pointer_type(self.vars[ptr_var])
                        if pointee_type == FLOAT_TYPE:
                            memory.write_float64(index, float(value))
                        elif pointee_type in (UINT8_TYPE, CHAR_TYPE, BOOL_TYPE):
                            memory.contents[index] = int(value) & 0xFF
                        elif pointee_type == UINT16_TYPE:
                            memory.write_uint16(index, int(value))
                        elif pointee_type == UINT32_TYPE:
                            memory.write_uint32(index, int(value))
                        else:  # 64-bit int or pointer
                            memory.write_int64(index, int(value))
                    return None
                else:
                    ptr_var = impl[pos+1].tostring()
                    index = process_expression(impl, pos+1, end)
                    if ptr_var in self.vars:
                        pointee_type = self.get_pointer_type(self.vars[ptr_var])
                        #if pointee_type is None or pointee_type==ANY_TYPE:
                        #    self.at.error("interpreter", "cannot dereference unknown pointer type")
                        if pointee_type == FLOAT_TYPE:
                            return memory.read_float64(index)
                        elif pointee_type in (UINT8_TYPE, CHAR_TYPE, BOOL_TYPE):
                            return int(memory.contents[index])
                        elif pointee_type == UINT16_TYPE:
                            return memory.read_uint16(index)
                        elif pointee_type == UINT32_TYPE:
                            return memory.read_uint32(index)
                        else:  # 64-bit int or pointer
                            return memory.read_int64(index)
                    return int(memory.contents[index])  # fallback
            if impl[pos].tostring()=="__temp_all_errcodes":
                assert impl[pos+1].tostring()=="["
                assert impl[pos+3].tostring()=="]"
                value = process_expression(impl, pos+2,pos+2)
                assert isinstance(value, int)
                k = err_code_list[value]
                return memory.named_alloc_value(k, k[1:-1])
            if pos==end:
                tok = impl[pos]
                k = tok.tostring()
                value: float|int|None = local_vars.get(tok.tostring(), None)
                if value is not None: return value
                if k in global_var2cstr: 
                    cstr_global = global_var2cstr[k]
                    return memory.named_alloc_value(k, cstr_global[1:-1])
                if len(k)>=2 and k.startswith("\"") and k.endswith("\""):
                    return memory.named_alloc_value(k, k[1:-1])
                try:
                    s = tok.tostring().rstrip('UuLl')
                    if s.startswith('0x') or s.startswith('0X'): int_ret = int(s, 16)
                    elif s.startswith('0') and len(s) > 1: int_ret = int(s, 8)
                    else: int_ret = int(s, 10)
                    return int_ret
                except: pass
                try:
                    float_ret = float(tok.tostring())
                    return float_ret
                except: pass
                if k in self.vars: 
                    if self.vars[k].type==FLOAT_TYPE: return 0.0
                    return 0
                return self.at.error("interpreter", "failed to parse '"+k+"' in '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
            elif impl[pos+1].tostring()=="=":
                varname = impl[pos].tostring()
                parsed_value: float|int = process_expression(impl, pos+2,end)
                if parsed_value is None: 
                    self.at.error("interpreter", "failed to parse right hand side at '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
                if varname in self.vars and self.vars[varname].type==FLOAT_TYPE: parsed_value = float(parsed_value)
                else: parsed_value = int(parsed_value)
                local_vars[varname] = parsed_value
            elif impl[pos+1].tostring()[0] in "+-*/<>=!^|&%":
                op = impl[pos+1].tostring()
                v1 = process_expression(impl,pos,pos)
                v2 = process_expression(impl,pos+2,pos+2)
                if op=="+": return v1+v2
                if op=="-": return v1-v2
                if op=="*": return v1*v2
                if op=="/": 
                    if v2==0: self.at.error("interpreter", "division by zero in '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
                    if isinstance(v1,int) and isinstance(v2,int): return v1//v2
                    return v1/v2
                if op==">": return 1 if v1>v2 else 0
                if op=="<": return 1 if v1<v2 else 0
                if op==">=": return 1 if v1>=v2 else 0
                if op=="<=": return 1 if v1<=v2 else 0
                if op=="==": return 1 if v1==v2 else 0
                if op=="!=": return 1 if v1!=v2 else 0
                if op=="^": return v1^v2
                if op=="|": return v1|v2
                if op=="&": return v1&v2
                if op=="%": return v1%v2
                if op==">>": return (v1 & 0xFFFFFFFFFFFFFFFF) >> v2
                if op=="<<": return (v1 << v2) & 0xFFFFFFFFFFFFFFFF
                self.at.error("interpreter", "not implemented operator '"+impl[pos+1].tostring()+"' in '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
            elif impl[pos+1].tostring()=="(":
                expr_pos = pos
                callee: Optional["ImplementedType"] = None
                if isinstance(impl[pos], CallPointer):
                    callee = impl[pos].callee
                    candidate_name = callee.name
                else:
                    candidate_name = impl[pos].tostring()
                    for candidate in self.dependent_implementations:
                        if candidate.monomorphic_name==candidate_name:
                            callee = candidate
                            break
                if callee is None and candidate_name not in ["printf", "malloc", "realloc", "free", "ptr_memzero", "memcpy", "strlen", "memcmp"]:
                    self.at.error("interpreter", "failed to interpret C function '"+candidate_name+"' in '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
                gathered_args: list[str] = list()
                gathered_args_by_pointer: list[bool] = list()
                pos = pos+2
                prev_pos = pos
                last_arg_name: str = ""
                by_pointer: bool = False
                values: list[int|float] = list()
                while pos<=end:
                    # TODO: this skips operations within memcpy
                    tok = impl[pos]
                    if tok.tostring()=="," or tok.tostring()==")":
                        if last_arg_name:
                            gathered_args.append(last_arg_name)
                            gathered_args_by_pointer.append(by_pointer)
                            last_arg_name = ""
                            by_pointer = False
                        processed = process_expression(impl, prev_pos, pos-1)
                        if processed is None:
                            if gathered_args: del gathered_args[-1]
                            if gathered_args_by_pointer: del gathered_args_by_pointer[-1]
                        else: values.append(processed)
                        prev_pos = pos+1
                        if tok.tostring()==")": break
                    elif tok.tostring() == "&":
                        by_pointer = True
                        prev_pos = pos+1
                    elif tok.tostring()[0] in "([":
                        self.at.error("interpreter", "the C interpreter does not allow complicated function arguments '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
                    else:
                        #assert not last_arg_name
                        last_arg_name = tok.tostring()
                    pos += 1
                if pos!=end: self.at.error("malformed smollC", "call parenthesis closed prematurely for '"+candidate_name+"' at"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
                if callee is None: # in case we have overlapping names
                    if candidate_name == "malloc":
                        if len(values)!=1: self.at.error("malformed smollC", "'malloc' requires one argument")
                        if not isinstance(values[0],int): self.at.error("malformed smollC", "'malloc' requires an integer argument")
                        return memory.alloc(values[0])

                    if candidate_name == "free":
                        if len(values)!=1: self.at.error("malformed smollC", "'free' requires one argument")
                        if not isinstance(values[0],int): self.at.error("malformed smollC", "'free' requires an integer argument")
                        ret = memory.free(values[0])
                        if ret: self.at.error("interpreter", "'free' tried to free non-allocated or already freed memory")
                        return None

                    if candidate_name == "realloc":
                        if len(values)!=2: self.at.error("malformed smollC", "'realloc' requires two arguments")
                        if not isinstance(values[0],int): self.at.error("malformed smollC", "'realloc' requires an integer argument")
                        if not isinstance(values[1],int): self.at.error("malformed smollC", "'realloc' requires an integer argument")
                        return memory.realloc(values[0], values[1])
                    
                    if candidate_name == "strlen":
                        if len(values)!=1: self.at.error("malformed smollC", "'strlen' requires one argument")
                        if not isinstance(values[0],int): self.at.error("malformed smollC", "'strlen' requires an integer argument")
                        return memory.strlen(values[0])

                    if candidate_name == "memcpy" or candidate_name=="memcmp":
                        if len(values)!=3: self.at.error("malformed smollC", f"'{candidate_name}' requires three arguments")
                        if not isinstance(values[2], int): self.at.error("malformed smollC", f"non-integer argument to '{candidate_name}' at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                        if gathered_args_by_pointer[0]:
                            if gathered_args_by_pointer[1]: self.at.error("malformed smollC", f"Cannot use '{candidate_name}' between two variables.")
                            if not isinstance(values[1], int): self.at.error("malformed smollC", f"non-integer argument to '{candidate_name}' at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                            if values[1]==0: 
                                self.at.error("interpreter", "null pointer dereference at '"+" ".join([impl[i].tostring() for i in range(prev_pos,end+1)])+"'")
                            if values[2]==1:
                                if self.vars[gathered_args[0]].type not in [UINT8_TYPE, CHAR_TYPE, BOOL_TYPE]:
                                    self.at.error("interpreter", "got 1 byte alignment for incompatible type at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                                local_vars[gathered_args[0]] = int(memory.contents[values[1]])
                            elif values[2]==2:
                                if self.vars[gathered_args[0]].type!=UINT16_TYPE:
                                    self.at.error("interpreter", "got 2 byte alignment for incompatible type at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                                local_vars[gathered_args[0]] = memory.read_uint16(values[1])
                            elif values[2]==4:
                                if self.vars[gathered_args[0]].type!=UINT32_TYPE:
                                    self.at.error("interpreter", "got 4 byte alignment for incompatible type at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                                local_vars[gathered_args[0]] = memory.read_uint32(values[1])
                            elif values[2]!=8:
                                self.at.error("interpreter", "expecting 8 byte alignment but got '"+str(values[2])+"' bytes at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                            elif self.vars[gathered_args[0]].type==FLOAT_TYPE: 
                                local_vars[gathered_args[0]] = memory.read_float64(values[1])
                            else:
                                local_vars[gathered_args[0]] = memory.read_int64(values[1])
                            return None
                        if gathered_args_by_pointer[1]:
                            if not isinstance(values[0], int): self.at.error(f"malformed smollC", "non-integer argument to '{candidate_name}' at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                            if values[0]==0: 
                                self.at.error("interpreter", "null pointer dereference at '"+" ".join([impl[i].tostring() for i in range(prev_pos,end+1)])+"'")
                            if values[2]==1:
                                if self.vars[gathered_args[1]].type not in [UINT8_TYPE, CHAR_TYPE, BOOL_TYPE]:
                                    self.at.error("interpreter", "got 1 byte alignment for incompatible type at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                                memory.contents[values[0]] = (values[1])
                            elif values[2]==2:
                                if self.vars[gathered_args[1]].type!=UINT16_TYPE:
                                    self.at.error("interpreter", "got 4 byte alignment for incompatible type at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                                memory.write_uint16(values[0], values[1])
                            elif values[2]==4:
                                if self.vars[gathered_args[1]].type!=UINT32_TYPE:
                                    self.at.error("interpreter", "got 4 byte alignment for incompatible type at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                                memory.write_uint32(values[0], values[1])
                            elif values[2]!=8:
                                self.at.error("interpreter", "expecting 8 byte alignment but got '"+str(values[2])+"' bytes at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                            elif self.vars[gathered_args[1]].type==FLOAT_TYPE: 
                                memory.write_float64(values[0], values[1])
                            else:
                                memory.write_int64(values[0], values[1])
                            return None
                        if not isinstance(values[0], int): self.at.error("malformed smollC", f"non-integer argument to '{candidate_name}' at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                        if not isinstance(values[1], int): self.at.error("malformed smollC", f"non-integer argument to '{candidate_name}' at '"+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                        if candidate_name=="memcpy":
                            memory.memcpy(values[0], values[1], values[2])
                            return None
                        return memory.memcmp(values[0], values[1], values[2])

                    if candidate_name == "ptr_memzero":
                        if len(values)!=3: self.at.error("malformed smollC", "'ptr_memzero' requires three arguments")
                        if not isinstance(values[0], int): self.at.error("malformed smollC", "non-integer argument to 'ptr_memzero'")
                        if not isinstance(values[1], int): self.at.error("malformed smollC", "non-integer argument to 'ptr_memzero'")
                        if not isinstance(values[2], int): self.at.error("malformed smollC", "non-integer argument to 'ptr_memzero'")
                        return memory.memset(values[0]+values[1], 0, values[2]-values[1])

                    if candidate_name == "printf":
                        if not values: return None
                        fmt_arg = values[0]
                        assert isinstance(fmt_arg, int)
                        fmt = memory.as_cstr(fmt_arg)
                        arg_index = 1
                        result = []
                        i = 0
                        while i < len(fmt):
                            if fmt[i] != '%':
                                result.append(fmt[i])
                                i += 1
                                continue
                            i += 1  # skip '%'
                            if i >= len(fmt):
                                break
                            # collect optional precision (e.g. ".6" in "%.6f")
                            precision = None
                            if fmt[i] == '.':
                                i += 1
                                if fmt[i]=="*":
                                    precision = values[arg_index]
                                    arg_index += 1
                                    i += 1
                                else:
                                    prec_start = i
                                    while i < len(fmt) and fmt[i].isdigit(): i += 1
                                    precision = int(fmt[prec_start:i]) if prec_start < i else 0
                            # collect specifier (possibly multi-char like "ll")
                            spec = ""
                            while i < len(fmt) and fmt[i] in "lh":
                                spec += fmt[i]
                                i += 1
                            if i < len(fmt):
                                spec += fmt[i]
                                i += 1
                            val = values[arg_index] if arg_index < len(values) else 0
                            arg_index += 1
                            if spec == "s":
                                if precision is not None: s = memory.as_str(int(val), precision)
                                else: s = memory.as_cstr(int(val))
                                result.append(s)
                            elif spec == "c":  result.append(chr(int(val)))
                            elif spec in ("lld", "d", "i"): result.append(str(int(val)))
                            elif spec in ("llu", "u"): result.append(str(int(val) & 0xFFFFFFFFFFFFFFFF))
                            elif spec in ("f", "lf"):
                                prec = precision if precision is not None else 6
                                result.append(f"{float(val):.{prec}f}")
                            else:
                                print("".join(result), end="", flush=True)  # flush what we have before raising
                                self.at.error("interpreter", f"unimplemented printf specifier '{spec}'")
                        print("".join(result), end="", flush=True)
                        return None
                assert callee, candidate_name
                #inputs = [v for v in values]
                if recursion_budget<=1:
                    self.at.error("interpreter", "recursion budget reached at: "+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)]))
                retcode = callee.interpret(values, memory, recursion_budget-1) # may modify values
                #rets = ""
                for ismut, value, k in zip(gathered_args_by_pointer, values, gathered_args):
                    if ismut: local_vars[k] = value
                    #rets += k+"="+str(value)+"\n"
                #print(self.name, callee.name)
                #print(self.name, callee.name, inputs, "->", values)#, gathered_args)
                #print(rets)
                return retcode
            else:
                self.at.error("interpreter", "failed to interpret C code: "+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)]))
        
        def process_block(impl: list["Token"], pos: int, npos: int):
            # returns breaking variable or continue or break
            prev_pos: int = pos
            while pos<=npos:
                if pos==prev_pos and impl[pos].tostring()=="break": return "break"
                if pos==prev_pos and impl[pos].tostring()=="continue": return "continue"
                if pos==prev_pos and impl[pos].tostring()=="while":
                    if impl[pos+1].tostring()!="(": self.at.error("malformed smollC", "Expecting parenthesis after 'while'")
                    depth = 1
                    endpos = pos+1
                    while depth:
                        endpos += 1
                        if endpos>npos: self.at.error("malformed smollC", "Unclosed if condition.")
                        if impl[endpos].tostring()=="(": depth += 1
                        if impl[endpos].tostring()==")": depth -= 1
                    cond_start = pos+2
                    cond_end = endpos-1
                    pos = endpos+1
                    if pos>npos: self.at.error("malformed smollC", "Missing 'while' code body.")
                    if impl[pos].tostring()!="{": self.at.error("malformed smollC", "The use of brackets is mandatory in conditions.")
                    depth = 1
                    endpos = pos
                    while depth:
                        endpos += 1
                        if endpos>npos: self.at.error("malformed smollC", "Unclosed code block.")
                        if impl[endpos].tostring()=="{": depth += 1
                        if impl[endpos].tostring()=="}": depth -= 1
                    while True:
                        condition = process_expression(impl, cond_start, cond_end)
                        if not condition: break
                        ret = process_block(impl, pos+1, endpos-1)
                        if ret=="break": break
                        if ret=="return" or ret=="failure": return
                    pos = endpos+1
                    prev_pos = pos
                    continue
                if pos==prev_pos and impl[pos].tostring()=="if":
                    if impl[pos+1].tostring()!="(": self.at.error("malformed smollC", "Expecting parenthesis after 'if'")
                    depth = 1
                    endpos = pos+1
                    while depth:
                        endpos += 1
                        if endpos>npos: self.at.error("malformed smollC", "Unclosed if condition.")
                        if impl[endpos].tostring()=="(": depth += 1
                        if impl[endpos].tostring()==")": depth -= 1
                    condition = process_expression(impl, pos+2, endpos-1)
                    assert condition is not None
                    pos = endpos+1
                    if pos>npos: self.at.error("malformed smollC", "Missing 'if' code body.")
                    if impl[pos].tostring()!="{": self.at.error("malformed smollC", "The use of brackets is mandatory in conditions.")
                    depth = 1
                    endpos = pos
                    while depth:
                        endpos += 1
                        if endpos>npos: self.at.error("malformed smollC", "Unclosed code block.")
                        if impl[endpos].tostring()=="{": depth += 1
                        if impl[endpos].tostring()=="}": depth -= 1
                    if condition:
                        ret = process_block(impl, pos+1, endpos-1)
                        if ret: return ret
                    pos = endpos+1
                    if endpos<npos and impl[pos].tostring()=="else":
                        if pos>npos: self.at.error("malformed smollC", "Missing 'else' code body.")
                        pos += 1
                        assert impl[pos].tostring()=="{"
                        depth = 1
                        endpos = pos
                        while depth:
                            endpos += 1
                            if endpos>npos: self.at.error("malformed smollC", "Unclosed code block.")
                            if impl[endpos].tostring()=="{": depth += 1
                            if impl[endpos].tostring()=="}": depth -= 1
                        if not condition:
                            ret = process_block(impl, pos+1, endpos-1)
                            if ret: return ret
                        pos = endpos+1
                    prev_pos = pos
                    continue
                if impl[pos].tostring()==";":
                    if pos==prev_pos+2 and impl[prev_pos].tostring()=="goto":
                        if impl[pos-1].tostring() in "__temp_return": return "return"
                        if impl[pos-1].tostring() == "__temp_failure":  return "failure"
                        self.at.error("interpreter", "cannot goto arbitrary C position 'goto "+impl[pos-1].tostring()+"'")
                    process_expression(impl, prev_pos, pos-1)
                    prev_pos = pos+1
                pos += 1

        if self.VM is not None: 
            call_text = self.VM[1:-1]
            for pos, arg in enumerate(args[:input_args]):
                if arg in call_text:
                    if self.vars[arg].type==CSTR_TYPE: value = "\""+memory.as_cstr(int(values[pos]))+"\""
                    elif self.vars[arg].type==FLOAT_TYPE: value = str(float(values[pos]))
                    else: value = str(int(values[pos]))
                    call_text = call_text.replace("$"+arg, value)
            evaluated = eval(call_text)
            assert isinstance(evaluated, list)
            assert len(evaluated)==len(args)-input_args
            values[input_args:] = evaluated
            ret = None
        else: 
            ret = process_block(self.implementation, 0, len(self.implementation)-1)
            if ret=="failure":
                for defer in reversed(self.returned_defers): process_block(defer, 0, len(defer)-1)
            elif ret=="return" or not ret:
                values = _arg_values
                for pos in range(len(values)):
                    if self.vars[args[pos]].type==FLOAT_TYPE: 
                        values[pos] = local_vars.get(args[pos], 0.0)
                        continue
                    test_value = local_vars.get(args[pos], None)
                    if test_value is None:
                        if args[pos] in global_var2cstr:
                            cstr_global = global_var2cstr[args[pos]]
                            test_value = memory.named_alloc_value(args[pos], cstr_global[1:-1])
                        else: test_value = 0
                    values[pos] = test_value
            for defer in reversed(self.defers): process_block(defer, 0, len(defer)-1)
        self.can_try_interpreter = True
        return local_vars.get("__temp_errcode", 0)
            
    def transpile(self) -> str:
        #print(self.signature())
        #for k,v in self.dependent_assignments.items():
        #    print("  ", v, "->", k)
        #print(len(self.defers))
        #print(len(self.returned_defers))
        #self.simplify()
        ret_body_start = ""
        ret_body_end = ""
        arg_code = ""
        for arg in self.args:
            arg_type_builtin = self.vars[arg].type.builtin
            if arg_type_builtin: 
                if arg_code: arg_code += ", "
                if self.vars[arg].immutable: arg_code += arg_type_builtin+" "+arg
                else: 
                    tmp = create_temp()
                    arg_code += arg_type_builtin+"* "+tmp
                    ret_body_start += arg_type_builtin+" "+arg+"=*"+tmp+";\n  "
                    ret_body_end += "*"+tmp+"="+arg+";\n  "

            # other args are just class alignment
            # else: raise Exception("cannot handle non-builtin arguments: '"+arg+"'")
        ret_code = ""
        for arg in self.rets:
            arg_type_builtin = self.vars[arg].type.builtin
            if arg_type_builtin:
                tmp = create_temp()
                if ret_code: ret_code += ", "
                ret_code += arg_type_builtin+"* "+tmp
                ret_body_end += "*"+tmp+"="+arg+";\n  "
            # other args are just class alignment
            # else: raise Exception("cannot handle non-builtin returns: '"+arg+"'") # we d
        if arg_code and ret_code: arg_code += ", "
        arg_code += ret_code
        doinline = (self.complexity<500 or self.num_calls<=1) and not self.force_not_inline

        ret = ("static inline __attribute__((always_inline)) " if doinline else "")+("int " if self.needs_failure_mode else "void ")+self.monomorphic_name+"("+arg_code+") {\n  "
        ret += ret_body_start
        for var, val in self.vars.items():
            if var in self.args: continue
            if val.type.builtin and not val.name in self.used_globals: ret += val.type.builtin+" "+var+"=0;\n  "
            # non-built-ins are theoretical constructs only
        if self.needs_failure_mode: ret += "int __temp_errcode=0;\n  "
        if self.has_any_complaint or self.needs_failure_mode: ret += "int __temp_complain=0;\n  "
        prev = ";"
        for token in self.implementation:
            tok = token.tostring()
            if prev[0] not in symbols and tok[0] not in symbols and prev!=";": ret += " "
            prev = tok
            if tok==";": ret += ";\n  "
            elif tok=="{": ret += "{\n  "
            elif tok=="}": ret += "}\n  "
            else: ret += tok
        if self.needs_failure_mode:
            #ret += "\n  goto __temp_final;" # skip failure handling
            ret += "\n  __temp_failure:"
            # apply defers that are applied on failure
            defer_ret = ""
            for defer in reversed(self.returned_defers):
                prev = ";"
                for token in defer:
                    tok = token.tostring()
                    if prev[0] not in symbols and tok[0] not in symbols and prev!=";": defer_ret += " "
                    prev = tok
                    if tok==";": defer_ret += ";\n  "
                    elif tok=="{": defer_ret += "{\n  "
                    elif tok=="}": defer_ret += "}\n  "
                    else: defer_ret += tok
            ret += defer_ret
            if any(token.tostring()=="__temp_return" for token in self.implementation):
                ret += "__temp_return:\n  "
            # set return values if needed
            ret += ret_body_end
            # apply defers that are applied on success
            defer_ret = ""
            for defer in reversed(self.defers):
                prev = ";"
                for token in defer:
                    tok = token.tostring()
                    if prev[0] not in symbols and tok[0] not in symbols and prev!=";": defer_ret += " "
                    prev = tok
                    if tok==";": defer_ret += ";\n  "
                    elif tok=="{": defer_ret += "{\n  "
                    elif tok=="}": defer_ret += "}\n  "
                    else: defer_ret += tok
            ret += defer_ret
            ret += "\n  return __temp_errcode;\n}"
        else:
            if any(token.tostring()=="__temp_return" for token in self.implementation):
                ret += "__temp_return:\n  "
            # set return values if needed
            ret += ret_body_end
            # apply defers that are applied on success
            defer_ret = ""
            for defer in reversed(self.defers):
                prev = ";"
                for token in defer:
                    tok = token.tostring()
                    if prev[0] not in symbols and tok[0] not in symbols and prev!=";": defer_ret += " "
                    prev = tok
                    if tok==";": defer_ret += ";\n  "
                    elif tok=="{": defer_ret += "{\n  "
                    elif tok=="}": defer_ret += "}\n  "
                    else: defer_ret += tok
            ret += defer_ret
            ret = ret[:-2]+"}"
        return ret

class UnionType:
    def __init__(self, name, at:Optional["Token"]=None):
        self.name = name
        self.variations: list[ImplementedType] = list()
        self.at = at

    def append(self, variation: ImplementedType):
        self.variations.append(variation)
        return self

class File:
    def __init__(self, path: str):
        self.path = path
        self.resolved_path = path
        self.types: dict[str, UnionType] = dict()
        self.namespaces: dict[str, File] = dict()
        self.is_main_file: bool = False
        self.is_extern_file: bool = False
        self.localdefs: set[UnionType|ImplementedType|File] = set() # a set of references to local types and namespaces

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
    def error(self, errtype: str, message: str, reason: Optional["Token"]=None, raason_message:str="defined in", suggestions:list[str]|None=None):
        if is_lsp:
            if self.file.is_main_file:
                at = reason if reason else self
                print("---")
                # position in processed file
                print("function")
                print(os.path.abspath(self.file.path))
                print(self.row)
                print(self.col)
                print(len(self.text))
                # defined at
                print(os.path.abspath(at.file.path))
                print(at.row)
                print(at.col)
                # message (may span multiple lines))
                print(errtype+" error: "+message+" "+(raason_message+" "+reason.file.resolved_path if reason else ""))
                if suggestions:
                    print("    with alternatives:")
                    for suggestion in suggestions:
                        if "->" in suggestion: 
                            suggestion_splits = suggestion.split("defined in")
                            print("```rust\n"+suggestion_splits[0]+"\n```")
                            #if len(suggestion_splits)>1: print("defined in "+suggestion_splits[1])
                        else: print("\n    -", suggestion)
            if is_lsp and self.file.is_main_file and errtype=="safety": return
            raise FatalException


        print(f"{PURPLE}{errtype} error: {message}{RESET}")
        if suggestions:
            print("    alternatives")
            for suggestion in suggestions:
                print("    -", suggestion)
        try:
            with open(self.file.resolved_path, "r", encoding="utf-8") as f:
                for i, line in enumerate(f, start=1):
                    if i == self.row:
                        source_line = line.rstrip("\n")
                        break
                else: source_line = ""
        except OSError as exc:
            errexit()
        token_len = max(len(self.text), 1)
        location = f"{self.file.resolved_path} line {self.row} column {self.col}"
        print(f"{RED}at{RESET} {location}")
        print(source_line)
        if not reason: print(RED+" "*(self.col - 1)+"^"*token_len+RESET)
        if reason:
            orignal_token_len = token_len
            try:
                with open(reason.file.resolved_path, "r", encoding="utf-8") as f:
                    for i, line in enumerate(f, start=1):
                        if i == reason.row:
                            source_line = line.rstrip("\n")
                            break
                    else: source_line = ""
            except OSError as exc:
                errexit()
            token_len = max(len(reason.text), 1)
            pointer = " " * (reason.col - 1) + "^" * token_len
            location = f"{reason.file.resolved_path} line {reason.row} column {reason.col}"
            prefix = " "*(self.col-1)
            print(prefix+RED+"^"*orignal_token_len+"|"+RESET)
            print(prefix+RED+" "*orignal_token_len+"|"+raason_message+RESET+" "+location)
            prefix += " "*orignal_token_len+" "
            print(prefix+source_line)
            print(prefix+f"{RED}{pointer}{RESET}")

        errexit()

def get(tokens: list[Token], pos: int) -> Token:
    if pos>=len(tokens): tokens[len(tokens)-1].error("syntax", "unexpected end of file")
    if tokens[pos].starts(): tokens[pos].error("syntax", "unexpected indentation - this line starts deeper than the previous one but this can only be done to mark new code blocks within 'def', 'if', 'else', 'while', or 'defer'")
    return tokens[pos]


def get_skip(tokens: list[Token], pos: int) -> Token:
    if pos>=len(tokens): tokens[len(tokens)-1].error("syntax", "unexpected end of file")
    return tokens[pos]

def peek_text(tokens: list[Token], pos: int) -> str:
    if pos >= len(tokens): return ""
    return tokens[pos].text

def match_structure_with(x: ImplementedType, y: ImplementedType):
    assert isinstance(x, ImplementedType)
    assert isinstance(y, ImplementedType)
    if len(x.rets)!=len(y.rets): return False
    for rx,ry in zip(x.rets, y.rets):
        if x.vars[rx].type!=y.vars[ry].type: return False
        if x.vars[rx].immutable and not y.vars[ry].immutable: return False
        #if x.vars[rx].isprivate!=y.vars[ry].isprivate: return False
    return True

def _select_call(file: File, impl: ImplementedType, method: UnionType, argument_vars: list[Variable], error_token: Token) -> ImplementedType:
    available_types: list[ImplementedType] = list()
    for variation in method.variations:
        if len(argument_vars)<len(variation.args):
            vars: list[Variable] = list()
            for effect_var in variation.effect_names: 
                for var in impl.vars.values():
                    if var.name==effect_var or var.name.startswith(effect_var+"__"): vars.append(var)
                if len(vars)+len(argument_vars)>=len(variation.args): break
            vars.extend(argument_vars)
        else: vars = argument_vars
        if len(variation.args)!=len(vars): continue
        is_available = True
        for i in range(len(vars)):
            # we can allow lowering buffers to generic any
            if vars[i].type!=variation.vars[variation.args[i]].type and vars[i].type.is_buffer_of is None:
                is_available = False
                break
            if vars[i].type!=variation.vars[variation.args[i]].type and variation.vars[variation.args[i]].type.is_buffer_of!=ANY_TYPE:
                is_available = False
                buffer1 = vars[i].type.is_buffer_of
                buffer2 = variation.vars[variation.args[i]].type.is_buffer_of
                if buffer1 is not None and buffer2 is not None and match_structure_with(buffer1, buffer2):
                    is_available = True
                if not is_available: break
            if not variation.vars[variation.args[i]].immutable and vars[i].immutable:
                is_available = False
                break
        # first check for pointer mismatches (this is a safety error)
        for varpos, var in enumerate(vars):
            if var.type!=POINTER_TYPE: continue
            var_pointer_type = impl.get_pointer_type(var)
            other_pointer_type = variation.get_pointer_type(variation.vars[variation.args[varpos]])
            if var_pointer_type is not None and other_pointer_type is not None and var_pointer_type!=ANY_TYPE and other_pointer_type!=ANY_TYPE and not match_structure_with(var_pointer_type, other_pointer_type):
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
        error_token.error("type", "could not resolve any call for '"+("" if "__" in method.name else method.name)+"("+signature_like(vars, impl)+") -> any'", suggestions=[t.signature() for t in method.variations])
    if len(available_types)>1:
        error_token.error("type", "more than one conflicting call '"+("" if "__" in method.name else method.name)+"("+signature_like(vars, impl)+") -> any'", suggestions=[t.signature()+(" defined in "+t.at.file.path if t.at else " from compiler definitions") for t in available_types])

    callee: ImplementedType = available_types[0]

    if is_lsp and error_token.file.is_main_file:
        at = callee.at if callee.at else error_token
        print("---")
        # position in processed file
        print("function")
        print(os.path.abspath(error_token.file.resolved_path))
        print(error_token.row)
        print(error_token.col)
        print(len(error_token.text))
        # defined at
        print(os.path.abspath(at.file.resolved_path))
        print(at.row)
        print(at.col)
        # message (may span multiple lines))
        if callee.doc: print("**"+strip_quotes(callee.doc[0])+"**")
        if len(callee.doc)>1: print("\n"+"\n".join(strip_quotes(doc) for doc in callee.doc[1:]))
        print("```rust\n"+callee.signature()+"\n```")#+(" defined in "+at.file.path if callee.at else " from compiler definitions"))
    return callee

def resolve_call(file: File, impl: ImplementedType, method: UnionType, vars: list[Variable], error_token: Token) -> list[Variable]:
    if ANY_TYPE in method.variations:
        return vars
    if DEBUG_TYPE in method.variations:
        if not is_lsp: print(signature_like(vars, impl))
        return vars
    if RESOLVE_LITERAL_TYPE in method.variations and len(vars)==1 and vars[0].type.is_literal_of is not None:
        variable = Variable(create_temp(), vars[0].type.is_literal_of)
        literal_method = vars[0].type
        if literal_method.is_literal_of==CSTR_TYPE:
            current = literal_method.at.text
            if is_lsp and error_token.file.is_main_file: print_lsp_literal(error_token, "**literal**\n\ncstr defined to be "+literal_method.at.text)
            tmp: str|None = global_cstr2var.get(current, None)
            variable = Variable(tmp if tmp else create_temp(), CSTR_TYPE)
            if tmp is None: 
                global_cstr2var[current] = variable.name
                global_var2cstr[variable.name] = current
            impl.vars[variable.name] = variable
            impl.used_globals.add(variable.name)
            return [variable]
        variable = Variable(create_temp(), literal_method.is_literal_of)
        if is_lsp and error_token.file.is_main_file: print_lsp_literal(error_token, "**literal**\n\nnumber defined to be "+literal_method.at.text)
        impl.vars[variable.name] = variable
        impl.implementation.extend([
            variable,
            CODEWORD_EQUALS,
            CodeWord(literal_method.at.text),
            CODEWORD_SEMICOLON
        ])
        return [variable]
    if SIZEOF_TYPE in method.variations:
        total_size = 0
        for var in vars:
            if var.type.builtin: total_size += var.type.memory_size()
        tmp = create_temp()
        var = Variable(tmp, UINT_TYPE)
        impl.vars[tmp] = var
        impl.implementation.extend([
            var,
            CODEWORD_EQUALS,
            CodeWord(str(total_size)),
            CODEWORD_SEMICOLON
        ])
        return [var]
    callee = _select_call(file, impl, method, vars, error_token)
    if len(vars)<len(callee.args):
        gathered_vars: list[Variable] = list()
        for effect_var in callee.effect_names:
            for var in impl.vars.values():
                if var.name==effect_var or var.name.startswith(effect_var+"__"): 
                    if var.stabilized_name() in impl.invalidated:
                        error_token.error("safety", "'"+pretty_name(var.stabilized_name())+"' has been invalidated", reason=impl.invalidated[var.stabilized_name()], raason_message="due to")
                    gathered_vars.append(var)
            if len(vars)+len(gathered_vars)>=len(callee.args): break
        gathered_vars.extend(vars)
        vars = gathered_vars

    if callee==NOCATCH_TYPE:
        if impl.needs_failure_mode: error_token.error("safety", "there are potential errors that can occur up to here that have not been intercepted with `try`")
        #return [TRUE_TYPE if impl.needs_failure_mode else FALSE_TYPE]

    if callee==CAUGHT_TYPE:
        tmp = create_temp()
        var = Variable(tmp, CAUGHT_TYPE)
        impl.vars[tmp] = var
        if not impl.used_error_codes: error_token.error("safety", "there is nothing to catch up to here")
        impl.has_caught_used_error_codes = True
        try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
        if try_var is None: error_token.error("safety", "you can only catch within a `try`, for example per `if exists error=compiler:catch() print cstr error`")
        else: impl.is_parsing_a_try[-1] = None
        impl.implementation.extend([
            var,
            CODEWORD_EQUALS,
            CodeWord("__temp_complain"),
            CODEWORD_SEMICOLON,
        ])
        impl.has_any_complaint = True
        impl.implementation.extend([
            try_var,
            CODEWORD_EQUALS,
            CODEWORD_LPAR,
            CodeWord("__temp_complain"),
            CodeWord("=="),
            CodeWord("0"),
            CODEWORD_RPAR,
            CODEWORD_SEMICOLON,
        ])
        impl.implementation.extend([
            CodeWord("__temp_complain"),
            CODEWORD_EQUALS,
            CodeWord("0"),
            CODEWORD_SEMICOLON,
        ])
        return [var]

    unstable_vars = vars
    vars = impl.stabilize(vars)
               
    # first check for pointer mismatches (this is a safety error)
    for varpos, var in enumerate(vars):
        if var.type!=POINTER_TYPE: continue # so we know for a fact that
        var_pointer_type = impl.get_pointer_type(var)
        other_pointer_type = callee.get_pointer_type(callee.vars[callee.args[varpos]])
        if (var_pointer_type is None or var_pointer_type==ANY_TYPE) and other_pointer_type is not None and other_pointer_type!=ANY_TYPE:
            impl._pointer_types[var.name] = other_pointer_type

        # invalidate everything assigned to the same mutable pointer if the function actually requires it as mutable and the function
        # creates invalidations
        if (not callee.vars[callee.args[varpos]].immutable) and POINTER_TYPE in callee.invalidate_types_when_called:
            for val in impl.vars.values():
                v = val.stabilized_name()
                v_assignment = impl.get_assignment(v, [var.name])
                if val not in vars and v_assignment is not None and v_assignment!=v: # TODO: don't invalidate mutable args that are reset
                    impl.invalidated[v] = error_token

    # TODO: we will now call the method, but we could also inline it in the future maybe
    tmp = create_temp()
    rets = list()
    if callee.needs_failure_mode:
        try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
        if try_var is not None:
            impl.has_any_complaint = True
            impl.implementation.extend([
                CodeWord("__temp_complain"),
                CODEWORD_EQUALS,
                CallPointer(callee),#CodeWord(callee.monomorphic_name),
                CODEWORD_LPAR,
            ])
        else:
            impl.implementation.extend([
                CodeWord("__temp_errcode"),
                CODEWORD_EQUALS,
                CallPointer(callee),#CodeWord(callee.monomorphic_name),
                CODEWORD_LPAR,
            ])
    else:
        impl.implementation.extend([
            CallPointer(callee),#CodeWord(callee.monomorphic_name),
            CODEWORD_LPAR,
        ])
    impl.used_error_codes.add(callee)
    for defer in callee.returned_defers:
        for i in range(len(defer)-3):
            if defer[i].tostring()=="__temp_errcode" and defer[i+1].tostring()=="=" and defer[i+3].tostring()==";":
                impl.spawned_error_codes.add(int(defer[i+2].tostring()))
    for varpos, var in enumerate(vars):
        if var.type.builtin: 
            callee_arg = callee.vars[callee.args[varpos]]
            if callee_arg.immutable:
                impl.implementation.extend([var, CODEWORD_COMMA])
                continue
            if var.isprivate: error_token.error("safety", "an immutable class field '"+pretty_name(vars[varpos].name)+"' would be modified by mutable '"+pretty_name(callee_arg.name)+"'", reason=callee.at)
            #elif not var.immutable: error_token.error("type", "an immutable variable '"+pretty_name(vars[varpos].name)+"' would be modified by mutable '"+pretty_name(callee_arg.name)+"'", reason=callee.at)
            impl.implementation.extend([CODEWORD_AMP, var, CODEWORD_COMMA])

    if callee.defers and callee.invalidate_types_on_defer:
        # if the called function has any defers, we know that it's complete and now we can kind of safely tell
        # whether it should invalidate the defers
        for p in callee.invalidate_types_on_defer:
            if p not in callee.invalidate_types_when_called:
                callee.invalidate_types_when_called.append(p)
        callee.invalidate_types_on_defer.clear()

    for invalid_type in callee.invalidate_types_when_called:
        for varname, val in impl.vars.items():
            if val.type.invalidated_by == invalid_type and not varname.endswith("__unsafe_ptr"):
                impl.invalidated[val.stabilized_name()] = error_token
    if impl.is_parsing_a_defer:
        for p in callee.invalidate_types_when_called:
            if p not in impl.invalidate_types_on_defer: impl.invalidate_types_on_defer.append(p)
    else:
        for p in callee.invalidate_types_when_called:
            if p not in impl.invalidate_types_when_called: impl.invalidate_types_when_called.append(p)
    for p in callee.invalidate_types_on_defer:
        if p not in impl.invalidate_types_on_defer:
            impl.invalidate_types_on_defer.append(p)

    # this is a critical point for ... pointers ;-) actually for buffers
    # we are next going to go through all the actual pointer compliance checks
    # so it is correct (actually, mandatory) to promote the return result to the 
    # corresponding input buffer type - we will do so by detecting pointers attached to buffers,
    # which have a known structure, with the pointers as the first argument.

    prefix = longest_common_prefix(callee.rets)
    prefix_length = len(prefix)
    #print(impl.name, callee.name, prefix, callee.rets)
    
    for ret_pos, ret in enumerate(callee.rets):
        varname = tmp+"__"+ret[prefix_length:]
        original = callee.vars[ret]
        variable = original.renamed_copy(varname)
        impl.vars[varname] = variable
        rets.append(variable)
        if variable.type.builtin: impl.implementation.extend([CODEWORD_AMP, variable, CODEWORD_COMMA])
        if original.type!=POINTER_TYPE: continue
        original_pointer_type = callee.get_pointer_type(original)
        if original_pointer_type is None or original_pointer_type==ANY_TYPE:
            original_pointer_dependency: Variable|None = callee.follow_pointer_dependency(original)
            if original_pointer_dependency is None: original_pointer_dependency = original
            if callee==SAME_CONTENTS_TYPE: assert original_pointer_dependency
            if original_pointer_dependency is not None:
                for varpos, varname in enumerate(callee.args):
                    if varname!=original_pointer_dependency.name: continue
                    impl.set_pointer_depedency(variable, vars[varpos])
                    pointer_type: ImplementedType|None = impl.get_pointer_type(vars[varpos])
                    if pointer_type and pointer_type!=ANY_TYPE and ret_pos and rets[ret_pos-1].type.is_buffer_of==ANY_TYPE:
                        rets[ret_pos-1].type = buffer_types[pointer_type].variations[0]
                    break
        else:
            impl.set_pointer_type(variable, original_pointer_type)
            # overwrite known pointer types here for the pointer (it's fine to change the type because rets are copies)
    if any(callee.vars[r].type.builtin for r in callee.rets+callee.args): impl.implementation[-1] = CODEWORD_RPAR # replace last comma with closing parenthesis
    else: impl.implementation.append(CODEWORD_RPAR)

    impl.implementation.append(CODEWORD_SEMICOLON)

    if callee.needs_failure_mode:
        try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
        if try_var is not None:
            impl.implementation.extend([
                try_var,
                CODEWORD_EQUALS,
                CodeWord("__temp_complain"),
                CODEWORD_SEMICOLON,
            ])

    if callee.needs_failure_mode and impl.is_parsing_a_try:
        if impl.is_parsing_a_try[-1] is None: error_token.error("safety", "the 'try' mechanism has already matched one function call")
        impl.is_parsing_a_try[-1] = None
    if callee.needs_failure_mode and not impl.is_parsing_a_try:
        if impl.is_parsing_a_defer: error_token.error("safety", "cannot call a function with unhandled failure within 'defer'", reason=callee.at)
        impl.implementation.extend([
            CODEWORD_IF,
            CODEWORD_LPAR,
            CodeWord("__temp_errcode"),
            CODEWORD_RPAR,
            CODEWORD_LBRACKET,
        ])
        if debug_mode:
            text = "\\033[31mat\\033[0m "+error_token.file.path.replace('"','\\"')+" line "+str(error_token.row)+" column "+str(error_token.col)+"\\n"
            text +="   unhandled error from "+callee.signature()+"\\n"
            impl.implementation.extend([
                CODEWORD_PRINTF,
                CODEWORD_LPAR,
                CodeWord('"%s'+text+'"'),
                CODEWORD_RPAR,
                CODEWORD_SEMICOLON,
            ])
        impl.implementation.extend([
            CODEWORD_GOTO,
            CodeWord("__temp_failure"),
            CODEWORD_SEMICOLON,
            CODEWORD_RBRACKET
        ])
        impl.needs_failure_mode = True

    # transfer dependent assignments from inputs to outputs on callee
    for ret in callee.rets:
        tmp_name = tmp+"__"+ret[prefix_length:]
        for argpos, arg in enumerate(callee.args):
            if callee.get_assignment(ret, [arg]) is not None:
                impl.dependent_assignments[tmp_name] = vars[argpos].name
                if vars[argpos]!=unstable_vars[argpos]:
                    impl.vars[tmp_name]._references = vars[argpos].name
    # revalidate mutable references
    # for argpos, arg in enumerate(callee.args):
    #     if callee.vars[arg].immutable: continue
    #     print(vars[argpos].name)
    #     if vars[argpos].name in impl.invalidated:
    #         print(vars[argpos].name)
    
    if callee.has_retrieved_singleton and any(nest=="while" for nest in impl.nesting):
        error_token.error("safety", "cannot have multiple calls to singleton '"+callee.signature()+"' within a loop", reason=callee.has_retrieved_singleton, raason_message="declared at")

    if callee in impl.dependent_implementations:
        if callee.has_retrieved_singleton:
            error_token.error("safety", "already contains a call to singleton '"+callee.signature()+"'", reason=callee.has_retrieved_singleton, raason_message="declared at")
    else: 
        impl.dependent_implementations.append(callee)
    for dependency in callee.dependent_implementations:
        if dependency.has_retrieved_singleton:
            if dependency in impl.dependent_implementations:
                error_token.error("safety", "both the current function and '"+callee.signature()+"' already contain a call to singleton '"+dependency.signature()+"'", reason=dependency.has_retrieved_singleton, raason_message="declared at")
            elif any(nest=="while" for nest in impl.nesting):
                error_token.error("safety", "cannot have multiple calls to singleton '"+callee.signature()+"' within a loop", reason=callee.has_retrieved_singleton, raason_message="declared at")
            else:
                impl.dependent_implementations.append(dependency)
    for global_var in callee.used_globals:
        impl.used_globals.add(global_var)
    impl.complexity += callee.complexity+len(callee.implementation)
    callee.num_calls += 1
    if callee==FAIL_TYPE: 
        if impl.nesting: error_token.error("safety", "cannot create a compilation-time failure inside a 'while' or an 'if' whose condition does not evaluate to compile-time known boolean")
        raise CompfailException()
    if callee==SUCCESS_TYPE: 
        if impl.nesting: error_token.error("safety", "we are inside a 'while' or an 'if' whose condition cannot be inferred to a compile-time known boolean", reason=error_token)
    # and after all the above we need to transfer all defers
    # remember that defers cannot fail so we're ok with them
    # however, we need to move all variables declared inside too
    # tmp is retained for before as the return variable prefix
    if callee.returned_defers:
        secondary_tmp = create_temp()  # need new prefix to avoid packing stuff into the tmp object
    for defer in callee.returned_defers:
        new_defer = list()
        for segment in defer:
            if not isinstance(segment, Variable) or (segment.name in global_var2cstr):
                new_defer.append(segment)
                continue
            v_name = segment.tostring()
            if v_name in callee.rets:
                v_name_tmp = tmp+"__"+v_name[prefix_length:]
                new_defer.append(impl.vars[v_name_tmp]) # we have already created this
                #if impl.vars[v_name_tmp].type==POINTER_TYPE:
                impl.accumulating_defers[-1][v_name_tmp] = error_token
                continue
            new_v = segment.renamed_copy(secondary_tmp+"__"+v_name)
            new_defer.append(new_v)
            impl.vars[new_v.name] = new_v
        impl.defers.append(new_defer)
    return rets

def process_deref(file: File, pos: int, ret: list[Variable], impl: ImplementedType, current_token: Token):
    ret = impl.stabilize(ret)
    if len(ret)!=1: current_token.error("type", "can only deref a 'ptr' but got '"+signature_like(ret)+"'")
    if ret[0].type!=POINTER_TYPE: current_token.error("type", "can only deref a 'ptr' but got '"+signature_like(ret)+"'")
    if ret[0].stabilized_name() in impl.invalidated: current_token.error("safety", "this pointer could have been invalidated by a previous call; re-obtain it from its buffer", reason=impl.invalidated[ret[0].stabilized_name()])
    pointer_type = impl.get_pointer_type(ret[0])
    if pointer_type is None: current_token.error("type", "there is no known type attached to the pointer to deref at this point")
    if pointer_type == ANY_TYPE: current_token.error("type", "cannot deref a pointer on 'any' data (this can be specialized)")
    assert pointer_type is not None
    new_vars = list()
    prefix = create_temp()+"__"
    progress = 0
    skip = 0
    for ret_name in pointer_type.rets:
        r_var = pointer_type.vars[ret_name].renamed_copy(prefix+ret_name)
        new_vars.append(r_var)
        mem_size = r_var.type.memory_size() if r_var.type.builtin else 0
        impl.vars[r_var.name] = r_var
        if not mem_size: continue
        # non-allocation check is mandatory unfortunately
        impl.implementation.extend([
            CODEWORD_IF,
            CODEWORD_LPAR,
            CodeWord("!"),
            ret[0],
            CODEWORD_RPAR,
            CODEWORD_LBRACKET,
        ])
        if debug_mode:
            text = "\\033[31mmemory error\\033[0m unallocated pointer\\n"
            text += "\\033[31mat\\033[0m "+current_token.file.path.replace('"','\\"')+" line "+str(current_token.row)+" column "+str(current_token.col)+"\\n"
            impl.implementation.extend([
                CODEWORD_PRINTF,
                CODEWORD_LPAR,
                CodeWord('"%s'+text+'"'),
                CODEWORD_RPAR,
                CODEWORD_SEMICOLON,
            ])
        impl.implementation.extend([
            CODEWORD_GOTO,
            CodeWord("__temp_failure"),
            CODEWORD_SEMICOLON,
            CODEWORD_RBRACKET
        ])
        impl.needs_failure_mode = True
        impl.implementation.extend(
            [CodeWord(w) for w in "memcpy (".split(" ")]
            + [CODEWORD_AMP]
            + [r_var]
            + [CODEWORD_COMMA]
            #+ [CodeWord(w) for w in "( char * )".split(" ")]
            + [ret[0]]
          
            + ([CODEWORD_ADD, CodeWord(str(progress))] if progress else [])
            + [CODEWORD_COMMA, CodeWord(str(mem_size))]
            + [CODEWORD_RPAR, CODEWORD_SEMICOLON]
        )
        progress += mem_size
    return pos, new_vars

buffer_types: dict[UnionType|ImplementedType, UnionType] = dict()

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


def create_buffer_type(name, memory_size, variation, error_token):
    actual_variation = ImplementedType(name, at=variation.at)
    actual_variation.is_buffer_of = variation
    #actual_variation.doc = variation.doc
    type_arg = create_temp()+actual_variation.name
    i = 0
    while i<len(variation.rets):
        varg = variation.rets[i]
        # if variation.vars[varg].type.is_buffer_of:
        #      i += 4
        #      continue
        if variation.vars[varg].type == POINTER_TYPE:
            actual_variation.invalidated_by = POINTER_TYPE
            #error_token.error("safety", "cannot place a pointer '"+pretty_name(varg)+"' onto a buffer", reason=variation.at)
        i += 1
    actual_variation.vars[type_arg] = Variable(type_arg, actual_variation, immutable=True, isprivate=False)
    actual_variation.vars["unsafe_ptr"] = Variable("unsafe_ptr", POINTER_TYPE, immutable=False, isprivate=False)
    actual_variation.vars["unsafe_size"] = Variable("unsafe_size", UINT_TYPE, immutable=False, isprivate=False)
    actual_variation.vars["unsafe_align"] = Variable("unsafe_align", UINT_TYPE, immutable=False, isprivate=False)
    actual_variation.set_pointer_type(actual_variation.vars["unsafe_ptr"], variation)
    actual_variation.implementation.extend([
        actual_variation.vars["unsafe_align"],
        CODEWORD_EQUALS,
        CodeWord(memory_size),
        CODEWORD_SEMICOLON
    ])
    actual_variation.rets.append(type_arg)
    actual_variation.rets.append("unsafe_ptr")
    actual_variation.rets.append("unsafe_size")
    actual_variation.rets.append("unsafe_align")
    return actual_variation

literal_types: dict[str, UnionType] = dict()
    
def create_literal_type(literal_tok: Token, type: ImplementedType):
    text = literal_tok.text
    if text in literal_types: return literal_types[text]
    ret = ImplementedType(create_temp(), at=literal_tok)
    ret.is_literal_of = type
    type_var = create_temp()
    ret.vars[type_var] = Variable(type_var, ret)
    ret.rets.append(type_var)
    #ret.vars["arg"] = Variable("arg", type)
    #ret.args.append("arg")
    uret = UnionType(ret.name, at=ret.at)
    uret.variations.append(ret)
    literal_types[text] = uret
    return uret

def process_type(file: File, tokens: list[Token], pos: int, show_lsp: bool=False, reduce_to_unique_variations: bool=True) -> tuple[int, File|UnionType]:
    type_start = get(tokens, pos)
    name = type_start.text
    #if name=="literal":
        # if is_lsp and type_start.file.is_main_file: print_lsp_keyword(type_start, "denotes a data literal")
        # pos += 1
    literal_tok = type_start#get(tokens, pos)
    if literal_tok.is_string() and peek_text(tokens, pos+1)!=":":
        if is_lsp and literal_tok.file.is_main_file: print_lsp_string(literal_tok)
        return pos+1, create_literal_type(literal_tok, CSTR_TYPE)
    if literal_tok.is_uint():
        if is_lsp and literal_tok.file.is_main_file: print_lsp_literal(literal_tok, "an unsigned integer")
        return pos+1, create_literal_type(literal_tok, UINT_TYPE)
    if literal_tok.is_int():
        if is_lsp and literal_tok.file.is_main_file: print_lsp_literal(literal_tok, "an integer")
        return pos+1, create_literal_type(literal_tok, INT_TYPE)
    if literal_tok.is_float():
        if is_lsp and literal_tok.file.is_main_file: print_lsp_literal(literal_tok, "a float value")
        return pos+1, create_literal_type(literal_tok, FLOAT_TYPE)
        #literal_tok.error("type", "a 'literal' definition can only be followed by a number or string literal, not an expession")
    if peek_text(tokens, pos+1)!=":":
        if name in operators: tokens[pos].error("syntax", "the previous expression has ended")
        type: UnionType|None = file.types.get(name, None)
        if type is None: 
            #raise("unknown type '"+name+"'")
            found = False
            for tokpos, tok in enumerate(tokens):
                if tok.text=="def" and peek_text(tokens, tokpos+1)==name:
                    if peek_text(tokens, tokpos+2)=="=": tokens[pos].error("type", "type union is declared later per 'def "+name+"'")
                    else:
                        if pos>tokpos: 
                            tokens[pos].error("type", "recursive usage of 'def "+name+"' before its definition; perhaps declare it as 'rec'")
                        else:
                            tokens[pos].error("type", "recursive usage of 'def "+name+"' defined later, but the present function must return non-recursively before its first recursive call")
                elif tok.text=="rec" and peek_text(tokens, tokpos+1)==name:
                    tokens[pos].error("type", "usage of 'rec "+name+"' before its definition") 

            if name[0] in symbols: tokens[pos].error("syntax", "previous expression ended before operator '"+name+"'")
            candidates: list[ImplementedType] = list()
            max_candidate_common_length = 0
            for type in file.types.values():
                for variation in type.variations:
                    if "__temp" in variation.name: continue
                    common_length = len(longest_common_prefix([variation.name, name]))
                    if common_length>max_candidate_common_length: 
                        candidates = list()
                        max_candidate_common_length = common_length
                    if common_length==max_candidate_common_length: 
                        candidates.append(variation)
            if file==tokens[pos].file: tokens[pos].error("type", "unknown type '"+pretty_name(name)+"'", suggestions=[candidate.signature() for candidate in candidates]+["\""+file.path+"\":"+k for k in file.namespaces])
            
            namespace: File|None = file if name=="\""+file.path+"\"" else file.namespaces.get(name, None)
            if namespace is None: tokens[pos].error("import", "unknown namespace '"+name+"'", suggestions=["\""+file.path+"\":"+k for k in file.namespaces])
            assert namespace is not None
            if peek_text(tokens, pos+3)==":":
                return process_type(namespace, tokens, pos+2, reduce_to_unique_variations=reduce_to_unique_variations)
            return pos+1, namespace
            
            #tokens[pos].error("type", "unknown type '\""+file.path+"\":"+pretty_name(name)+"'", suggestions=[candidate.signature() for candidate in candidates]+["\""+file.path+"\":"+k for k in file.namespaces])
        assert type is not None
        if peek_text(tokens, pos+1)=="[":
            at_pos = get(tokens, pos+1)
            if get(tokens, pos+2).text!="]": at_pos.error("syntax", "to denote a buffer type use '[]'")
            buffer_type: UnionType|None = buffer_types[type] if type in buffer_types else None
            if buffer_type is None:
                buffer_type = UnionType(type.name+"____temp_buffer", at=type.at)
                unique_variations = find_unique_variations(type.variations) if reduce_to_unique_variations else type.variations
                #unique_variations = type.variations
                #if len(unique_variations)!=1: at_pos.error("safety", "it is not clear which version should be used for '"+type.name+"[]'", suggestions=[candidate.signature() for candidate in unique_variations])
                for variation in unique_variations:
                    variation_buffer_type = buffer_types.get(type, None)
                    if variation_buffer_type is None:
                        actual_variation = create_buffer_type(buffer_type.name+"____buffer", str(variation.memory_size()), variation, get(tokens, pos))
                        variation_buffer_type = UnionType(buffer_type.name+"____temp_buffer", at=variation.at)
                        variation_buffer_type.append(actual_variation)
                        buffer_types[variation] = variation_buffer_type
                    buffer_type.variations.extend(variation_buffer_type.variations)
                assert type is not None
                buffer_types[type] = buffer_type
            assert buffer_type is not None
            file.types[buffer_type.name] = buffer_type

            if is_lsp and type_start.file.is_main_file and show_lsp:
                type_end = get(tokens, pos+2)
                if type_start.row != type_end.row: type_end = type_start
                for variation in buffer_type.variations:
                    at = variation.at if variation.at else type_start
                    print("---")
                    # position in processed file
                    print("struct")
                    print(os.path.abspath(type_start.file.path))
                    print(type_start.row)
                    print(type_start.col)
                    print(len(type_end.text)+type_end.col-type_start.col)
                    # defined at
                    print(os.path.abspath(at.file.path))
                    print(at.row)
                    print(at.col)
                    # message (may span multiple lines))
                    print("```rust\n"+variation.signature()+"\n```")#+(" defined in "+at.file.path if variation.at else " from compiler definitions"))

            return pos+3, buffer_type
        # if not reduce_to_unique_variations:  # TODO: determine what we should do
        #     for variation in type.variations: 
        #         if variation==ANY_TYPE: tokens[pos].error("safety", "can only use 'any' type within pointers or buffers")

        if is_lsp and type_start.file.is_main_file and show_lsp:
            type_end = get(tokens, pos)
            if type_start.row != type_end.row: type_end = type_start
            unique_variations = find_unique_variations(type.variations) if reduce_to_unique_variations else type.variations
            for variation in unique_variations:
                at = variation.at if variation.at else type_start
                print("---")
                # position in processed file
                print("struct")
                print(os.path.abspath(type_start.file.path))
                print(type_start.row)
                print(type_start.col)
                print(len(type_end.text)+type_end.col-type_start.col)
                # defined at
                print(os.path.abspath(at.file.path))
                print(at.row)
                print(at.col)
                # message (may span multiple lines))
                print("```rust\n"+variation.signature()+"\n```")#+(" defined in "+at.file.path if variation.at else " from compiler definitions"))

        return pos+1, type
    namespace: File|None = file if name=="\""+file.path+"\"" else file.namespaces.get(name, None)
    if namespace is None: tokens[pos].error("import", "unknown namespace '"+name+"'", suggestions=["\""+file.path+"\":"+k for k in file.namespaces])
    assert namespace is not None
    return process_type(namespace, tokens, pos+2, reduce_to_unique_variations=reduce_to_unique_variations)

def process_linear_type(file: File, tokens: list[Token], pos: int, show_lsp: bool=False, reduce_to_unique_variations: bool=True) -> tuple[int, UnionType]:
    parentheses = peek_text(tokens, pos)=="("
    if parentheses: pos += 1
    start_pos = pos
    prev_pos = pos
    pos, tmptype = process_type(file, tokens, pos, show_lsp, reduce_to_unique_variations=reduce_to_unique_variations)
    if not isinstance(tmptype, UnionType): tokens[prev_pos].error("type", "expecting a type instead of namespace")
    assert isinstance(tmptype, UnionType)
    type: UnionType = tmptype
    if peek_text(tokens, pos) == "|":
        if is_lsp and get(tokens, pos).file.is_main_file and show_lsp: print_lsp_keyword(get(tokens, pos), "either of the types")
        prev_pos = pos
        pos, alternatives = process_linear_type(file, tokens, pos+1, show_lsp, reduce_to_unique_variations=reduce_to_unique_variations)
        ret = UnionType(type.name+"|"+alternatives.name, at=get(tokens, prev_pos))
        ret.variations.extend(type.variations)
        ret.variations.extend(alternatives.variations)
        ret.variations = list(dict.fromkeys(ret.variations))#list(set(ret.variations))
        type = ret
    elif peek_text(tokens, pos) == "&":
        if is_lsp and get(tokens, pos).file.is_main_file and show_lsp: print_lsp_keyword(get(tokens, pos), "common elements of the type unions")
        prev_pos = pos
        pos, alternatives = process_linear_type(file, tokens, pos+1, show_lsp, reduce_to_unique_variations=False)
        ret = UnionType(type.name+"&"+alternatives.name, at=get(tokens, prev_pos))
        alternative_variations = set(alternatives.variations)
        ret.variations = [variation for variation in type.variations if variation in alternative_variations]
        type = ret
    elif peek_text(tokens, pos) == "\\":
        if is_lsp and get(tokens, pos).file.is_main_file and show_lsp: print_lsp_keyword(get(tokens, pos), "exclude elements of the right type union from the left")
        prev_pos = pos
        pos, alternatives = process_linear_type(file, tokens, pos+1, show_lsp, reduce_to_unique_variations=False)
        ret = UnionType(type.name+"\\"+alternatives.name, at=get(tokens, prev_pos))
        alternative_variations = set(alternatives.variations)
        ret.variations = [variation for variation in type.variations if variation not in alternative_variations]
        type = ret
    if parentheses:
        if peek_text(tokens, pos)!=")": get(tokens, start_pos-1).error("type", "unclosed type definition parenthesis")
        pos += 1
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
    "=": ("=", 11),
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
    "@": ("@", 0.5),
    "->": ("access",-1),
}


async def process_statement_operator(file: File, tokens: list[Token], impl: ImplementedType, pos: int, rets: list[Variable], current_operator_priority: float) -> tuple[int, list[Variable]]:
    # apply this when returning from await process_statement
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

        if op_name==">>" or op_name=="<<" or op_name=="=":
            if op_name=="=" and peek_text(tokens, pos-1)!="]": tokens[pos].error("safety", "unexpected '=' in the middle of expression", suggestions=["use 'buffer[item] = value' when supported by 'mutget' (for buffers, this is equivalent to buffer[item]&&<<value)", "use '<<' to move data to a mutable pointer", "fix syntax to assign to a variable or variable item instead"])
            err_token = op_token
            pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority=0) # don't touch rets
            pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
            if op_name ==">>": ret, rets = rets, ret
            if len(rets)!=1: err_token.error("type", "cannot apply '"+op_name+"' to non-pointer '"+signature_like(rets)+"'")
            rets = impl.stabilize(rets)
            var = rets[0]
            if var is not None and var.isprivate: err_token.error("type", "cannot set to immutable class field: '"+pretty_name(var.name)+"'")
            if var is None: err_token.error("type", "can only set a value to an existing pointer with '"+op_name+"' but found '"+signature_like(rets)+"'")
            if var.type!=POINTER_TYPE: err_token.error("type", "you can set a value only to an existing pointer's memory contents with '"+op_name+"' but found '"+signature_like(rets)+"'")
            if var.stabilized_name() in impl.invalidated: err_token.error("safety", "this pointer could have been invalidated by a previous call; re-obtain it from its buffer", reason=impl.invalidated[var.stabilized_name()], raason_message="due to")
            if var.immutable: err_token.error("type", "cannot move data to an immutable pointer", suggestions=["make it 'mut'", "obtain it with '&&' from a buffer (or mutget) if you are working with std", "remove 'const' qualitifier"])
            pointer_type: ImplementedType|None = impl.get_pointer_type(var)
            if pointer_type is None or pointer_type==ANY_TYPE: err_token.error("type", "cannot "+op_name+" a value onto a pointer with unknown associated type")
            assert pointer_type is not None
            if len(pointer_type.rets)!=len(ret): err_token.error("type", "this is a pointer to data of different type: '"+signature_like(ret)+"' vs '"+pointer_type.signature()+"'")
            for pr, r in zip(pointer_type.rets, ret):
                if pointer_type.vars[pr].type != r.type: err_token.error("type", "this is a pointer to data of different type: '"+signature_like(ret)+"' vs '"+pointer_type.signature()+"'")
            # we now have a contract that we can place our data on the pointer
            progress = 0
            for r in ret:
                mem_size = r.type.memory_size() if r.type.builtin else 0
                if not mem_size: continue
                # non-allocation check is mandatory unfortunately
                impl.implementation.extend([
                    CODEWORD_IF,
                    CODEWORD_LPAR,
                    CodeWord("!"),
                    var,
                    CODEWORD_RPAR,
                    CODEWORD_LBRACKET,
                ])
                if debug_mode:
                    text = "\\033[31mmemory error\\033[0m unallocated pointer\\n"
                    text += "\\033[31mat\\033[0m "+err_token.file.path.replace('"','\\"')+" line "+str(err_token.row)+" column "+str(err_token.col)+"\\n"
                    impl.implementation.extend([
                        CODEWORD_PRINTF,
                        CODEWORD_LPAR,
                        CodeWord('"%s'+text+'"'),
                        CODEWORD_RPAR,
                        CODEWORD_SEMICOLON,
                    ])
                impl.implementation.extend([
                    CODEWORD_GOTO,
                    CodeWord("__temp_failure"),
                    CODEWORD_SEMICOLON,
                    CODEWORD_RBRACKET
                ])
                impl.needs_failure_mode = True
                impl.implementation.extend(
                    [CodeWord("memcpy"), CODEWORD_LPAR]
                    +[var]
                    + ([CODEWORD_ADD, CodeWord(str(progress))] if progress else [])
                    + [CODEWORD_COMMA, CODEWORD_AMP]
                    + [impl.vars[r.stabilized_name()]]
                    + [CODEWORD_COMMA, CodeWord(str(mem_size))]
                    + [CODEWORD_RPAR, CODEWORD_SEMICOLON]
                )
                progress += mem_size
            prev_ret = ret
            continue
        
        if op_name=="and":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "logical 'and' between two boolean or compile-time boolean values; the right hand side evaluates only if the left is 'true'")
            if len(rets)!=1: op_token.error("type", "the left hand side must always be true/false for 'and'")
            if rets[0].type==TRUE_TYPE:
                pos, rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority) 
                continue
            if rets[0].type==FALSE_TYPE:
                pos = skip_statement(file, tokens, pos+1) 
                continue
            if rets[0].type!=BOOL_TYPE: op_token.error("type", "the left hand side must always be true/false for 'and'")
            impl.implementation.extend([
                CODEWORD_IF,
                CODEWORD_LPAR,
                rets[0],
                CODEWORD_RPAR,
                CODEWORD_LBRACKET
            ])
            pos, rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority)
            pack_name = create_temp()
            impl.assign(pack_name, rets, op_token)
            rets = [v for k, v in impl.vars.items() if k.startswith(pack_name)]
            impl.implementation.append(CODEWORD_RBRACKET)
            continue

        if op_name=="or":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "logical 'or' between two boolean or compile-time boolean values; the right hand side evaluates only if the left is 'false'")
            if len(rets)!=1: op_token.error("type", "the left hand side must always be true/false for 'or'")
            if rets[0].type==TRUE_TYPE:
                pos = skip_statement(file, tokens, pos+1) 
                continue
            if rets[0].type==FALSE_TYPE:
                pos, rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority) 
                continue
            if rets[0].type!=BOOL_TYPE: op_token.error("type", "the left hand side must always be true/false for 'or'")
            impl.implementation.extend([
                CODEWORD_IF,
                CODEWORD_LPAR,
                CodeWord("!"),
                rets[0],
                CODEWORD_RPAR,
                CODEWORD_LBRACKET
            ])
            pos, rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority) 
            pack_name = create_temp()
            impl.assign(pack_name, rets, op_token)
            rets = [v for k, v in impl.vars.items() if k.startswith(pack_name)]
            impl.implementation.append(CODEWORD_RBRACKET)
            continue

        if op_name=="is":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "compile time boolean check of whether a value is of a given type; 'value is blank' checks if the value exists")
            async def process_is(pos: int, rets: list[Variable]):
                is_pos = pos
                pos += 1
                # first parse type extraction statements
                found_variations: list[ImplementedType] = list()
                if peek_text(tokens, pos)=="type":
                    pos, processed_rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=0)
                    matched = len(processed_rets)==len(rets)
                    if matched:
                        for processed_ret, rets_ret in zip(processed_rets, rets):
                            if processed_ret.type!=rets_ret.type and processed_ret.type.is_literal_of!=rets_ret.type:
                                matched = False
                                break
                    rets = [Variable(create_temp(), TRUE_TYPE) if matched else Variable(create_temp(), FALSE_TYPE)]
                    impl.vars[rets[0].name] = rets[0]
                    return pos, rets
                pos, type = process_linear_type(file, tokens, pos, reduce_to_unique_variations=True, show_lsp=True)
                count_with_literals = 0
                for variation in type.variations:
                    matched = len(variation.rets)==len(rets)
                    is_with_literal = False
                    if matched:
                        for variation_ret, rets_ret in zip(variation.rets, rets):
                            if variation.vars[variation_ret].type.is_literal_of: is_with_literal = True
                            if variation.vars[variation_ret].type!=rets_ret.type and variation.vars[variation_ret].type.is_literal_of!=rets_ret.type:
                                matched = False
                                break
                    if matched: 
                        found_variations.append(variation)
                        if is_with_literal: count_with_literals += 1
                if count_with_literals<len(found_variations):
                    rets = [Variable(create_temp(), TRUE_TYPE)]
                elif count_with_literals:
                    has_any_var = Variable(create_temp(), BOOL_TYPE)
                    is_variation_matching_var = Variable(create_temp(), BOOL_TYPE)
                    impl.vars[has_any_var.name] = has_any_var
                    impl.vars[is_variation_matching_var.name] = is_variation_matching_var
                    for variation in found_variations:
                        impl.implementation.extend([is_variation_matching_var, CODEWORD_EQUALS, CodeWord("1"),CODEWORD_SEMICOLON])
                        for arg_pos, arg in enumerate(variation.args):
                            literal_method = variation.vars[arg].type
                            if literal_method.is_literal_of is None: continue # already checked
                            if literal_method.is_literal_of==CSTR_TYPE:
                                current = literal_method.at.text
                                tmp: str|None = global_cstr2var.get(current, None)
                                variable = Variable(tmp if tmp else create_temp(), CSTR_TYPE)
                                if tmp is None: 
                                    global_cstr2var[current] = variable.name
                                    global_var2cstr[variable.name] = current
                                impl.vars[variable.name] = variable
                                impl.used_globals.add(variable.name)
                            else:
                                variable = Variable(create_temp(), literal_method.is_literal_of)
                                impl.vars[variable.name] = variable
                                impl.implementation.extend([
                                    variable,
                                    CODEWORD_EQUALS,
                                    CodeWord(literal_method.at.text),
                                    CODEWORD_SEMICOLON
                                ])
                            impl.implementation.extend([
                                CODEWORD_IF,
                                CODEWORD_LPAR,
                                variable,
                                CodeWord("!="),
                                rets[arg_pos],
                                CODEWORD_RPAR,
                                CODEWORD_LBRACKET,
                                is_variation_matching_var,
                                CODEWORD_EQUALS,
                                CodeWord("0"),
                                CODEWORD_SEMICOLON,
                                CODEWORD_RBRACKET,
                            ])
                        impl.implementation.extend([
                            CODEWORD_IF,
                            CODEWORD_LPAR,
                            is_variation_matching_var,
                            CODEWORD_RPAR,
                            CODEWORD_LBRACKET,
                            has_any_var,
                            CODEWORD_EQUALS,
                            CodeWord("1"),
                            CODEWORD_SEMICOLON,
                            CODEWORD_RBRACKET,
                        ])
                    rets = [has_any_var]
                else:
                    rets = [Variable(create_temp(), FALSE_TYPE)]
                impl.vars[rets[0].name] = rets[0]
                return pos, rets
            pos, rets = await process_is(pos, rets)
            continue
        if op=="@":
            def process_substructure(pos: int, rets: list[Variable]):
                associated_type: ImplementedType|None = None
                count = 0
                for ret in rets:
                    if ret.type.is_buffer_of:
                        next_associated_type = ret.type.is_buffer_of
                        if next_associated_type==associated_type: continue
                        associated_type = next_associated_type
                        count += 1
                    # if ret.type==POINTER_TYPE:
                    #     next_associated_type = impl.get_pointer_type(ret)
                    #     if next_associated_type==associated_type: continue
                    #     associated_type = next_associated_type
                    #     count += 1
                if count!=1 or associated_type is None: tokens[pos].error("type", "can only apply '@' on a buffer, not '"+signature_like(rets)+"'")
                if associated_type==ANY_TYPE: tokens[pos].error("type", "cannot apply the @ notation on 'any[]'")
                assert associated_type is not None
                pos += 1
                field_token = get(tokens, pos)
                pos += 1
                field_name = field_token.text
                min_pos = len(associated_type.rets)
                max_pos_plus_one = 0 # non-inclusive
                count = 0
                prefix = field_name+"__"
                for i, rname in enumerate(associated_type.rets):
                    if field_name==rname:
                        min_pos = i
                        max_pos_plus_one = i+1
                        count = 1
                        break
                    if rname.startswith(prefix):
                        min_pos = min(min_pos, i)
                        max_pos_plus_one = max(max_pos_plus_one, i+1)
                        count += 1
                if count==0: field_token.error("type", "field '"+pretty_name(field_name)+"' not found in '"+associated_type.signature()+"' with returns "+','.join(associated_type.rets))
                if count!=max_pos_plus_one-min_pos: field_token.error("type", "field '"+pretty_name(field_name)+"' is not packed contiguousy in '"+associated_type.signature()+"' with returns "+','.join(associated_type.rets))
                offset = 0
                for i in range(min_pos):
                    var = associated_type.vars[associated_type.rets[i]]
                    mem_size = var.type.memory_size() if var.type.builtin else 0
                    offset += mem_size
                varname = create_temp()
                common_prefix = longest_common_prefix([var.name for var in rets])
                len_common_prefix = len(common_prefix)
                new_rets = list()
                temp_type = ImplementedType(associated_type.name+"."+field_name)
                associated_len_common_prefix = len(longest_common_prefix([var for var in associated_type.rets[min_pos:max_pos_plus_one]]))
                for j in range(min_pos, max_pos_plus_one):
                    new_name = associated_type.rets[j][associated_len_common_prefix:]
                    temp_type.rets.append(new_name)
                    temp_type.vars[new_name] = associated_type.vars[associated_type.rets[j]].renamed_copy(new_name)
                temp_buffer_type = create_buffer_type(temp_type.name+"@"+field_name, "0", temp_type, field_token)
                for var in rets:
                    prev_name = var.name
                    new_name = varname+"__"+var.name[len_common_prefix:]
                    if var.type.is_buffer_of==associated_type: 
                        var = var.renamed_copy(new_name)
                        var.type = temp_buffer_type
                    if var.type==POINTER_TYPE:
                        new_var = var.renamed_copy(new_name)
                        impl.vars[new_var.name] = new_var
                        impl.set_pointer_type(new_var, temp_type)
                        impl.implementation.extend([
                            new_var,
                            CODEWORD_EQUALS,
                            #CODEWORD_LPAR,
                            #CODEWORD_LPAR,
                            #CodeWord("char"),
                            #CODEWORD_MUL,
                            #CODEWORD_RPAR,
                            var,
                            #CODEWORD_RPAR,
                            CODEWORD_ADD,
                            CodeWord(str(offset)),
                            CODEWORD_SEMICOLON
                        ])
                    else:
                        impl.assign(new_name, [var], field_token, False, False)
                        new_var = impl.vars[new_name]
                    new_rets.append(new_var)
                    impl.dependent_assignments[new_name] = prev_name
                rets = new_rets
                return pos, new_rets
            pos, rets = process_substructure(pos, rets)
            continue
        elif op==".":
            async def process_access(pos: int, rets: list[Variable]):
                current_token = tokens[pos]
                if peek_text(tokens, pos+1)==".":
                    if len(rets)==1 and rets[0].type==POINTER_TYPE:
                        pos, rets = process_deref(file, pos, rets, impl, current_token)
                        pos += 2
                        return pos, rets
                    current_token.error("syntax", "can dereference only a pointer")
                current = longest_common_prefix([r.name for r in rets])
                if current.endswith("__"): current=current[:-2]
                pos -= 1
                call_continuation = False
                while peek_text(tokens, pos+1) == ".":
                    pos += 2
                    peek = current+"__"+get(tokens, pos).text
                    if not any(v.startswith(peek) for v in impl.vars) and peek_text(tokens, pos+1)!="is":
                        pos -= 2
                        call_continuation = True
                        break
                    current = peek
                    is_field = True
                    if current in impl.vars: break
                for r in rets:
                    if r.stabilized_name() in impl.invalidated: current_token.error("safety", "the variable '"+pretty_name(r.stabilized_name())+"' could have been invalidated", reason=impl.invalidated[r.stabilized_name()], raason_message="due to")
                pos += 1
                var = impl.vars.get(current, None)
                if var is None:
                    current_prefix = current+"__"
                    rets = [r for r in rets if r.name.startswith(current_prefix)]
                    if rets and is_lsp and get(tokens, pos-1).file.is_main_file: print_lsp_var(get(tokens, pos-1), signature_like(rets,impl))
                    if rets and call_continuation:
                        start_call = get(tokens,pos+1)
                        pos, type = process_type(file, tokens, pos+1)
                        call_token = get(tokens,pos-1)
                        if start_call.file==call_token.file and start_call.row==call_token.row: 
                            call_token = Token(" "*(call_token.col-start_call.col+len(call_token.text)), start_call.file, start_call.row, start_call.col)
                        if not isinstance(type, UnionType): op_token.error("type", "resolved to a file but not a type")
                        assert isinstance(type, UnionType)
                        pos -= 1
                        pos, additional_rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=0, for_call=True)
                        rets = resolve_call(file, impl, type, rets+additional_rets, call_token)
                        return pos, rets
                    if rets or peek_text(tokens, pos+1)=="is": return pos, rets
                    candidates: list[ImplementedType] = list()
                    max_candidate_common_length = 0
                    for varname in impl.vars:
                        if varname.startswith("__temp") or "____temp" in varname: continue
                        common_length = len(longest_common_prefix([varname, current]))
                        if common_length>max_candidate_common_length: 
                            candidates = list()
                            max_candidate_common_length = common_length
                        if common_length==max_candidate_common_length: 
                            varname = pretty_name(varname)
                            candidates.append(varname)
                    current_token.error("type", "not found field '"+pretty_name(current)+"'") 
                assert var is not None
                rets = [var]
                if is_lsp and get(tokens, pos-1).file.is_main_file: print_lsp_var(get(tokens, pos-1), signature_like(rets,impl))
                if call_continuation:
                    start_call = get(tokens,pos+1)
                    pos, type = process_type(file, tokens, pos+1)
                    call_token = get(tokens,pos-1)
                    if start_call.file==call_token.file and start_call.row==call_token.row: 
                        call_token = Token(" "*(call_token.col-start_call.col+len(call_token.text)), start_call.file, start_call.row, start_call.col)
                    if not isinstance(type, UnionType): op_token.error("type", "resolved to a file but not a type")
                    assert isinstance(type, UnionType)
                    pos -= 1
                    op_priority = -0.5
                    pos, additional_rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority, for_call=True)
                    rets = resolve_call(file, impl, type, rets+additional_rets, call_token)
                return pos, rets
            pos, rets = await process_access(pos, rets)
            continue
        elif op=="[":
            async def process_get(pos: int, rets: list[Variable]):
                err_token = tokens[pos]
                pos, additional_rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=0)
                if peek_text(tokens, pos)!="]": err_token.error("syntax", "missing closing ']'")
                pos += 1
                get_func_name = "get"
                deref = True
                also_assign = False
                if peek_text(tokens, pos)=="&" and peek_text(tokens, pos+1)=="&":
                    get_func_name = "mutget"
                    deref = False
                    pos += 2
                elif peek_text(tokens, pos)=="&":
                    deref = False
                    pos += 1
                elif peek_text(tokens, pos)=="=":
                    get_func_name = "mutget"
                    deref = False
                type = file.types.get(get_func_name, None)
                if type is None: err_token.error("type", "missing implementation for '"+get_func_name+"'")
                assert type is not None
                rets = resolve_call(file, impl, type, rets+additional_rets, err_token)
                if deref:
                    pos, rets = process_deref(file, pos, rets, impl, err_token)
                return pos, rets
            pos, rets = await process_get(pos, rets)
            continue
        elif op_priority==-1:
            op_token.error("syntax", "'->' has been deprecated")
            pos, type = process_type(file, tokens, pos+1)
            if not isinstance(type, UnionType): op_token.error("type", "resolved to a file but not a type")
            pos -= 1
            op_priority = -0.5
        else: 
            tmp_type = file.types.get(op_name, None)
            if tmp_type is None: op_token.error("type", "missing implementation for '"+op_name+"'")
            assert tmp_type is not None
            type = tmp_type
        pos, additional_rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority, for_call=True)
        assert isinstance(type, UnionType)
        rets = resolve_call(file, impl, type, rets+additional_rets, op_token)
    return pos, rets


async def process_statement(file: File, tokens: list[Token], pos: int, impl: ImplementedType, current_operator_priority: float, for_call: bool=False) -> tuple[int, list[Variable]]:
    current_token = get(tokens, pos)
    current = current_token.text
    if current=="fail":
        if is_lsp and current_token.file.is_main_file: print_lsp_keyword(current_token, "**fail**\n\nImmediately fail during execution with the corresponding string literal message or error code retrieved with 'compiler:catch()' from some other failure statement. Failures cascade to callers and to the callers of callers until the program exits with a corresponding error code, or a 'try' statement intercepts them.")
        pos += 1
        impl.needs_failure_mode = True
        message = get(tokens, pos)
        if not message.is_string(): 
            pos, ret = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
            pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
            if len(ret)!=1 or ret[0].type!=CAUGHT_TYPE:
                message.error("syntax", "must contain an error message after 'fail' or resolve to 'catch' type but found: "+signature_like(ret, impl))
            if debug_mode:
                text = "\\033[31mfail\\033[0m propagating error"
                text += "\\n\\033[31mat\\033[0m "+message.file.path.replace('"','\\"')+" line "+str(message.row)+" column "+str(message.col)+"\\n"
                impl.implementation.extend([
                    CODEWORD_PRINTF,
                    CODEWORD_LPAR,
                    CodeWord('"%s'+text+'"'),
                    CODEWORD_RPAR,
                    CODEWORD_SEMICOLON,
                ])
            try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
            if try_var is not None:
                impl.has_any_complaint = True
                impl.implementation.extend([
                    CodeWord("__temp_complain"),
                    CODEWORD_EQUALS,
                    ret[0],
                    CODEWORD_SEMICOLON
                ])
                impl.is_parsing_a_try[-1] = None
            else:
                if impl.is_parsing_a_defer: current_token.error("safety", "cannot fail within a 'defer' statement unless within a 'try'")
                impl.implementation.extend([
                    CodeWord("__temp_errcode"),
                    CODEWORD_EQUALS,
                    ret[0],
                    CODEWORD_SEMICOLON,
                    CODEWORD_GOTO,
                    CodeWord("__temp_failure"),
                    CODEWORD_SEMICOLON
                ])
            return await process_statement_operator(file, tokens, impl, pos, [], current_operator_priority)
        if is_lsp and message.file.is_main_file: print_lsp_string(message)
        text = message.text
        text = text[1:(len(text)-1)] # remove string limits
        err_code = err_code_table.get(text, None)
        if err_code is None:
            err_code = len(err_code_table)
            err_code_table[text] = err_code
            err_code_list.append(message.text)
        impl.spawned_error_codes.add(err_code)
        if debug_mode:
            text = "\\033[31mfail\\033[0m "+text
            text += "\\n\\033[31mat\\033[0m "+message.file.path.replace('"','\\"')+" line "+str(message.row)+" column "+str(message.col)+"\\n"
            impl.implementation.extend([
                CODEWORD_PRINTF,
                CODEWORD_LPAR,
                CodeWord('"%s'+text+'"'),
                CODEWORD_RPAR,
                CODEWORD_SEMICOLON,
            ])
        try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
        if try_var is not None:
            impl.has_any_complaint = True
            impl.implementation.extend([
                CodeWord("__temp_complain"),
                CODEWORD_EQUALS,
                CodeWord(str(err_code)),
                CODEWORD_SEMICOLON
            ])
            impl.is_parsing_a_try[-1] = None
        else:
            if impl.is_parsing_a_defer: current_token.error("safety", "cannot fail within a 'defer' statement unless within a 'try'")
            impl.implementation.extend([
                CodeWord("__temp_errcode"),
                CODEWORD_EQUALS,
                CodeWord(str(err_code)),
                CODEWORD_SEMICOLON,
                CODEWORD_GOTO,
                CodeWord("__temp_failure"),
                CODEWORD_SEMICOLON
            ])
        return await process_statement_operator(file, tokens, impl, pos+1, [], current_operator_priority)
    if current=="true":
        tmp = create_temp()
        variable = Variable(tmp, BOOL_TYPE) 
        impl.vars[tmp] = variable
        impl.implementation.extend([
            variable,
            CODEWORD_EQUALS,
            CodeWord("1"),
            CODEWORD_SEMICOLON
        ])
        return await process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if current=="false":
        tmp = create_temp()
        variable = Variable(tmp, BOOL_TYPE)
        impl.vars[tmp] = variable
        impl.implementation.extend([
            variable,
            CODEWORD_EQUALS,
            CodeWord("0"),
            CODEWORD_SEMICOLON
        ])
        return await process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if peek_text(tokens,pos+1)!="&":
        if current_token.is_string():
            if is_lsp and current_token.file.is_main_file: print_lsp_string(current_token)
            tmp: str|None = global_cstr2var.get(current, None)
            variable = Variable(tmp if tmp else create_temp(), CSTR_TYPE)
            if tmp is None: 
                global_cstr2var[current] = variable.name
                global_var2cstr[variable.name] = current
            impl.vars[variable.name] = variable
            impl.used_globals.add(variable.name)
            #impl.implementation.extend([variable, CODEWORD_EQUALS, CodeWord(current), CODEWORD_SEMICOLON])
            return await process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
        if current_token.is_uint():
            if is_lsp and current_token.file.is_main_file: print_lsp_literal(current_token, "an unsigned integer")
            tmp = create_temp()
            variable = Variable(tmp, UINT_TYPE)
            impl.vars[tmp] = variable
            impl.implementation.extend([variable, CODEWORD_EQUALS, CodeWord(current), CODEWORD_SEMICOLON])
            return await process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
        if current_token.is_int():
            if is_lsp and current_token.file.is_main_file: print_lsp_literal(current_token, "an integer")
            tmp = create_temp()
            variable = Variable(tmp, INT_TYPE)
            impl.vars[tmp] = variable
            impl.implementation.extend([variable, CODEWORD_EQUALS, CodeWord(current), CODEWORD_SEMICOLON])
            return await process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
        if current_token.is_float():
            if is_lsp and current_token.file.is_main_file: print_lsp_literal(current_token, "a float value")
            tmp = create_temp()
            variable = Variable(tmp, FLOAT_TYPE)
            impl.vars[tmp] = variable
            impl.implementation.extend([variable, CODEWORD_EQUALS, CodeWord(current), CODEWORD_SEMICOLON])
            return await process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if current=="doc":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**documentation**\n\nAdds the next string literal to the function's documentation.")
        next_token = get(tokens, pos+1)
        if not next_token.is_string(): next_token.error("type", "expecting 'cstr' documentation")
        pos += 1
        if is_lsp and next_token.file.is_main_file: print_lsp_string(next_token)
        impl.doc.append(next_token.text)
        return pos+1,[]
    if current=="VM":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**virtual machine equivalent**\n\nProvides a Python implementation that the virtual machine should evaluate to obtain return values.")
        next_token = get(tokens, pos+1)
        if not next_token.is_string(): next_token.error("type", "expecting 'cstr' virtual machine instruction")
        if impl.VM is not None: next_token.error("type", "VM implementation has already been provided")
        pos += 1
        if is_lsp and next_token.file.is_main_file: print_lsp_string(next_token)
        impl.VM = next_token.text
        return pos+1,[]
    if current=="mut":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**mutable**\n\nDeclares that the following value will be treated as mutable. This means that variables, fields and pointer contents may modified. This creates an error if mutable treatment is unsafe.")
        prev_pos = pos
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        if len(ret)==0:
            current_token.error("safety", "next value is blank")
        tmp = create_temp()
        impl.assign(tmp, ret, current_token)
        ret = [r for r in impl.vars.values() if r.name.startswith(tmp)]
        if all(r.stabilized_name()!=r.name for r in ret): current_token.error("safety", "references define with 'ref' are skipped when adding mutation with 'mut' but the current value consists only of references")
        mutated = [r.mutable_copy(tokens[prev_pos]) if r.stabilized_name()==r.name else r for r in ret]
        return await process_statement_operator(file, tokens, impl, pos, mutated, current_operator_priority)
    if current=="try":
        async def process_try(pos: int):
            if is_lsp and current_token.file.is_main_file: print_lsp_keyword(current_token, "**try**\n\nTries to execute the rest of the statement without failing. The result is a true or false boolean value, depending on whether an error occurred or not; the error's value is retrieved by the next 'compiler:caught()'. If more than one failing function calls are encountered in the expression, an error is created so that each is handled autonomously through assignment to intermediate variables.")
            tmp = create_temp()
            var = Variable(tmp, BOOL_TYPE)
            impl.vars[tmp] = var
            impl.is_parsing_a_try.append(var)
            pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
            pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority)
            if impl.is_parsing_a_try[-1] is not None: current_token.error("safety", "this 'try' statement does not guard against anything")
            impl.is_parsing_a_try.pop()
            impl.implementation.extend([
                var,
                CODEWORD_EQUALS,
                var,
                CodeWord("=="),
                CodeWord("0"),
                CODEWORD_SEMICOLON
            ])
            return pos, [var]
        return await process_try(pos)
    if current=="local":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**local**\n\nCreates an anonymized version of the next variable. Anonymization prevents mutable modidications from affecting the original, although it does not safeguard memory contents.")
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        if len(ret)==0:# or all(r.name.startswith("__temp") or "____temp" in r.name for r in ret):
            current_token.error("safety", "next value is blank")
        tmp = create_temp()
        impl.assign(tmp, ret, current_token)
        ret = [r for r in impl.vars.values() if r.name.startswith(tmp)]
        return await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority)
    if current=="ref":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**reference**\n\nTracks changes to the referenced value, such as buffer modifications, and makes all subsequent usage of the value (even implicit usage) use the referenced value. References are unpacked into actual independent values during returns.")
        prev_pos = pos
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        ret = impl.stabilize(ret)
        # tmp = create_temp()
        # impl.assign(tmp, [r.stable_copy() for r in ret], current_token)
        # ret = [r for r in impl.vars.values() if r.name.startswith(tmp)]
        return await process_statement_operator(file, tokens, impl, pos, [r.stable_copy() for r in ret], current_operator_priority)
    # if current=="partial_mut":
    #     if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**reference**\n\nTracks changes to the referenced value, such as buffer modifications, and makes all subsequent usage of the value (even implicit usage) use the referenced value. References are unpacked into actual independent values during returns.")
    #     prev_pos = pos
    #     pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
    #     ret = impl.stabilize(ret, on)
    #     return await process_statement_operator(file, tokens, impl, pos, [r.stable_copy() for r in ret], current_operator_priority)
    if current=="unsafe_mut":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**unsafe mutability**\n\nDeclares that the following value will be treated as mutable, even if that is unsafe (fields and pointer contents may modified). This does NOT create an error if the conversion to mutable is unsafe. YOU HAVE BEEN WARNED.")
        prev_pos = pos
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        return await process_statement_operator(file, tokens, impl, pos, [r.mutable_copy(None) for r in ret], current_operator_priority)
    if current=="const":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**constant value or memory**\n\nDeclares that the following value will be treated as fully immatuble (it cannot be the reason why fields and pointer contents are modified). This strips away any class membership information too. Do note that this does NOT mean that memory cannot be modified elsewhere - just that the yielded value cannot anymore be the source of modifications.")
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        return await process_statement_operator(file, tokens, impl, pos, [r.immutable_copy() for r in ret], current_operator_priority)
    if current == "INVALIDATE":
        if is_lsp and current_token.file.is_main_file: print_lsp_keyword(current_token, "**INVALIDATE**\n\nInvalides all data of the subsequent type that are not __unsafe_ptr; DO NOT USE THIS KEYWORD unless you are trying to enforce some safety patterns on exceptionally unsafe code, such as pointer invalidation whenever memory is reallocated or freed.")
        pos, type = process_linear_type(file, tokens, pos+1)
        for varname, val in impl.vars.items():
            if val.type in type.variations and not varname.endswith("__unsafe_ptr"):
                impl.invalidated[val.stabilized_name()] = current_token
                if varname in impl.args and not val.immutable:
                    impl.implementation.extend([
                        val, 
                        CODEWORD_EQUALS,
                        CodeWord("0"),
                        CODEWORD_SEMICOLON
                    ])
        if impl.is_parsing_a_defer: impl.invalidate_types_on_defer.extend(type.variations)
        else: impl.invalidate_types_when_called.extend(type.variations)
        return pos, []
    # if current == "deref" or current==":":
    #     pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
    #     pos, ret = process_deref(file, pos, ret, impl, current_token)
    #     return await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority)
    if current == "class":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "packs into a type class unique to this function")
        if impl.has_retrieved_singleton: current_token.error("safety", "cannot create both a singleton and a class for the same function", reason=impl.has_retrieved_singleton, raason_message="due to")
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        tmp = create_temp()
        var_class = Variable(tmp, impl)
        impl.vars[tmp] = var_class
        impl.has_retrieved_class = current_token
        return await process_statement_operator(file, tokens, impl, pos, [var_class]+[r.private_copy() if r.immutable else r for r in ret], current_operator_priority)

    if current == "singleton":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "packs into a type class unique to this function, while further setting this function as a singleton resource")
        if impl.has_retrieved_class: current_token.error("safety", "cannot create both a singleton (class with a single instance) and a class for the same function", reason=impl.has_retrieved_class, raason_message="due to")
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        tmp = create_temp()
        var_class = Variable(tmp, impl)
        impl.has_retrieved_singleton = current_token
        impl.vars[tmp] = var_class
        return await process_statement_operator(file, tokens, impl, pos, [var_class]+[r.private_copy() if r.immutable else r for r in ret], current_operator_priority)

    if current == "(":
        ret = list()
        while True:
            prev_pos = pos
            pos += 1
            if peek_text(tokens, pos)==")": break
            pos, segment = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
            pos, segment = await process_statement_operator(file, tokens, impl, pos, segment, current_operator_priority=0)
            ret.extend(segment)
            peek = peek_text(tokens, pos)
            if peek==")": break
            if peek==",":
                continue
            get(tokens, prev_pos).error("syntax", "no matching comma or closing parenthesis")
        pos += 1 # skip closing parenthesis
        if peek_text(tokens, pos)=="->" or peek_text(tokens, pos)=="." or peek_text(tokens, pos)=="[" or (peek_text(tokens, pos) in operators and for_call): return pos, ret  # manual left-to-right piping
        return await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
    is_field = False
    while peek_text(tokens, pos+1) == ".":
        if current in impl.vars: break
        pos += 2
        peek = current+"__"+get(tokens, pos).text
        if not any(v.startswith(peek) for v in impl.vars) and peek_text(tokens, pos+1)!="=":
            pos -= 2
            break
        current = peek
        is_field = True
    var = impl.vars.get(current, None)
    #if var:
    #    var = impl.stabilize([var])[0]
    
    if peek_text(tokens, pos+1) == "=":
        var_token = get(tokens, pos)
        if var is not None and var.isprivate: tokens[pos].error("type", "cannot set to immutable class field: '"+pretty_name(current)+"'")
        current_prefix = current+"__"
        pos, ret = await process_statement(file, tokens, pos+2, impl, current_operator_priority=0)
        pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
        previous = [val for varname, val in impl.vars.items() if varname.startswith(current_prefix)]
        if len(previous)!=len(ret) and previous: current_token.error("type", "cannot set an incompatible type on '"+pretty_name(current)+"' previous type was '"+signature_like(previous, impl)+"' and cannot be replaced by '"+signature_like(ret, impl)+"'")
        if previous:
            for p, r in zip(previous, ret): impl.assign(p.name, [r], current_token)
        else: impl.assign(current, ret, current_token)

        if is_lsp and var_token.file.is_main_file: print_lsp_var(var_token, signature_like(ret,impl))

        found: list[Variable] = [] # [val for varname, val in impl.vars.items() if varname.startswith(current_prefix)]
        return pos, found

    if var:
        if is_lsp and get(tokens, pos).file.is_main_file: print_lsp_var(get(tokens, pos), signature_like([var],impl))
        r = var
        if r.stabilized_name() in impl.invalidated: 
            current_token.error("safety", "the variable '"+pretty_name(r.stabilized_name())+"' could have been invalidated", reason=impl.invalidated[r.stabilized_name()], raason_message="due to")

    if var is None:
        # first try to see if this is a group of values
        # if not found but followed by 'is' consider it of type void
        current_prefix = current+"__"
        found = [val for varname, val in impl.vars.items() if varname.startswith(current_prefix)]
        #found = impl.stabilize(found)
        for r in found:
            if r.stabilized_name() in impl.invalidated:
                current_token.error("safety", "the variable '"+pretty_name(r.stabilized_name())+"' could have been invalidated", reason=impl.invalidated[r.stabilized_name()], raason_message="due to")
        if found and is_lsp and get(tokens, pos).file.is_main_file: print_lsp_var(get(tokens, pos), signature_like(found,impl))
        if found or peek_text(tokens, pos+1)=="is": return await process_statement_operator(file, tokens, impl, pos+1, found, current_operator_priority) 

        # if it was a field, don't try type resolution but immediately fail now
        if is_field: 
            field_candidates: list[str] = list()
            max_candidate_common_length = 0
            for varname in impl.vars:
                if varname.startswith("__temp") or "____temp" in varname: continue
                common_length = len(longest_common_prefix([varname, current]))
                if common_length>max_candidate_common_length: 
                    field_candidates = list()
                    max_candidate_common_length = common_length
                if common_length==max_candidate_common_length: 
                    varname = pretty_name(varname)
                    field_candidates.append(varname)
            current_token.error("type", "not found field '"+pretty_name(current)+"'", suggestions=[candidate for candidate in field_candidates]) 
        is_type_resolution = peek_text(tokens, pos)=="type"
        start_call = get(tokens,pos)
        has_literals = False
        if is_type_resolution:
            pos, all_variations = process_linear_type(file, tokens, pos+1, reduce_to_unique_variations=False, show_lsp=True)
            if peek_text(tokens, pos)!="->": 
                method = all_variations
                pos -= 1
            else:
                pos, typevars = await process_statement(file, tokens, pos+1, impl, current_operator_priority, for_call=True)
                method = UnionType(signature_like(typevars, impl)+" ", at=current_token)
                for variation in all_variations.variations:
                    matches = len(variation.rets)==len(typevars)
                    if not matches: continue
                    for rv, rt in zip(variation.rets, typevars):
                        if variation.vars[rv].type!=rt.type:
                            matches = False
                            break
                    if matches: method.variations.append(variation)
        else:
            # then resolve to a call based on type
            pos, method = process_linear_type(file, tokens, pos)
        call_token = get(tokens, pos-1)
        if all(variation.is_literal_of is not None for variation in method.variations):
            if len(method.variations)!=1: call_token.error("type", "cannot have multiple literal type alternatives")
            literal_method = method.variations[0]
            if is_type_resolution:
                pos += 1
                variable = Variable(create_temp(), literal_method)
                if is_lsp and get(tokens,pos-2).file.is_main_file: print_lsp_literal(get(tokens,pos-2), "**retrieve literal type**\n\nRetrieves the type defined to evaluate to "+literal_method.at.text)
                impl.vars[variable.name] = variable
                varsret = [variable]
            elif literal_method.is_literal_of==CSTR_TYPE:
                current = literal_method.at.text
                if is_lsp and current_token.file.is_main_file: print_lsp_literal(call_token, "**literal**\n\ncstr defined to be "+literal_method.at.text)
                tmp: str|None = global_cstr2var.get(current, None)
                variable = Variable(tmp if tmp else create_temp(), CSTR_TYPE)
                if tmp is None: 
                    global_cstr2var[current] = variable.name
                    global_var2cstr[variable.name] = current
                impl.vars[variable.name] = variable
                impl.used_globals.add(variable.name)
                varsret = [variable]
            else:
                variable = Variable(create_temp(), literal_method.is_literal_of)
                if is_lsp and current_token.file.is_main_file: print_lsp_literal(call_token, "**literal**\n\nnumber defined to be "+literal_method.at.text)
                impl.vars[variable.name] = variable
                impl.implementation.extend([
                    variable,
                    CODEWORD_EQUALS,
                    CodeWord(literal_method.at.text),
                    CODEWORD_SEMICOLON
                ])
                varsret = [variable]
        else:
            #if isinstance(method, File): tokens[pos].error("type", "did not resolve completely to a type")
            if peek_text(tokens, pos-1)=="]": 
                vars: list[Variable] = list()
            else: 
                if not is_type_resolution: current_token = get(tokens, pos-1)
                pos, vars = await process_statement(file, tokens, pos, impl, current_operator_priority, for_call=True)
            
            #call_token = current_token
            if start_call.file==call_token.file and start_call.row==call_token.row: 
                call_token = Token(" "*(call_token.col-start_call.col+len(call_token.text)), start_call.file, start_call.row, start_call.col)
            varsret = resolve_call(file, impl, method, vars, call_token)
        return await process_statement_operator(file, tokens, impl, pos, varsret, current_operator_priority)
    return await process_statement_operator(file, tokens, impl, pos+1, [var], current_operator_priority)

async def process_body(file: File, tokens: list[Token], pos: int, impl: ImplementedType, one_line: bool=False):
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
                    pos, rets = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
                    if len(rets)!=1: tokens[prev_pos].error("syntax", "can get the type one value")
                    if not rets[0].type.builtin: tokens[prev_pos].error("syntax", "can get the type of a builtin only")
                    #impl.implementation.append(CodeWord(rets[0].type.builtin))
                    varname = get(tokens, pos).text
                    variable = Variable(varname, rets[0].type)
                    impl.vars[varname] = variable
                    impl.implementation.append(variable)
                elif tok.text=="builtins" and peek_text(tokens, pos+1)==":":
                    pos += 2
                    pos, type = process_type(file_cache["builtins"], tokens, pos)
                    if not isinstance(type, UnionType): get(tokens, pos).error("type", "only builtin types can be unpacked here but found file '"+pretty_name(type.path)+"'")
                    assert isinstance(type, UnionType)
                    variations = [variation for variation in type.variations if variation.builtin]
                    if not variations: get(tokens, pos).error("type", "only builtin types can be unpacked here '"+pretty_name(type.name)+"'",suggestions=list(set(t.name for ut in type.at.file.types for t in ut.variations if t.builtin)))
                    for variation in variations:
                        if type.variations[0].builtin!=variation.builtin:
                            get(tokens, pos).error("type", "more than one types in union '"+pretty_name(type.name)+"'",suggestions=[t.signature() for t in variations])
                    
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
        if name.text=="return" or name.text=="unsafe_return":
            async def process_return(pos: int):
                if is_lsp and name.file.is_main_file: 
                    print_lsp_keyword(name, "**return**\n\nReturns from the current function immediately. This still calls any necessary 'defer' statements. Function returns form a type.")
                if impl.is_parsing_a_defer: name.error("safety", "cannot return within a 'defer'")
                #if impl.fast_return_exception and not impl.nesting and not impl.has_returned_once: 
                #    name.error("safety", "the first return must occur conditionally in recursive functions: 'rec "+impl.name+"'")
                pos, ret = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
                pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
                impl.returns(ret, name, name.text=="return")
                #if not ret: impl.implementation.extend([CodeWord("return"), CODEWORD_SEMICOLON])
                #else: 
                impl.implementation.extend([CODEWORD_GOTO, CodeWord("__temp_return"), CODEWORD_SEMICOLON])
                return pos, ret
            pos, ret = await process_return(pos)
            continue
        # if name.text=="debug_msg":
        #     message = get(tokens, pos)
        #     pos += 1
        #     print(impl.name+":", message.text)
        #     if is_lsp and name.file.is_main_file: 
        #         print_lsp_keyword(name, "prints a debug message once this position is reached during compilation:\n"+message.text)
        #     continue
        # if name.text=="debug_type":
        #     pos, ret = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
        #     pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
        #     print(impl.name+":", signature_like(ret, impl), "|", ", ".join([r.name.replace("__", ".") for r in ret]))
        #     if is_lsp and name.file.is_main_file: 
        #         print_lsp_keyword(name, "prints this inferred type when this position is reached during compilation:\n"+signature_like(ret, impl))
        #     continue
        if name.text=="del":
            if is_lsp and name.file.is_main_file: print_lsp_keyword(name, "invalidates the subsequent value, potentially calling deferred destructors")
            async def process_del(pos: int):
                # if impl.has_returned_once: name.error("safety", "cannot 'del' if you have already returned")
                # if impl.nesting: name.error("safety", "cannot 'del' within conditions or loops")
                pos, ret = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
                pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
                rets = [r.name for r in ret]
                invalidated = set()
                for val in impl.vars.values():
                    varname = val.stabilized_name()
                    if impl.get_assignment(varname, rets):
                        invalidated.add(val)
                        impl.invalidated[varname] = name

                for invalid_type in impl.invalidate_types_on_defer: # TODO: track defers for each variable to be deleted
                    for varname, val in impl.vars.items():
                        if val.type.invalidated_by == invalid_type and not varname.endswith("__unsafe_ptr"):
                            impl.invalidated[val.stabilized_name()] = name

                to_remove = list()
                for defer in impl.defers:
                    if not any(v in defer for v in invalidated): continue
                    impl.implementation.extend(defer)
                    to_remove.append(defer)
                if not to_remove:
                    name.error("safety", "does nothing because it does not call any active 'defer' for '"+signature_like(ret, impl)+"'")
                for v in invalidated:
                    if v.name in impl.args and not v.immutable:
                        impl.implementation.extend([
                            v, 
                            CODEWORD_EQUALS,
                            CodeWord("0"),
                            CODEWORD_SEMICOLON
                        ])
                for defer in to_remove: impl.defers.remove(defer)
                ret = []
                return pos, ret
            pos, ret = await process_del(pos)
            continue
        if name.text=="defer":
            if is_lsp and name.file.is_main_file: print_lsp_definition(name, "defines code to run when all its content variables would no longer be used afterwards")
            async def process_defer(pos: int):
                if impl.has_returned_once: name.error("safety", "cannot declare a 'defer' after the first return")
                if impl.is_parsing_a_defer: name.error("safety", "cannot declare a 'defer' within another")
                if impl.nesting: name.error("safety", "cannot 'defer' within conditions or loops")
                impl.is_parsing_a_defer = True
                prev_implementation = impl.implementation
                impl.implementation = list()
                pos = await process_body(file, tokens, pos, impl, one_line=False)
                impl.defers.append(impl.implementation)
                impl.implementation = prev_implementation
                impl.is_parsing_a_defer = False
                return pos
            pos = await process_defer(pos)
            continue
        if name.text=="continue" or name.text=="break":
            if not impl.nesting or not any(nest=="while" for nest in impl.nesting): name.error("syntax", "need to be in a loop to '"+name.text+"'")
            if is_lsp and name.file.is_main_file:
                if name.text=="continue": print_lsp_keyword(name, "continues immediately from the next loop iteration by skipping the rest of the current iteration")
                else: print_lsp_keyword(name, "stops the current loop immediately")
            impl.implementation.extend([CodeWord(name.text), CODEWORD_SEMICOLON])
            continue
        if name.text=="while":
            if is_lsp and name.file.is_main_file: print_lsp_keyword(name, "**while**\n\nLoop that runs while the condition is true.")
            impl.nesting.append("while")
            if_pos = pos-1
            impl.implementation.extend([
                CodeWord("while"),
                CODEWORD_LPAR,
                CodeWord("1"),
                CODEWORD_RPAR,
                CODEWORD_LBRACKET,
            ])
            pos, ret = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
            impl.accumulating_defers.append(dict())
            if len(ret)!=1: name.error("type", "conditions can only evaluate to 'bool' but found '"+signature_like(ret)+"'")
            if ret[0].type==TRUE_TYPE:
                if peek_text(tokens, pos)==START_TOKEN: pos = await process_body(file, tokens, pos, impl)
                else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)    
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
                    CODEWORD_IF, 
                    CODEWORD_LPAR,
                    CodeWord("!"),
                    ret[0],
                    CODEWORD_RPAR,
                    CODEWORD_LBRACKET,
                    CodeWord("break"),
                    CODEWORD_SEMICOLON,
                    CODEWORD_RBRACKET,
                ])
                if peek_text(tokens, pos)==START_TOKEN: pos = await process_body(file, tokens, pos, impl)
                else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)
            
            for should_invalid in impl.accumulating_defers[-1]:
                if impl.invalidated.get(should_invalid) is None:
                    impl.accumulating_defers[-1][should_invalid].error("safety", "this creates a leaking resource '"+pretty_name(should_invalid)+"'", reason=name, raason_message="due to being part of a loop", suggestions=["release the resource with 'del'", "initialize the resource before the loop"])

            impl.implementation.append(CODEWORD_RBRACKET)
            impl.nesting.pop()
            impl.accumulating_defers.pop()
            continue
        if name.text=="if":
            if_pos = pos-1
            if is_lsp and name.file.is_main_file: print_lsp_keyword(name, "**if**\n\nStart a conditional statement and run a code block if it is true.")
            pos, ret = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
            if len(ret)!=1: name.error("type", "conditions can only evaluate to 'bool' but found '"+signature_like(ret)+"'")
            if ret[0].type==TRUE_TYPE:
                if peek_text(tokens, pos)==START_TOKEN: pos = await process_body(file, tokens, pos, impl)
                else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)
                if peek_text(tokens, pos)=="else":
                    if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "**else**\n\nAlternative to conditional statement.")
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
                    if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "**else**\n\nAlternative to conditional statement.")
                    if peek_text(tokens, pos)==START_TOKEN: pos = await process_body(file, tokens, pos, impl)
                    else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)
                continue
            if ret[0].type!=BOOL_TYPE: name.error("type", "conditions can only evaluate to 'true', 'false', or 'bool' (the first two refer to compile-time known literals)")
            impl.implementation.extend([
                CODEWORD_IF, 
                CODEWORD_LPAR,
                ret[0],
                CODEWORD_RPAR,
                CODEWORD_LBRACKET
            ])
            previous_vars = {k: v for k, v in impl.vars.items()}
            impl.nesting.append("if")
            if peek_text(tokens, pos)==START_TOKEN: pos = await process_body(file, tokens, pos, impl)
            else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)
            impl.nesting.pop()
            impl.implementation.append(CODEWORD_RBRACKET)
            if peek_text(tokens, pos)=="else":
                if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "**else**\n\nAlternative to conditional statement.")
                diff_vars_if = {k: v for k, v in impl.vars.items() if k not in previous_vars}
                impl.vars = previous_vars
                previous_vars = {k: v for k, v in impl.vars.items()}
                impl.implementation.extend([CodeWord("else"), CODEWORD_LBRACKET])
                pos += 1
                impl.nesting.append("if")
                if peek_text(tokens, pos)==START_TOKEN: pos = await process_body(file, tokens, pos, impl)
                else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)
                impl.nesting.pop()
                impl.implementation.append(CODEWORD_RBRACKET)
                for k, v in impl.vars.items():
                    var = diff_vars_if.get(k, None)
                    if var is None: continue
                    if var.type!=v.type:
                        tokens[if_pos].error("safety", "the conditional blocks starting here declare a variable with different types '"+k+"'")
                    if var.isprivate!=v.isprivate:
                        tokens[if_pos].error("safety", "the conditional blocks starting here declare a variable but assume differently whether it is packed in a class '"+k+"' - perhaps try to 'const' it first")
                    if var.immutable!=v.immutable:
                        tokens[if_pos].error("safety", "the conditional blocks starting here declare a variable but assume differently whether it is immutable '"+k+"'") 
                for k, v in diff_vars_if.items():
                    var = impl.vars.get(k, None)
                    if var is None:
                        impl.vars[k] = v
                        continue
                    if var.type!=v.type:
                        tokens[if_pos].error("safety", "the conditional blocks starting here have a variable with different types '"+k+"'")
                    if var.isprivate!=v.isprivate:
                        tokens[if_pos].error("safety", "the conditional blocks starting here have a variable but assume differently whether it is packed in a class '"+k+"' - perhaps try to 'const' it first")
                    if var.immutable!=v.immutable:
                        tokens[if_pos].error("safety", "the conditional blocks starting here have a variable but assume differently whether it is immutable '"+k+"'") 
            continue
        pos, _ = await process_statement(file, tokens, pos-1, impl, 0)
    return pos

def process_repo(file: File, tokens: list[Token], pos: int):
    pos += 1
    url_token = get(tokens, pos)
    if not url_token.is_string(): url_token.error("syntax", "repo expects a cstr repo path or url but got '"+url_token.text+"'")
    if is_lsp and url_token.file.is_main_file: print_lsp_string(url_token)
    pos += 1
    if get(tokens, pos).text!="as": tokens[pos].error("syntax", "repo declaration expects 'as' here")
    if is_lsp and get(tokens, pos).file.is_main_file: print_lsp_keyword(get(tokens, pos), "declares a name")
    pos += 1
    local_token = get(tokens, pos)
    if not local_token.is_string(): url_token.error("syntax", "repo expects a cstr repo alias after 'as' but got '"+url_token.text+"'")
    if is_lsp and local_token.file.is_main_file: print_lsp_string(local_token)
    pos += 1
    symbol = local_token.text[1:len(local_token.text)-1]
    path = url_token.text[1:len(url_token.text)-1]
    if repositories.get(symbol)==path: return pos
    for repo in repositories:
        if repo.startswith(symbol) or symbol.startswith(repo): 
            local_token.error("syntax", "cannot have overlap between new and old repos '"+symbol+"' and '"+repo+"'")
    if not file.is_main_file:
        if symbol not in repositories:
            tokens[pos-4].error("safety", "for safety, repos can only be defined for the first time in the main file\nFile '"+file.path+"' requires that you add this repo declaration to your main file")
        elif path!= repositories[symbol]:
            tokens[pos-4].error("safety",  "repo '"+symbol+"' has a declaration here that conflicts with a previous one '"+path+"' and '"+repositories[symbol]+"'")
    repositories[symbol] = path
    return pos

async def process_import(file: File, tokens: list[Token], pos: int, is_local: bool):
    pos += 1
    name_token = get(tokens, pos)
    if not name_token.is_string(): 
        namespace = file.namespaces.get(name_token.text, None)
        if namespace is None: tokens[pos].error("syntax", "import expects a cstr filename or a known namespace but got '"+name_token.text+"'")
        assert isinstance(namespace, File)
        imported: File|UnionType = namespace
    else: 
        if is_lsp and name_token.file.is_main_file: print_lsp_string(name_token)
        name = name_token.text
        name = name[1:len(name)-1]
        prev_name = name
        name = await resolve_name(name, name_token)
        if not os.path.exists(name) and name not in file_cache: name_token.error("import", "non-existent file '"+name+"'")
        if os.path.isdir(name) and name not in file_cache: name_token.error("import", "expecting file but got directory '"+name+"'")
        if name.endswith(".h") or name.endswith(".c"):
            for f in externals:
                if f.path==name: return pos+1, f
            new_file = File(name)
            new_file.is_extern_file = True
            externals.append(new_file)
            return pos+1, new_file
        #if not name.endswith(".s") and not name.endswith(".smoll"): name_token.error("safety", "expecting a .s or .smoll (for smoll source code) or .h or .c (for C dependent source code) file extension but got '"+name+"'")
        imported = await load(name, err_token=name_token)
        name = prev_name
        imported.path = name
    pos += 1
    if peek_text(tokens, pos)==":":
        if not isinstance(imported, File): get(tokens, pos).error("import", "expecting file before ':' but got type '"+name+"'")
        assert isinstance(imported, File)
        pos, imported = process_type(imported, tokens, pos - 1) # go back and process properly
    as_mode = peek_text(tokens, pos)=="as"
    if as_mode:
        if is_lsp and get(tokens, pos).file.is_main_file: print_lsp_keyword(get(tokens, pos), "declares a name")
        pos += 1
        name_token = get(tokens, pos)
        name = name_token.text
        pos += 1
    if isinstance(imported, UnionType):
        if not as_mode: name = imported.name
        if name in file.types: name_token.error("import", "cannot overwrite type '"+name+"'")
        file.types[name] = imported
        if is_local: 
            for variation in imported.variations: file.localdefs.add(variation)
        return pos, imported
    assert isinstance(imported, File)
    if as_mode:
        if name in file.namespaces: name_token.error("import", "cannot overwrite existing namespace '"+name+"'")
        file.namespaces[name] = imported
        if is_local: file.localdefs.add(imported)
        return pos, imported
    for type_name, type_value in imported.types.items():
        existing = file.types.get(type_name, None)
        if existing is not None:
            new_type = UnionType(type_name, at=name_token)
            new_type.variations.extend(existing.variations)
            new_type.variations.extend(type_value.variations)
            new_type.variations = list(set(new_type.variations))
            type_value = new_type
        if is_local:
            for variation in type_value.variations: file.localdefs.add(variation)
        file.types[type_name] = type_value
    for namespace_name, namespace_value in imported.namespaces.items():
        existing_namespace = file.namespaces.get(namespace_name, None)
        if existing_namespace is not None and existing_namespace!=namespace_value: name_token.error("import", "cannot overwrite existing type '"+name+"'")
        if is_local: file.localdefs.add(namespace_value)
        file.namespaces[namespace_name] = namespace_value
    return pos, imported

def _gather_def(file: File, tokens: list[Token], pos: int, fast_return_exception: bool, is_local: bool):
    start_token = get(tokens, pos)
    pos += 1
    name = get(tokens, pos).text
    abstract_arg_types: list[list[ImplementedType]] = list()
    abstract_arg_names: list[str] = list()
    abstract_arg_immutability: list[int] = list()
    abstract_arg_convert_to_ptr: list[bool] = list()
    pos += 1
    if get(tokens, pos).text!="(": tokens[pos].error("syntax", "expecting opening parenthesis")
    pos += 1
    effect_names: list[str] = list()
    while peek_text(tokens, pos)!=")":
        arg_immutability = 1
        is_effect = False
        if get(tokens, pos).text=="effect":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_decorator(get(tokens,pos), "**effect argument**\nDeclares that the provided argument should be autonomously gathered from the calling context's variables.")
            if len(effect_names)<len(abstract_arg_names): get(tokens,pos).error("type", "effects can only be declared as the first arguments")
            pos += 1
            is_effect = True
        if get(tokens, pos).text=="mut":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_decorator(get(tokens,pos), "**mutable argument**\nChanges to it overwrite values at the calling site (overwritten values must also be mutable).")
            pos += 1
            arg_immutability = 0
        elif get(tokens, pos).text=="const":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_decorator(get(tokens,pos), "**const argument**\nNot only is it immutable, but also guarantees that it will allow no attached memory or other resource modifications.")
            pos += 1
            arg_immutability = -1
        if peek_text(tokens, pos)=="ptr":
            tokens[pos].error("syntax", "pointers should follow their attached data type. Perhaps you meant 'any ptr'?")
        if peek_text(tokens, pos)=="any" and peek_text(tokens, pos+1)=="ptr":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "**any type**\n\nThis marks a generic type, which depends on what is passed as arguments later. HOWEVER, this function's implementation is determined now.")
            pos += 1
            arg_type = smol_namespace.types["any"]
        else: pos, arg_type = process_linear_type(file, tokens, pos, True)
        if peek_text(tokens, pos)=="ptr":
            if is_lsp and get(tokens,pos).file.is_main_file:
                at = get(tokens,pos)
                print("---")
                # position in processed file
                print("function")
                print(os.path.abspath(at.file.path))
                print(at.row)
                print(at.col)
                print(len(at.text))
                # defined at
                print(os.path.abspath(at.file.path))
                print(at.row)
                print(at.col)
                # message (may span multiple lines))
                print("```rust\n"+POINTER_TYPE.signature()+"\n"+" from compiler definitions\n```")
            pos += 1
            abstract_arg_convert_to_ptr.append(True)
        else: abstract_arg_convert_to_ptr.append(False)
        arg_name = peek_text(tokens, pos)
        if is_effect: effect_names.append(arg_name)
        if arg_name==")" or arg_name==",": arg_name = "__temp_anon"+str(len(abstract_arg_types)) # reproducible argument names for is_same checks
        else: pos += 1
        arg_type_variations: list[ImplementedType] = find_unique_variations(arg_type.variations)
        abstract_arg_types.append(arg_type_variations)
        #if arg_immutability==-1 and all(variation.builtin for variation in arg_type.variations):
        #    tokens[pos].error("type", "all argument parameters are builtin types, so 'const' is redundant")
        if POINTER_TYPE in arg_type.variations: tokens[pos].error("syntax", "'ptr' should follow after its attached data type. Perhaps you meant 'any ptr'?")
        abstract_arg_names.append(arg_name)
        abstract_arg_immutability.append(arg_immutability)
        next_symbol = peek_text(tokens, pos)
        if next_symbol==")": break
        if next_symbol!=",": tokens[pos].error("syntax", "expecting comma between arguments")
        pos += 1 # skip the comma
    if get(tokens, pos).text!=")": tokens[pos].error("syntax", "expecting closing parenthesis")
    pos += 1
    return pos, name, abstract_arg_types, abstract_arg_names, abstract_arg_immutability, abstract_arg_convert_to_ptr, effect_names

async def process_def(file: File, tokens: list[Token], pos: int, fast_return_exception: bool, is_local: bool):
    start_token = get(tokens, pos)
    pos, name, abstract_arg_types, abstract_arg_names, abstract_arg_immutability, abstract_arg_convert_to_ptr, effect_names = _gather_def(file, tokens, pos, fast_return_exception, is_local)
    starting_pos = pos
    greatest_pos = None
    candidates: list[ImplementedType] = list()
    for arg_types in itertools.product(*abstract_arg_types):
        pos = starting_pos
        impl = ImplementedType(name, at=start_token)
        impl.effect_names = effect_names
        if is_local: file.localdefs.add(impl)
        impl.fast_return_exception = fast_return_exception
        if fast_return_exception: # if recursive, that is
            impl.needs_failure_mode = True
        try:
            for arg_name, arg_type, immutable, convert_to_ptr in zip(abstract_arg_names, arg_types, abstract_arg_immutability, abstract_arg_convert_to_ptr):
                if convert_to_ptr:
                    impl.vars[arg_name] = Variable(arg_name, POINTER_TYPE, immutable!=0)
                    impl.args.append(arg_name)
                    impl.set_pointer_type(impl.vars[arg_name], arg_type)
                    continue
                elif arg_type.builtin:
                    impl.vars[arg_name] = Variable(arg_name, arg_type, immutable!=0)
                    impl.args.append(arg_name)
                    if arg_type==POINTER_TYPE: impl.set_pointer_type(impl.vars[arg_name], ANY_TYPE)
                    continue
                prefix_len = len(longest_common_prefix(arg_type.rets))
                for ret in arg_type.rets:
                    ret_name = arg_name+"__"+ret[prefix_len:]  if len(arg_type.rets)>1 else arg_name
                    impl.vars[ret_name] = arg_type.vars[ret].renamed_copy(ret_name)
                    if immutable==0: impl.vars[ret_name] = impl.vars[ret_name].mutable_copy(tokens[pos])
                    elif immutable==-1: impl.vars[ret_name] = impl.vars[ret_name].immutable_copy()
                    impl.args.append(ret_name)
                    if impl.vars[ret_name].type==POINTER_TYPE:
                        found_ptr_type = arg_type.get_pointer_type(arg_type.vars[ret])
                        if found_ptr_type is not None and found_ptr_type!=ANY_TYPE: impl.set_pointer_type(impl.vars[ret_name], found_ptr_type)
                        #else:
                        #    dep = arg_type.follow_pointer_dependency(arg_type.vars[ret])
                        #    if dep is not None: impl.set_pointer_depedency(dep.renamed_copy(arg_name+"__"+dep.name[prefix_len:]))
            found_type: UnionType|None = file.types.get(impl.name)
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
                    if found_type.variations[already_parsed].at!=impl.at: 
                        candidates.append(found_type.variations[already_parsed])
                        continue
            try:
                if peek_text(tokens, pos) in ["def", "repo", "import", "local"]:
                    impl.rets = [arg for arg in impl.args]
                else: 
                    pos = await process_body(file, tokens, pos, impl)
            except FastReturnException: 
                assert fast_return_exception
            #if not impl.force_not_inline and fast_return_exception: continue # register only forcefully RECURSIVE variations
            #make a union type to store the implementation if one does not already exist
            if found_type is None:
                found_type = UnionType(impl.name, at=start_token)
                file.types[impl.name] = found_type
            if already_parsed is not None:
                for a in impl.__dict__:
                    if a not in ["monomorphic_name", "force_not_inline"]:
                        setattr(found_type.variations[already_parsed], a, getattr(impl, a))
            else: found_type.variations.append(impl)
            greatest_pos = pos
        except CompfailException: pass
    if name not in file.types or greatest_pos is None: start_token.error("safety", "no valid variations of '"+name+"'"+(" given the same name and arguments" if candidates else ""), suggestions=[candidate.signature()+(" defined in "+candidate.at.file.path if candidate.at else " from compiler definitions") for candidate in candidates])
    if greatest_pos is not None:
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
    union_type: UnionType = UnionType(union_name, at=start_token)
    pos, linear_type = process_linear_type(file, tokens, pos, show_lsp=True, reduce_to_unique_variations=False)
    union_type.variations.extend(linear_type.variations)
    # while True:
    #     pos, variation = process_type(file, tokens, pos)
    #     if not isinstance(variation, UnionType): break
    #     union_type.variations.extend(variation.variations)
    #     if peek_text(tokens, pos)!="|": break
    #     if is_lsp and get(tokens, pos).file.is_main_file: print_lsp_keyword(get(tokens, pos), "either of the types")
    #     pos += 1
    file.types[union_name] = union_type
    return pos

async def process(file: File, tokens: list[Token], pos: int) -> File:
    # this schema assumes that imports and repos happen before defs
    # first pass: process functions only up to their first return
    has_made_def = False
    first_def_tok = None
    i = 0
    while i<len(tokens):
        try:
            tok = tokens[i]
            is_local = tok.text=="local"
            if is_local:
                if is_lsp and tok.file.is_main_file: 
                    print_lsp_definition(tok, "**local declaration**\n\nThe next import or definition has local visibility (does not affect files importing this file).")
                i += 1
                tok = get(tokens, i)
            if tok.text=="def" or tok.text=="rec":
                if is_lsp and tok.file.is_main_file: 
                    if tok.text=="def": print_lsp_definition(tok, "**definition**\n\nDefines a function that takes into account all previous definitions. Its return forms a type.")
                    if tok.text=="rec": print_lsp_definition(tok, "**recursive definition**\n\nDefines a recursive function that can take into account later definitions in this file.")
                
                has_made_def = True
                first_def_tok = tok
                if peek_text(tokens, i+2)=="=": 
                    if tok.text=="rec": tok.error("type", "cannot define a type union with 'rec'")
                    i = process_union(file, tokens, i)
                else: 
                    pos_end = i
                    depth = 0
                    followed_by_body = get_skip(tokens, pos_end).text==START_TOKEN or tok.text=="rec"
                    if followed_by_body:
                        while pos_end<len(tokens):
                            txt = get_skip(tokens, pos_end).text
                            if txt==START_TOKEN: depth += 1
                            if txt==END_TOKEN: 
                                depth -= 1
                                if depth==0: break
                            pos_end += 1
                    i = await process_def(file, tokens, i, fast_return_exception=tok.text=="rec", is_local=is_local)
                    if followed_by_body: i = pos_end+1
            elif tok.text=="import": 
                if has_made_def: tok.error("safety", "can only import before the file's first definition", reason=first_def_tok, raason_message="first definition at")
                defname = get(tokens, i+1)
                i, imported = await process_import(file, tokens, i, is_local=is_local)
                if is_lsp and tok.file.is_main_file:
                    print_lsp_keyword(tok, "**import**\n\nimports a namespace or function")
                    print("---")
                    # position in processed file
                    print("namespace") # type of token: namespace, string, keyword, function, variable
                    print(os.path.abspath(defname.file.path))
                    print(defname.row)
                    print(defname.col)
                    endtok = get(tokens,i-1)
                    assert endtok.row==defname.row
                    print(endtok.col-defname.col+len(endtok.text)) # token length
                    # defined at
                    if isinstance(imported, File):
                        print(os.path.abspath(imported.path))
                        print(1)
                        print(1)
                    else:
                        print(os.path.abspath(imported.at.file.path))
                        print(imported.at.row)
                        print(imported.at.col)
                    # message (may span multiple lines))
                    print("imported path")
            elif tok.text=="repo":
                if is_local: tok.error("syntax", "cannot declare a repo as 'local'")
                if has_made_def: tok.error("safety", "can declare repos before the file's first definition", reason=first_def_tok, raason_message="first definition at")
                i = process_repo(file, tokens, i)
                if is_lsp and tok.file.is_main_file:
                    print_lsp_keyword(tok, "defines an online resource to be accessed as if it were a local path prefix")
            else:
                tok.error("syntax", "expecting 'def', 'repo', or 'import' but found '"+str(tok.text)+"'")
        except FatalException:
            i += 1
            while True:
                i += 1
                if i>len(tokens)-1: break
                tok = tokens[i]
                if tok.text=="import" or (tok.text=="local" and i<len(tokens)-1 and (tokens[i+1].text=="def" or tokens[i+1].text=="import")) or tok.text=="def" or tok.text=="repo":
                    break
            if i>len(tokens)-1: break
    # second pass: process the rest of functions (skip other syntax stuff)
    i = 0
    while i<len(tokens):
        tok = tokens[i]
        if tok.text=="rec":
            try:
                i = await process_def(file, tokens, i, fast_return_exception=False, is_local=False) # it will copy data into the existing type, so no local declaration detection is needed
            except FatalException:
                i += 1
        else: i += 1

    # now that we have processed everything, remove all localdefs
    file.namespaces = {k:v for k,v in file.namespaces.items() if v not in file.localdefs}
    new_types = dict()
    for k,v in file.types.items():
        u = UnionType(v.name, at=v.at)
        for variation in v.variations:
            if variation not in file.localdefs:
                u.variations.append(variation)
        if u.variations: new_types[k] = u
    file.types = new_types
    if debug_mode:
        for k,v in file.types.items():
            for variation in v.variations:
                print(variation.signature())
    return file

async def resolve_name(path: str, at_token: Token|None) -> str:
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
            await download_with_progress(path, symbol, "download     "+os.path.basename(symbol).ljust(40))
        except Exception as e: 
            if at_token: at_token.error("download", str(e))
            print("[✗] failed:")
            print(str(e))
            errexit()
    else: symbol = path
    return symbol

def _load(path: str, is_main_file: bool=False, err_token:Token|None=None) -> tuple[File, list[Token]]:
    file = File(path)
    file.is_main_file = is_main_file
    tokens = list()
    nesting_levels = [0]
    row = 0
    has_tabs = False
    has_spaces = False
    try:
        with open(path, "r") as f:
            for line in f:
                row += 1
                count_spaces = len(line)
                line = line.strip(" \t")
                count_spaces -= len(line)
                if not len(line) or line.startswith("//") or line.startswith("#") or line=="\n": continue
                prev_nesting_level = nesting_levels[len(nesting_levels)-1]
                has_space = " " in line[:(count_spaces+1)] 
                has_tab = "\t" in line[:(count_spaces+1)]
                if has_tab:
                    if has_space: 
                        Token(START_TOKEN, file, row, count_spaces+1).error("syntax", "you have mixed tabs and spaces in this line's indentation")
                    if has_spaces: 
                        Token(START_TOKEN, file, row, count_spaces+1).error("syntax", "you are using tabs for this line's indentation, but previous lines used spaces")
                    has_tabs = True
                elif has_space:
                    if has_tabs: 
                        Token(START_TOKEN, file, row, count_spaces+1).error("syntax", "you are using spaces for this line's indentation, but previous lines used tabs")
                    has_spaces = True
                while count_spaces < prev_nesting_level:
                    tokens.append(Token(END_TOKEN, file, row, prev_nesting_level+1))
                    error_nesting_level = prev_nesting_level
                    nesting_levels.pop() # pop from back
                    prev_nesting_level = nesting_levels[len(nesting_levels)-1]
                    if count_spaces > prev_nesting_level: Token(" "*count_spaces, file, row, 1).error("syntax", f"misaligned indentation - expecting this line to start {error_nesting_level} {'tab' if has_tabs else 'space'}{'s' if error_nesting_level!=1 else 0} deep but it starts at {prev_nesting_level+1}")
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
                    elif c=="#" or (c=="/" and col<len(line)-1 and line[col+1]=="/"):
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
    except Exception as err: 
        if is_lsp:
            if err_token: err_token.error("syntax", str(err))
            if file.is_main_file:
                print("---")
                # position in processed file
                print("function")
                print(os.path.abspath(file.path))
                print(row+1)
                print(1)
                print(3)
                # defined at
                print(os.path.abspath(file.path))
                print(row+1)
                print(1)
                # message (may span multiple lines))
                print(str(err))
            raise FatalException
        print(f"[{RED}✗{RESET}] {PURPLE}file read error{RESET} {err}")
        location = f"{path} line {row+1}"
        print(f"{RED}at{RESET} {location}")
        errexit()

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

async def download_with_progress(url: str, filepath: str, message: str):
    if is_pyodide:
        import asyncio
        from pyodide.http import pyfetch
        import base64, os
        cached = _js_cache_get(url)
        if cached is not None:
            print(f"[{YELLOW}={RESET}] {message} (cached)")
            data = base64.b64decode(cached)
            os.makedirs(os.path.dirname(filepath), exist_ok=True)
            with open(filepath, "wb") as f: f.write(data)
            return
        print(f"[{YELLOW}+{RESET}] {message} ...")
        response = await pyfetch(url)
        if response.status != 200: raise RuntimeError( f"Failed to fetch {url}: HTTP {response.status}")
        data = await response.bytes()

        _js_cache_set(url, base64.b64encode(data).decode())
        os.makedirs(os.path.dirname(filepath), exist_ok=True)
        with open(filepath, "wb") as f: f.write(data)
        return
    filename = os.path.basename(filepath)
    fallback: bool = False
    try:
        response = urllib.request.urlopen(url)
        total_size = int(response.getheader('Content-Length').strip())
    except Exception as e: fallback = True
    if fallback:
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
file_cache_complete: set[str] = set()

async def load(path, is_main_file=False, err_token=None):
    file = file_cache.get(path, None)
    if file is None:
        file, processed_tokens = _load(path, is_main_file, err_token)
        file_cache[path] = file
        await process(file, processed_tokens, 0)
        file_cache_complete.add(path)
    elif path=="builtins": pass
    elif path not in file_cache_complete:
        # genuine circular import, file is still being processed
        err_token.error("import", "circular import detected for '"+path+"'")
    return file

POINTER_TYPE = ImplementedType("ptr", "char*", memory_size=8)
POINTER_TYPE.vars[POINTER_TYPE.rets[0]].immutable = False
CSTR_TYPE = ImplementedType("cstr", "const char*", memory_size=8)
CSTR_TYPE.doc.append("constant string")
BOOL_TYPE = ImplementedType("bool", "char", memory_size=1)
BOOL_TYPE.doc.append("boolean value")
BOOL_TYPE.doc.append("Can only be `true` or `false`.")
INT_TYPE = ImplementedType("int", "int64_t", memory_size=8)
INT_TYPE.doc.append("a signed integer value")
INT_TYPE.doc.append("Represents values in the range `2^-63 to 2^63-1`.")
FLOAT_TYPE = ImplementedType("float", "double", memory_size=8)
UINT_TYPE = ImplementedType("nat", "uint64_t", memory_size=8)
UINT_TYPE.doc.append("an unsigned integer value")
UINT_TYPE.doc.append("Represents values in the range `0 to 2^64-1`.")
UINT32_TYPE = ImplementedType("nat32", "uint32_t", memory_size=4)
UINT32_TYPE.doc.append("a 32-bit unsigned integer value")
UINT32_TYPE.doc.append("Represents values in the range `0 to 2^32-1`.")
UINT16_TYPE = ImplementedType("nat16", "uint16_t", memory_size=2)
UINT16_TYPE.doc.append("a 16-bit unsigned integer value")
UINT16_TYPE.doc.append("Represents values in the range `0 to 2^16-1`.")
UINT8_TYPE = ImplementedType("nat8", "uint8_t", memory_size=1)
UINT8_TYPE.doc.append("a 8-bit unsigned integer value")
UINT8_TYPE.doc.append("Represents values in the range `0 to 255`.")
CHAR_TYPE = ImplementedType("char", "char", memory_size=1)
CHAR_TYPE.doc.append("a character")
CHAR_TYPE.doc.append("Represents characters in the numeric range `0 to 255`.")
FALSE_TYPE = ImplementedType("false", "int")
FALSE_TYPE._memory_size = 0
TRUE_TYPE = ImplementedType("true", "int")
TRUE_TYPE._memory_size = 0
FAIL_TYPE = ImplementedType("skip")
FAIL_TYPE.doc.append("skip definition and verify branchless code")
FAIL_TYPE.doc.append("Branchless code refers loops or conditions that are eliminated during compilation as either always true or always false, based on type analysis and data analysis. This is meaningful for compiling different versions of functions based on specific conditions occuring. This function is hard-wired to create an error if it is called withing a condition or loop that has not been eliminated this way. Otherwise, it skips the current function definition.")
SUCCESS_TYPE = ImplementedType("branchless")
SUCCESS_TYPE.doc.append("verify branchless code")
SUCCESS_TYPE.doc.append("Branchless code refers loops or conditions that are eliminated during compilation as either always true or always false, based on type analysis and data analysis. This is meaningful for compiling different versions of functions based on specific conditions occuring. This function is hard-wired to create an error if it is called withing a condition or loop that has not been eliminated this way.")
NOCATCH_TYPE = ImplementedType("nocatch")
NOCATCH_TYPE.doc.append("verify no errors up to now")
NOCATCH_TYPE.doc.append("Creates a compiler error if it is possible to have seen an error outside a 'try' statement that would have terminate this function before this point.")
DEBUG_TYPE = ImplementedType("print")
DEBUG_TYPE.doc.append("prints a type during compilation")
DEBUG_TYPE.doc.append("This runs even if subsequent code fails.")
SIZEOF_TYPE = ImplementedType("size")
SIZEOF_TYPE.doc.append("memory size")
SIZEOF_TYPE.doc.append("Retrieves the natural number storage size of given values.")
SIZEOF_TYPE.vars["size"] = Variable("size", UINT_TYPE)
SIZEOF_TYPE.rets.append("size")
ANY_TYPE = ImplementedType("any")
ANY_TYPE.doc.append("any type")
ANY_TYPE.doc.append("Represents a generic for buffers and pointers for type-independent code that can be matched to a concrete type later.")
CAUGHT_TYPE = ImplementedType("catch", "int64_t", memory_size=8)
CAUGHT_TYPE.doc.append("catch the error code intercepted by 'try'")
CAUGHT_TYPE.doc.append("Also catches the error codes produced by defers triggered by 'del'.")
CAUGHT_TYPE.doc.append("Fails if there is no error code, otherwise returns and cleans the last error code.")
# FAIL_TYPE.vars["message"] = CSTR_TYPE
# FAIL_TYPE.args.append("message")

RESOLVE_LITERAL_TYPE = ImplementedType("literal")

SAME_CONTENTS_TYPE = ImplementedType("attach_type")
SAME_CONTENTS_TYPE.vars["to"] = Variable("to", POINTER_TYPE)
SAME_CONTENTS_TYPE.vars["from"] = Variable("from", POINTER_TYPE)
SAME_CONTENTS_TYPE.rets.append("to")
SAME_CONTENTS_TYPE.args.extend(["to", "from"])
SAME_CONTENTS_TYPE.set_pointer_type(SAME_CONTENTS_TYPE.vars["from"], ANY_TYPE)
SAME_CONTENTS_TYPE.set_pointer_depedency(SAME_CONTENTS_TYPE.vars["to"], SAME_CONTENTS_TYPE.vars["from"])
SAME_CONTENTS_TYPE.doc.append("pointer references the same type as another")
SAME_CONTENTS_TYPE.doc.append("Forces the first pointer to reference the same type of object as another. The function returns the first one to enable chain notation.")

SAME_CONTENTS_TYPE_CSTR = ImplementedType("attach_type")
SAME_CONTENTS_TYPE_CSTR.vars["to"] = Variable("to", POINTER_TYPE)
SAME_CONTENTS_TYPE_CSTR.vars["from"] = Variable("from", CSTR_TYPE)
SAME_CONTENTS_TYPE_CSTR.rets.append("to")
SAME_CONTENTS_TYPE_CSTR.args.extend(["to", "from"])
SAME_CONTENTS_TYPE_CSTR.set_pointer_type(SAME_CONTENTS_TYPE_CSTR.vars["to"], CHAR_TYPE)
SAME_CONTENTS_TYPE_CSTR.doc.append("pointer references the same type as another")
SAME_CONTENTS_TYPE_CSTR.doc.append("Forces the first pointer to reference a buffer of characters.")

smol_namespace = File("builtins")
builtin_token = Token("builtins", smol_namespace, 1, 1)
smol_namespace.types["cstr"] = UnionType("cstr", at=builtin_token).append(CSTR_TYPE)
smol_namespace.types["int"] = UnionType("int", at=builtin_token).append(INT_TYPE)
smol_namespace.types["nat"] = UnionType("nat", at=builtin_token).append(UINT_TYPE)
smol_namespace.types["nat32"] = UnionType("nat32", at=builtin_token).append(UINT32_TYPE)
smol_namespace.types["nat16"] = UnionType("nat16", at=builtin_token).append(UINT16_TYPE)
smol_namespace.types["nat8"] = UnionType("nat8", at=builtin_token).append(UINT8_TYPE)
smol_namespace.types["float"] = UnionType("float", at=builtin_token).append(FLOAT_TYPE)
smol_namespace.types["bool"] = UnionType("bool", at=builtin_token).append(BOOL_TYPE)
smol_namespace.types["err"] = UnionType("err", at=builtin_token).append(ImplementedType("err", "int"))
smol_namespace.types["blank"] = UnionType("blank", at=builtin_token).append(ImplementedType("void"))
smol_namespace.types["char"] = UnionType("char", at=builtin_token).append(CHAR_TYPE)
smol_namespace.types["any"] = UnionType("any", at=builtin_token).append(ANY_TYPE)

fixed_namespace = File("compiler")
compiler_token = Token("compiler", fixed_namespace, 1, 1)
fixed_namespace.types["skip"] = UnionType("skip", at=compiler_token).append(FAIL_TYPE)
fixed_namespace.types["true"] = UnionType("true", at=compiler_token).append(TRUE_TYPE)
fixed_namespace.types["false"] = UnionType("false", at=compiler_token).append(FALSE_TYPE)
fixed_namespace.types["ptr"] = UnionType("ptr", at=compiler_token).append(POINTER_TYPE)
fixed_namespace.types["attach_type"] = UnionType("attach_type", at=compiler_token).append(SAME_CONTENTS_TYPE).append(SAME_CONTENTS_TYPE_CSTR)
fixed_namespace.types["catch"] = UnionType("catch", at=compiler_token).append(CAUGHT_TYPE)
fixed_namespace.types["size"] = UnionType("size", at=compiler_token).append(SIZEOF_TYPE)
fixed_namespace.types["literal"] = UnionType("literal", at=compiler_token).append(RESOLVE_LITERAL_TYPE)

smol_namespace.namespaces["compiler"] = fixed_namespace

debug_namespace = File("debug")
debug_token = Token("debug", debug_namespace, 1, 1)
debug_namespace.types["nocatch"] = UnionType("nocatch", at=compiler_token).append(NOCATCH_TYPE)
debug_namespace.types["print"] = UnionType("print", at=compiler_token).append(DEBUG_TYPE)
debug_namespace.types["branchless"] = UnionType("branchless", at=compiler_token).append(SUCCESS_TYPE)
smol_namespace.namespaces["debug"] = debug_namespace

file_cache["builtins"] = smol_namespace

def write_and_compile(output_name: str, main_defs: list[ImplementedType], entry_point: str|None) -> None:
    src_path = Path(f"{output_name}.c")
    exe_path = Path(output_name)
    header = "\n".join("#include \""+k.path+"\"" for k in externals)+"\n"

    discovered_defs: list[ImplementedType] = list()
    already_generated: set[ImplementedType] = set()
    new_error_code_list: list[str] = list()
    def add_implementation(next_def: ImplementedType):
        for candidate_def in next_def.dependent_implementations:
            if candidate_def not in already_generated:
                already_generated.add(candidate_def)
                add_implementation(candidate_def)
        discovered_defs.append(next_def)
    for main_def in main_defs: add_implementation(main_def)
    used_globs = set(k for main_def in discovered_defs for k in main_def.used_globals)
    
    visited_defs_for_error_codes: set[ImplementedType] = set()
    found_error_codes: set[int] = set()
    for main_def in main_defs: found_error_codes = found_error_codes.union(main_def.gather_spawned_error_codes(visited_defs_for_error_codes))

    # TODO: the following commeted out expression is wrong due to compiler:catch() handling in _call(...)
    effective_err_code_list = err_code_list#[element for element in enumerate(err_code_list)]# if pos in found_error_codes else "0" for pos, element in enumerate(err_code_list)]
    effective_err_code_list_size = len(effective_err_code_list)
    while effective_err_code_list_size and effective_err_code_list[effective_err_code_list_size-1]=="0":
        effective_err_code_list_size -= 1
    define_errors = ""
    set_errcodes = "static const char* __temp_all_errcodes["+str(effective_err_code_list_size)+"] = {"
    for i, err_msg in enumerate(effective_err_code_list):
        if i>=effective_err_code_list_size: break
        if i: set_errcodes += ",\n"
        if err_msg!="0":
            err_var = global_cstr2var.get(err_msg, None)
            if err_var is not None and err_var in used_globs:
                used_globs.remove(err_var)
                define_errors += "#define "+err_var+" (__temp_all_errcodes["+str(i)+"])\n"
        set_errcodes += err_msg
    set_errcodes += "\n};\n"
    globs = "\n".join("const char* const "+k+"="+global_var2cstr[k]+";" for k in used_globs)+"\n"

    # declarations only after error codes because transpilation simplifications can affect error detection
    c_decls = list()
    generated_c_funcs = list()
    for next_def in discovered_defs:
        transpiled = next_def.transpile()
        if next_def.force_not_inline: c_decls.append(transpiled[:transpiled.find("{")]+";")
        generated_c_funcs.append(transpiled)
    if entry_point: 
        header += "int __temp_argc;\nchar** __temp_argv;\n"
        generated_c_funcs.append(f"""int main(int argc, char** argv) {{__temp_argc = argc;__temp_argv = argv;{entry_point}();return 0;}}""")
    body = "\n".join(c_decls)+"\n"+"\n\n".join(generated_c_funcs)
    src_path.write_text(header + globs + set_errcodes + define_errors + body, encoding="utf-8")
    print(f"[{YELLOW}+{RESET}] transpile    {src_path}")
    if chosen_compiler=="none": return
    gcc_cmd = {
        "gcc": [
            "gcc",
            "-O3",
            str(src_path),
            "-o",
            str(exe_path),
            "-I."
        ],
        "antcc": [
            "./antcc",
            "-O2",
            str(src_path),
            "-o",
            str(exe_path),
            "-I."
        ]
    }.get(chosen_compiler, None)
    if gcc_cmd is None:
        print("[✗] "+chosen_compiler+" not found")
        errexit()
    print(f"[{YELLOW}+{RESET}] compile     ", " ".join(gcc_cmd))
    result = subprocess.run(gcc_cmd, capture_output=True, text=True)
    if result.returncode != 0:
        print("[✗] "+chosen_compiler+" failed:")
        print(result.stderr)
        errexit()

# ---- MAIN
parser = argparse.ArgumentParser(description="Compile a .s file and optionally run the result.")
parser.add_argument("source", metavar="SOURCE", help="Path to the .s source file to compile.",)
parser.add_argument("--lsp", action="store_true", help="No compilation, and output is meant for the lsp to read.",)
parser.add_argument("--build", action="store_true", help="Build without running.",)
parser.add_argument("--debug", action="store_true", help="Enable debug messages for all failure.",)
parser.add_argument("--back", action="store", help="Choose a backend compiler among auto, antcc, gcc, clang, none (the last option only creates a C file).",)
args, extra_args = parser.parse_known_args()
debug_mode = args.debug
chosen_compiler = args.back or "auto"
is_lsp = args.lsp
is_pyodide = sys.platform == "emscripten"
if chosen_compiler == "auto":
    if is_pyodide: chosen_compiler = "vm"
    else: chosen_compiler = "gcc"

def errexit():
    if is_pyodide: raise SystemExit(1)
    else: os._exit(1)


async def main():
    src_path = Path(args.source)
    if not src_path.is_file(): print(f"{RED}error{RESET}: source file {src_path} does not exist"); errexit()
    if is_pyodide and not is_lsp: print(f"[{YELLOW}+{RESET}] pyodide mode")
    if not is_lsp: print(f"[{YELLOW}+{RESET}] process      {src_path}")
    file: File = await load(await resolve_name(str(src_path), None), is_main_file=True)
    if not is_lsp:
        main_type: UnionType|None = file.types.get("main", None)
        if not main_type: print(f"{RED}error{RESET}: missing main type"); errexit()
        if len(main_type.variations) > 1: print(f"{RED}error{RESET}: more than one main type"); errexit()
        if main_type.variations[0].rets: print(f"{RED}error{RESET}: main type can only fail or return 'blank()'"); errexit()
        exe_path = src_path.with_suffix("")
        if chosen_compiler=="vm":
            print(f"[{YELLOW}+{RESET}] interpret    {src_path}")
            main_type.variations[0].interpret([], MemoryEmulator(4096*4), recursion_budget=100) # emulate 16kb memory
        else:
            write_and_compile(str(exe_path), [main_type.variations[0]], main_type.variations[0].monomorphic_name)
            if not args.build and chosen_compiler!="none":
                extra_args_str = " ".join(extra_args)
                if extra_args_str: extra_args_str = " "+extra_args_str
                if not exe_path.is_file(): print(f"{RED}error{RESET}: executable {exe_path} not found"); errexit()
                print(f"[{YELLOW}+{RESET}] run          ./{exe_path}{extra_args_str}")
                result = subprocess.run("./"+str(exe_path)+extra_args_str, text=True, check=False, stdin=sys.stdin, stdout=sys.stdout, stderr=sys.stderr)
                if result.returncode != 0: os._exit(result.returncode)
            os._exit(0) # not in lsp or pyodide case, as it inteferes with the stdout pipe

if is_pyodide: main()
else: asyncio.run(main())