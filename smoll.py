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
# nuitka --onefile --jobs=8 --deployment --lto=yes --output-filename=smoll --python-flag=no_site --python-flag=no_asserts --python-flag=static_hashes smoll.py
#
# Profile with:
# time python  -m cProfile -s cumulative -o out.prof smoll.py docs/std.s --docs
# flameprof out.prof > flame.svg

import time
import inspect
import asyncio
import os
import sys
import struct
import argparse
import itertools
import subprocess
import platform
import math
import urllib.request
import urllib.parse
import re
from pathlib import Path
from collections import deque
from typing import Optional, Any
from itertools import count
import gc
gc.disable()
#gc.set_threshold(150000)

RED   = "\033[31m"
GREEN = "\033[32m"
YELLOW= "\033[33m"
PURPLE= "\033[35m"
RESET = "\033[0m"
symbols = "=\\/+-*@<>!%&#!(){}[]:.,;|^~"
END_TOKEN = "...]" # impossible for something else to be tokenized as this
START_TOKEN = "[..." # impossible for something else to be tokenized as this
err_code_table: dict[str,int] = dict()
err_code_list = ["\"noerr\"", "\"error\"", "\"null pointer\"", "\"assertion error\""]
err_code_table["noerr"] = 0
err_code_table["error"] = 1
err_code_table["null pointer"] = 2
err_code_table["assertion error"] = 3
debug_mode = True
repositories: dict[str, str] = dict()
externals: list["File"] = list()
MACRO_LIMIT = 20

def supports_ansi() -> bool:
    if is_pyodide: return True
    if not hasattr(sys.stdout, "isatty") or not sys.stdout.isatty(): return False
    if sys.platform == "win32":
        if os.environ.get("WT_SESSION") or os.environ.get("TERM_PROGRAM"): return True
        try:
            import ctypes
            kernel32 = ctypes.windll.kernel32
            # Enable ENABLE_VIRTUAL_TERMINAL_PROCESSING (0x0004)
            return kernel32.SetConsoleMode(kernel32.GetStdHandle(-11), 7) != 0
        except Exception:  return False
    term = os.environ.get("TERM", "")
    if term == "dumb": return False
    return True

def log_async_calls(func): 
    # helper for debugging - currently unused
    async def wrapper(*args, **kwargs):
        task_name = f"{func.__name__} {id(asyncio.current_task())} {str(args)}"
        print(f"Starting {task_name}")
        try:
            result = await func(*args, **kwargs)
            print(f"Completed {task_name}")
            return result
        except Exception as e:
            print(f"Failed {task_name}: {str(e)}")
            raise
    return wrapper

def safeguard(fn, exc): 
    # helper for debugging - currently unused
    try: return fn()
    except Exception: raise exc

def strip_quotes(text: str) -> str:
    if len(text)>=2 and text[0]=="\"" and text[-1]=="\"": return text[1:-1]
    return text

class CompfailException(Exception): pass
class FastReturnException(Exception): pass
class FatalException(Exception): pass
class ExpectedException(Exception): pass # for interpreter
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
        self.foreign_objects: dict[int, tuple[Any, str]] = dict() # foreign_id->(obj,description)
        self.must_free: list[int] = list()
        self.temporary_space = self.alloc(256)

    def unsafe_cstr(self, text: str) -> int:
        encoded = text.encode('utf-8')
        addr = self.temporary_space if self.temporary_space and len(text)<256 else self.alloc(len(encoded) + 1)
        if addr == 0: return 0
        self.contents[addr:addr + len(encoded)] = encoded
        self.contents[addr + len(encoded)] = 0
        return addr

    def write_cstr(self, text: str) -> int:
        encoded = text.encode('utf-8')
        addr = self.alloc(len(encoded) + 1)
        if addr == 0: return 0
        self.contents[addr:addr + len(encoded)] = encoded
        self.contents[addr + len(encoded)] = 0
        return addr

    def alloc(self, size: int) -> int:
        if self.consumed+size>self.size: return 0
        ret = self.consumed
        self.consumed += size
        self.alloc_sizes[ret] = size
        return ret

    def register_foreign(self, obj: any, description: str):
        foreign_object_id = len(self.foreign_objects)+1 # reserve zero id for failing starts
        self.foreign_objects[foreign_object_id] = (obj,description)
        addr = self.alloc(8)
        self.write_int64(addr, foreign_object_id)
        return addr

    def get_foreign(self, addr: int) -> int|None:
        foreign_object_id = self.read_int64(addr)
        ret = self.foreign_objects.get(foreign_object_id)  # .get() instead of ()
        if ret is None: return None
        return ret[0]

    def close_foreign(self, addr: int) -> int:
        foreign_object_id = self.read_int64(addr)
        ret = self.foreign_objects.get(foreign_object_id)
        if ret is None: return False
        del self.foreign_objects[foreign_object_id]
        return True

    def realloc(self, original: int, size: int) -> int:
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

    def free(self, original: int) -> int:
        if original not in self.alloc_sizes: return original
        self.memset(original, 0, self.alloc_sizes[original]) # safety in case the VM ends up actually useful
        del self.alloc_sizes[original]
        return 0
    
    def named_alloc_value(self, text: str, _contents: str) -> int:
        if text not in self.named_locs: 
            contents = _contents.encode('raw_unicode_escape').decode('unicode_escape').encode('utf-8')
            size = len(contents)
            addr = self.alloc(size+1)
            self.named_locs[text] = addr
            self.contents[addr:(addr+size)] = contents
            self.contents[addr+len(contents)] = 0
        return self.named_locs[text]

    def named_alloc(self, text: str, size: int) -> int:
        if text not in self.named_locs: 
            self.named_locs[text] = self.alloc(size)
        return self.named_locs[text]

    def strcpy(self, addr: int, addr2: int):
        try: end = self.contents.index(0, addr2)
        except ValueError: end = len(self.contents)
        self.contents[addr:(addr+end-addr2)] = self.contents[addr2:end]
        self.contents[addr+end-addr2] = 0

    def strlen(self, addr: int) -> int:
        try: end = self.contents.index(0, addr)
        except ValueError: end = len(self.contents)
        return end-addr

    def memcpy(self, addr: int, addr2: int, size: int):
        self.contents[addr:(addr+size)] = self.contents[addr2:(addr2+size)]
    
    def memcmp(self, addr: int, addr2: int, size: int) -> int:
        return 0 if self.contents[addr:(addr+size)] == self.contents[addr2:(addr2+size)] else 1

    def as_rawstr(self, addr: int, size: int) -> str:
        end = len(self.contents)
        raw = self.contents[addr:min(addr + size, end)]
        return raw.decode('latin-1').encode('unicode_escape').decode('ascii')

    def as_str(self, addr: int, size: int) -> str:
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
    parts = name.split("__") # re.split(r'__(?!t)', name)
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

temp_counter = count()
def create_temp():
    return f"__t{next(temp_counter)}t"

def longest_common_prefix_len(strings: list[str]) -> int:
    # this function needs all the optimizations it can get
    if len(strings)==0: return 0
    first = strings[0]
    i = 0
    found = 0
    prev_char = False
    next_char = False
    try: # this implementation takes advantage of out of bounds exception, since the check is made anyway
        while True:
            c = first[i]
            is_same = True
            for j in range(1,len(strings)):
                if strings[j][i]!=c:
                    is_same = False
                    break
            if not is_same: break
            next_char = c=="_"
            i += 1
            if next_char and prev_char: found = i
            prev_char = next_char
    except: found = len(first)
    if found==2 and first[0]=="_" and first[1]=="_": return 0
    pos = first.rfind("____t", 0, found)
    if pos!=-1: return pos+2
    return found

#from mypy_extensions import mypyc_attr

#@mypyc_attr(acyclic=True)
class CodeSegment:
    def tostring(self)->str: return ""
    def copy(self, prefix: str): return self
    def is_temp(self)->bool: return False

#@mypyc_attr(acyclic=True)
class CodeWord(CodeSegment):
    def __init__(self, name: str): self.name = name
    def tostring(self): return self.name
    def copy(self, prefix: str): return self
    
CODEWORD_EQUALS = CodeWord("=")
CODEWORD_COMPARISON_EQUALS = CodeWord("==")
CODEWORD_COMPARISON_NOT_EQUALS = CodeWord("!=")
CODEWORD_LPAR = CodeWord("(")
CODEWORD_RPAR = CodeWord(")")
CODEWORD_AMP = CodeWord("&")
CODEWORD_COMMA = CodeWord(",")
CODEWORD_ADD = CodeWord("+")
CODEWORD_MUL = CodeWord("*")
CODEWORD_LBRACKET = CodeWord("{")
CODEWORD_RBRACKET = CodeWord("}")
CODEWORD_SEMICOLON = CodeWord(";")
CODEWORD_PRINTF = CodeWord("printf")
CODEWORD_GOTO = CodeWord("goto")
CODEWORD_NOT = CodeWord("!")
CODEWORD_IF = CodeWord("if")
CODEWORD_ELSE = CodeWord("else")
CODEWORD_BREAK = CodeWord("break")
CODEWORD_CONTINUE = CodeWord("continue")
CODEWORD_WHILE = CodeWord("while")
CODEWORD_ZERO = CodeWord("0")
CODEWORD_ONE = CodeWord("1")
CODEWORD_TWO= CodeWord("2")
CODEWORD_MINUS = CodeWord("-")
CODEWORD_TCOMPLAIN = CodeWord("__t_complain")
CODEWORD_TERRCODE = CodeWord("__t_errcode")
CODEWORD_TFAILURE = CodeWord("__t_failure")
CODEWORD_TRETURN = CodeWord("__t_return")
CODEWORD_CAST_FUNC_PTR = CodeWord("__smoll_func_ptr_type")
code_word_cache: dict[str, CodeWord] = dict()

def create_code_word_cached(text: str):
    entry = code_word_cache.get(text, None)
    if entry is None:
        entry = CodeWord(text)
        code_word_cache[text] = entry
    return entry

lsp_text_ids: dict[str, int] = dict()
def printid(text: int|str):
    text = str(text).replace("'", "`")
    found_id = lsp_text_ids.get(text)
    if found_id is None: 
        found_id = len(lsp_text_ids)
        lsp_text_ids[text] = found_id
        print(f"def: {found_id},", text.replace("\n","\t"))
    print(":"+str(found_id))


def print_lsp_var(tok, signature:str):
    print("---")
    printid("variable")
    printid(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    printid(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    printid("```rust\n"+signature+"\n```")

def print_lsp_string(tok):
    print("---")
    printid("string")
    printid(os.path.abspath(tok.file.resolved_path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    printid(os.path.abspath(tok.file.resolved_path))
    print(tok.row)
    print(tok.col)
    printid("a string literal")

def print_lsp_literal(tok: "Token", name: str):
    print("---")
    print("number")
    printid(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    printid(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    printid(name)

def print_lsp_keyword(tok: "Token", description: str):
    print("---")
    printid("keyword")
    printid(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    printid(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    printid(description)

def print_lsp_definition(tok: "Token", description: str):
    print("---")
    printid("keyword")
    printid(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    printid(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    printid(description)

def print_lsp_decorator(tok: "Token", description: str):
    print("---")
    print("keyword")
    printid(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    print(len(tok.text))
    printid(os.path.abspath(tok.file.path))
    print(tok.row)
    print(tok.col)
    printid(description)

class CallPointer(CodeSegment):
    def __init__(self, callee: "ImplementedType"):
        self.name = callee.monomorphic_name
        self.callee = callee
    def tostring(self): return self.name
    def copy(self, prefix: str): return self

#@mypyc_attr(acyclic=True)
class Variable(CodeSegment):
    def __init__(self, name: str, type: "ImplementedType", immutable: bool=True, isprivate: bool=False, _references: str|None=None, token: Optional["Token"]=None):
        # assert isinstance(immutable, bool)
        # assert isinstance(isprivate, bool)
        # assert not _references or isinstance(references, str)
       
        self.name = name
        self.type = type
        self.immutable = immutable
        self.isprivate = isprivate
        self._references = _references
        self.token = token
    def tostring(self): return self.name
    def copy(self, prefix: str): return Variable(prefix+"__"+self.name, self.type, self.immutable, self.isprivate, self._references)
    def renamed_copy(self, new_name: str, token: Optional["Token"]=None): return Variable(new_name, self.type, self.immutable, self.isprivate, self._references, token if token else self.token)
    def mutable_copy(self, error_token): 
        if error_token and self.type is POINTER_TYPE and self.immutable: 
            error_token.error("safety", "cannot make mutable an immutable pointer '"+pretty_name(self.name)+"'", suggestions=["set the pointer or its data structure locally as a 'ref'; this fixes references to the original while mutating the rest", "if you know what you are doing, use 'unsafe_mut' instead to overwrite safety"])
        if error_token and self._references: # this should not appear when 'mut' is used for both mutation and safe mutation
            error_token.error("safety", "cannot make a reference mutable '"+pretty_name(self.name), suggestions=["use 'safe_mut' instead", "use 'ref mut' instead of 'mut ref'"])
        return Variable(self.name, self.type, False, self.isprivate, self._references, error_token if error_token else self.token)
    def editable_copy(self):
        if self.type is POINTER_TYPE and self.immutable: 
            return self
        if self._references:
            return self
        return Variable(self.name, self.type, self.immutable and not self.isprivate, self.isprivate, self._references, self.token)
    def immutable_copy(self): return Variable(self.name, self.type, True, False, self._references, self.token)
    def private_copy(self): return Variable(self.name, self.type, self.immutable, True, self._references, self.token)
    def is_same(self, other: "Variable"):
        if self.type!=other.type: return False
        if self.type.is_buffer_of!=other.type.is_buffer_of: return False
        if self.immutable!=other.immutable: return False
        if self.isprivate!=other.isprivate: return False
        #if self.type.builtin and self.name!=other.name: return False # skip name matching
        return True
    def is_temp(self): return self.name.startswith("__t")
    def stable_copy(self):
        return Variable(self.name, self.type, self.immutable, self.isprivate, self.name, self.token)
    def stabilized_name(self) -> str:
        if self._references is None: return self.name
        return self._references



def signature_like(vars: list[Variable], impl=None, monomorphic=False):
    if monomorphic: common_prefix_length = 0
    else: common_prefix_length = longest_common_prefix_len([var.name for var in vars])
    ret = ""
    i = 0
    where: list[str] = list()
    def toname(checked: ImplementedType):
        if monomorphic: return checked.monomorphic_name
        return checked.name
    while i<len(vars):
        if ret: ret += ", "
        type = vars[i].type
        if monomorphic: arg_name = ""
        else:
            arg_name = vars[i].name[common_prefix_length:]
            if arg_name.startswith("__t") or "____" in arg_name: arg_name = ""
            else: arg_name = " "+arg_name.replace("__", ".")
            arg_name = arg_name.strip()
            if arg_name: arg_name = " "+arg_name
        if type.builtin: 
            if not vars[i].immutable: ret += "mut "
            if type is POINTER_TYPE and impl: 
                pointer_type = impl.get_pointer_type(vars[i])
                if pointer_type is None: ret += "any "
                else: ret += toname(pointer_type)+" "
            ret += toname(type)+arg_name
            if type is POINTER_TYPE and impl:
                #if pointer_type and pointer_type != ANY_TYPE: ret += " {"+signature_like([pointer_type.vars[ret] for ret in pointer_type.rets], pointer_type)+"}"
                dependency = impl.follow_pointer_dependency(vars[i])
                if dependency and dependency!=vars[i]: 
                    dep = impl.get_pointer_type(dependency) 
                    if not dep or dep==ANY_TYPE: ret += " {follows "+toname(dep if dep else ANY_TYPE)+" ptr "+pretty_name(dependency.name if not monomorphic else "")+"}"
            i += 1
        elif type.is_literal_of: 
            at = type.at
            assert at is not None
            ret += at.text
            i += len(type.rets)
        elif type.is_buffer_of: 
            if all(not vars[k].immutable for k in range(i, min(len(vars),i+len(type.rets)))): ret += "mut "
            elif all(vars[k].immutable or vars[k].isprivate for k in range(i, min(len(vars),i+len(type.rets)))): pass#ret += "const "
            elif any(not vars[k].immutable for k in range(i, min(len(vars),i+len(type.rets)))): ret += "edit "
            element_size = type.is_buffer_of.memory_size()
            ret += toname(type.is_buffer_of)+"[]"+arg_name #+" {element size "+(str(element_size) if element_size else "?")+"}"
            if impl:
                #if type.is_buffer_of and type.is_buffer_of != ANY_TYPE: ret += " {"+signature_like([type.is_buffer_of.vars[ret] for ret in type.is_buffer_of.rets], type.is_buffer_of)+"}"
                dependency = impl.follow_pointer_dependency(vars[i+1])
                if dependency and dependency!=vars[i+1]: 
                    dep = impl.get_pointer_type(dependency) 
                    if not dep or dep==ANY_TYPE: ret += " {follows "+toname(dep if dep else ANY_TYPE)+" ptr "+pretty_name(dependency.name if not monomorphic else "")+"}"
            i += len(type.rets)
        else:
            if all(not vars[k].immutable for k in range(i, min(len(vars),i+len(type.rets)))): ret += "mut "
            elif all(vars[k].immutable or vars[k].isprivate for k in range(i, min(len(vars),i+len(type.rets)))): pass#ret += "const "
            elif any(not vars[k].immutable for k in range(i, min(len(vars),i+len(type.rets)))): ret += "edit "
            ret += toname(type)+arg_name
            i += len(type.rets)
        if not len(type.rets): i += 1
        #assert len(type.rets)
    return ret

def code_summary(tokens: list[CodeSegment], impl: "ImplementedType") -> str:
    ret = ""
    for tok in tokens:
        # if isinstance(tok, Variable):
        #     ret += signature_like([tok], impl)+"\n"
        if isinstance(tok, CallPointer):
            ret += tok.callee.signature()+"\n"
    return ret
            
        

global_cstr2var: dict[str,str] = dict() # from literal to variable name
global_var2cstr: dict[str,str] = dict() # from variable name to literal


def rename(seq: list, substitute: dict[str, Variable], others: dict[str, CodeWord]=dict()) -> list:
    result = []
    for seg in seq:
        if isinstance(seg, Variable): result.append(substitute.get(seg.name, seg))
        else: result.append(others.get(seg.tostring(), seg))
    return result

class ImplementedType:
    def __init__(self, name: str, builtin:str|None=None, at:Optional["Token"]=None, memory_size=0):
        self.name = name
        self.invalidated_by = self # which type's invalidation cause invalidation of this - right now helps invalidate pointer buffers
        self.is_literal_of: Optional["ImplementedType"] = None
        self.monomorphic_name = name.replace(",","__").replace(" ","_").replace(".","_").replace("[","_").replace("]","_").replace("{","_").replace("}","_").replace("(","_").replace(")","_").replace("->","__")+create_temp()
        self.functor_var_name: Optional[str] = None # used only when wrapping vars as functors
        self.has_retrieved_class: Optional["Token"] = None
        self.has_retrieved_singleton: Optional["Token"] = None
        self.return_names: dict[str, int] = dict() # map return names to indexes in rets
        self.doc: list[str] = list()
        self.required_accompany: dict[str,list[str]] = dict()
        self.VM: str|None = None # an equivalent python implementation for the VM
        self.effect_names: list[str] = list()
        self.args: list[str] = list()
        self.rets: list[str] = list()
        self.refargs: list[str] = list() # which arguments are references (usually empty unless an argument has 'ref')
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
        self.linker: list[str] = list()
        self.nesting: list[str] = list()
        self.for_counter: list[str] = list()
        self.has_returned_once = False
        self.needs_failure_mode: Optional["Token"] = None
        self.has_any_complaint = False
        self.never_implement = False # prevent implementation of the method
        self.is_buffer_of: ImplementedType|None = None
        self.is_pointer_of: ImplementedType|None = None
        self.is_functor_of: ImplementedType|None = None
        self.is_forced_pointer_type_of: ImplementedType|None = None
        self.used_globals: set[str] = set()
        self.dependent_implementations: list[ImplementedType] = list() # dependent pointer TYPES
        self.dependent_assignments: dict[str, str] = dict() # e.g., dependent memory regions
        self._assignment_graph: Optional[dict[str,list[str]]] = None
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
        self.count_handled_tries: list[int] = list() # equivalent list that hold whether the try blocks where handled
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

    def get_required_accompany(self, var: Variable):
        assert isinstance(var, Variable)
        var_stabilized_name = var.stabilized_name()
        ret = set()
        for acc in self.required_accompany.get(var_stabilized_name, []):
            var = self.vars[acc]
            if var not in ret: ret.add(var)
        return list(ret)

    def add_required_accompany(self, var: Variable, requirement: Variable):
        assert isinstance(var, Variable)
        assert isinstance(requirement, Variable)
        var_stabilized_name = var.stabilized_name()
        if var_stabilized_name not in self.required_accompany: self.required_accompany[var.stabilized_name()] = list()
        self.required_accompany[var_stabilized_name].append(requirement.stabilized_name())

    def gather_spawned_error_codes(self, discovered: set["ImplementedType"]):
        ret = set()
        if self in discovered: return ret
        discovered.add(self)
        ret = ret.union(self.spawned_error_codes)
        # if we have no errors (have tried with everything) but have not caught anything (to print it) then don't add propagating errors
        if not self.has_caught_used_error_codes and not self.needs_failure_mode: return ret 
        for other in self.used_error_codes: ret = ret.union(other.gather_spawned_error_codes(discovered))
        return ret

    def stabilize(self, rets: list[Variable]):
        return [self.vars[ret._references] if ret._references else ret for ret in rets]

    def set_pointer_type(self, var: Variable, type: "ImplementedType"):
        assert var.type == POINTER_TYPE
        assert var.name not in self._pointer_type_dependencies or self._pointer_type_dependencies[var.name] is not None
        #assert not self.get_pointer_type(var)
        self._pointer_types[var.name] = type

    def follow_pointer_dependency(self, var: Variable) -> Variable|None:
        varname = var.name
        if varname not in self._pointer_type_dependencies: return None
        visited: set[str] = set()
        while varname in self._pointer_type_dependencies:
            varname = self._pointer_type_dependencies.get(varname, "")
            if varname in self.args: return self.vars[varname]
            if varname in visited: return None
            visited.add(varname)
        return self.vars[varname]

    def get_pointer_type(self, _var: Variable) -> Optional["ImplementedType"]:
        assert isinstance(_var, Variable)
        if _var.type.is_forced_pointer_type_of: return _var.type.is_forced_pointer_type_of
        visited: set[str] = set()
        var: Variable|None = _var
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
        existing_dependency = self.get_pointer_type(var)
        assert existing_dependency in NONE_OR_ANY
        #assert var.name!=depends_on.name
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
        if self.is_pointer_of: return "pointer of "+signature_like([self.is_pointer_of.vars[arg] for arg in self.is_pointer_of.rets], self.is_pointer_of)
        args = signature_like([self.vars[arg] for arg in self.args], impl=self)
        rets = signature_like([self.vars[arg] for arg in self.rets], impl=self)
        return ("" if "__" in self.name else self.name)+"("+args+") -> ("+rets+")"+(" with effects "+','.join(self.effect_names) if self.effect_names else "")

    def canonical_signature(self, source=None):
        if self.is_buffer_of: return "buffer of "+signature_like([self.is_buffer_of.vars[arg] for arg in self.is_buffer_of.rets], self.is_buffer_of, monomorphic=True)
        if self.is_pointer_of: return "pointer of "+signature_like([self.is_pointer_of.vars[arg] for arg in self.is_pointer_of.rets], self.is_pointer_of, monomorphic=True)
        args = signature_like([self.vars[arg] for arg in self.args], impl=self, monomorphic=True)
        rets = signature_like([self.vars[arg] for arg in self.rets], impl=self, monomorphic=True)
        return ("" if "__" in self.name else self.name)+"("+args+") -> ("+rets+")"+(" with effects "+','.join(self.effect_names) if self.effect_names else "")

    def assign(self, varname: str, value: list[Variable], error_token: "Token", perform_immutability_checks: bool=True, top_entry: bool=True, strip_mutability: bool=False):
        # for segment in varname.split("--"):
        #     if segment in ["def", "repo", "import", "return", "mut", "unsafe_mut", "const", "edit", "rec"]:
        #         error_token.error("safety", "keyword '"+segment+"' cannot be assigned to")
        #     if segment in operators:
        #         error_token.error("safety", "operator '"+segment+"' cannot be assigned to")
        if len(value)==0: error_token.error("type", "no expression value to assign to variable '"+varname+"'")
        if len(value)>1:
            len_common_prefix = longest_common_prefix_len([var.name for var in value])
            if top_entry and "__" in varname and not varname.startswith("__t"):
                if not any(v.startswith(varname) for v in self.vars.keys()):
                    split = varname.rsplit("__",1)[0]
                    error_token.error("type", "trying to add a field that the type does not have '"+pretty_name(varname)+"'", suggestions=[pretty_name(v) for v in self.vars if v.startswith(split)] if split else None)
            for var in value: self.assign(varname+"__"+var.name[len_common_prefix:], [var], error_token, perform_immutability_checks, False, strip_mutability)
            return None
            error_token.error("type", "cannot assign more than one values to variable '"+varname+"'")
        existing = self.vars.get(varname, None)
        if not existing:
            if top_entry and "__" in varname and not varname.startswith("__t"):
                if not any(v.startswith(varname) for v in self.vars.keys()):
                    split = varname.rsplit("__",1)[0]
                    error_token.error("type", "trying to add a field that the type does not have '"+pretty_name(varname)+"'", suggestions=[pretty_name(v) for v in self.vars if v.startswith(split)] if split else None)
            current_prefix = varname+"__"
            found = [val for varname, val in self.vars.items() if varname.startswith(current_prefix)]
            if found:
                if len(found)!=len(value): error_token.error("type", "cannot overwrite tuple with one of different length")
                for i in range(len(value)): self.assign(found[i].name, [value[i]], error_token, perform_immutability_checks, top_entry=False, strip_mutability=strip_mutability)
                return None
        if existing is not None and existing.type!=value[0].type: 
            if existing.type == POINTER_TYPE:
                error_token.error("type", "mismatching types '"+existing.type.signature()+"' vs '"+value[0].type.signature()+"'\nPerhaps you meant to place a value on a pointer with the pattern '"+existing.name+" = ...'")
            if existing.type.is_buffer_of and value[0].type.is_buffer_of and match_structure_with(existing.type.is_buffer_of, value[0].type.is_buffer_of): 
                pass
            else: error_token.error("type", "mismatching types '"+existing.type.signature()+"' vs '"+value[0].type.signature()+"'")
        if perform_immutability_checks and existing and existing.immutable: 
            # allow overwrting a variable by itself, especially if the overwriting is a reference to the same thing
            if (self.get_assignment(existing.stabilized_name(), [value[0].stabilized_name()]) or self.get_assignment(value[0].stabilized_name(), [existing.stabilized_name()])) or (existing.type==value[0].type and not existing.type.builtin): pass
            elif not existing.type.builtin and "____" in varname: error_token.error("safety", "cannot overwrite immutable class instance '"+pretty_name(varname.split("____")[0])+"'")
            else: error_token.error("safety", "cannot overwrite immutable variable '"+pretty_name(varname)+"' unless with itself or a directly equal value")
        if existing and existing._references is not None and value[0]._references!=existing._references and perform_immutability_checks:
            error_token.error("safety", "variable '"+pretty_name(existing.name.split("____")[0])+"' is an in-scope reference to '"+pretty_name(existing._references.split("____")[0])+"' and can only get assigned another reference to the same variable (this does nothing but is handy for handling tuples that contain references)")
        if existing and not existing.immutable and value[0].immutable:
            value[0] = value[0].mutable_copy(error_token)
        if strip_mutability and not existing: existing = value[0].renamed_copy(varname, error_token).immutable_copy()
        else: existing = value[0].renamed_copy(varname, error_token)
        self.vars[varname] = existing
        if existing.type is POINTER_TYPE:
            if existing.stabilized_name() in self.invalidated: del self.invalidated[existing.stabilized_name()]
            existing_pointer_type = self.get_pointer_type(existing)
            other_pointer_type = self.get_pointer_type(value[0])
            if existing_pointer_type not in NONE_OR_ANY:
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
        already_assigned = False
        if value[0].stabilized_name() in self.required_accompany: self.required_accompany[existing.stabilized_name()] = self.required_accompany[value[0].stabilized_name()]
        self._assignment_graph = None
        self.dependent_assignments[existing.name] = value[0].stabilized_name()
        if not already_assigned and existing.type.builtin and (existing._references is None or not perform_immutability_checks): 
            if existing.name in self.refargs: self.refargs.remove(existing.name)
            self.implementation.extend([existing, CODEWORD_EQUALS, value[0], CODEWORD_SEMICOLON])


    # def get_assignment(self, from_name: str, _to_name: list[str]):
    #     assert isinstance(from_name, str)
    #     assert isinstance(_to_name, list)
    #     to_name = set(_to_name)
    #     if from_name in to_name: return from_name
    #     graph = self._assignment_graph
    #     if graph is None:
    #         graph = dict()
    #         for k, v in self.dependent_assignments.items():
    #             if v not in graph: graph[v] = list()
    #             graph[v].append(k)
    #             if k not in graph: graph[k] = list()
    #             graph[k].append(v)
    #         self._assignment_graph = graph
    #     visited: set[str] = set()
    #     pending: set[str] = set()
    #     pending.add(from_name)
    #     while pending:
    #         next_value = pending.pop()
    #         if next_value in to_name: return next_value
    #         visited.add(next_value)
    #         for candidate in graph.get(next_value, list()):
    #             if candidate not in visited: pending.add(candidate)
    #     return None

    def get_assignment(self, from_name: str, _to_name: list[str]):
        assert isinstance(from_name, str)
        assert isinstance(_to_name, list)
        to_name = set(_to_name)
        if from_name in to_name: return from_name
        graph = self._assignment_graph
        if graph is None:
            graph = dict()
            for k, v in self.dependent_assignments.items():
                graph.setdefault(v, []).append(k)
                graph.setdefault(k, []).append(v)
            self._assignment_graph = graph

        visited: set[str] = {from_name}
        pending = deque([from_name])
        while pending:
            next_value = pending.popleft()
            if next_value in to_name: return next_value
            for candidate in graph.get(next_value, ()):
                if candidate not in visited:
                    visited.add(candidate)
                    pending.append(candidate)
        return None

    def returns(self, value: list[Variable], error_token: "Token", is_safe: bool):
        if value:
            for v in value[1:]:
                if v.type==self:
                    error_token.error("type", "'class' or 'singleton' created by this function within its return data should be positioned at the beginning of the returned tuple")
        for v in value:
            if v._references is not None: 
                #if not any(u.name==v._references for u in value):
                #    error_token.error("safety", "returning reference '"+pretty_name(v.name)+"' without the accompanying referenced value '"+pretty_name(v._references)+"'")
                self.assign(v.name, [self.vars[v._references]], error_token, perform_immutability_checks=False, top_entry=False)
                v._references = None

        if self.has_returned_once and len(self.rets)!=len(value):
            error_token.error("type", "this value returned here is a different type than previous returns '"+signature_like([self.vars[ret] for ret in self.rets])+"' vs '"+signature_like(value)+"'")
        for pos, arg in enumerate(value):
            if not arg.name.startswith("__t"): self.return_names[arg.name] = pos
            if self.has_returned_once: 
                #v1 = self.vars[self.rets[pos]]
                # if is_safe and v1.type==POINTER_TYPE and arg.type==POINTER_TYPE:
                #     if not self.get_assignment(v1.name, [arg.name]) and not self.get_assignment(arg.name, [v1.name]):
                #         error_token.error("safety", "you are returning an incompatible pointer")
                self.assign(self.rets[pos], [arg], error_token, perform_immutability_checks=False, top_entry=False) # TODO: do not use assign but a manual setting to allow overwriting (or make mutable)
            else:
                self.rets.append(arg.name)
                self.vars[arg.name] = arg # needed to reflect changes in const permissions
        for i in range(len(self.rets)):
            for j in range(i+1,len(self.rets)):
                if self.rets[i]==self.rets[j]: error_token.error("safety", "cannot return the same variable multiple times; conflict for '"+pretty_name(self.rets[i])+"'")
        
        prev_self_rets = self.rets
        if True:
            self.rets = [v.name for v in value]
            prev_returned_defers = {id(defer) for defer in self.returned_defers}
            new_returned_defers = set()
            self.defers = self.defers+self.returned_defers
            self.returned_defers = []
            to_remove = list()
            for defer in self.defers:
                orignal_defer = defer
                normalized_defer: list[CodeSegment] = list()
                for segment in defer:
                    if isinstance(segment, Variable) and segment.name not in global_var2cstr:
                        segment_stabilized_name = segment.stabilized_name()
                        ret = self.get_assignment(segment_stabilized_name, self.rets) # we have computed these now (DO NOT MOVE EARLIER)
                        normalized_defer.append(self.vars[ret] if ret else segment)
                    else: normalized_defer.append(segment)
                defer = normalized_defer
                has_any_returned_value = any(u.tostring()==v.name for v in value for u in defer)
                if not has_any_returned_value: continue
                if any(not segment.immutable and segment.tostring() in self.args and segment.tostring() not in self.rets for segment in value):
                    error_token.error("safety", "cannot have a 'defer' that mixes non-returned mutable argument and returns")
                has_assigned = set()
                has_not_assigned = set()
                confirm = True
                for pos, segment in enumerate(defer):
                    if pos<len(defer)-1 and defer[pos+1].tostring()=="=" and segment not in has_not_assigned: has_assigned.add(segment)
                    has_not_assigned.add(segment)
                    if isinstance(segment, Variable) and segment.name not in global_var2cstr and not segment.is_temp() and segment not in has_assigned and not any(segment.tostring()==v.name for v in value):
                        if not segment in value: 
                            confirm = False
                            error_token.error("safety", "cannot return a partial 'defer'\nThis return statement does not explicitly return '"+pretty_name(segment.tostring())+"'. However, this variable is partially or fully used within a 'defer' that also contains returned values. It is wrong for this defer to run within this function.", suggestions=["return '"+pretty_name(segment.tostring())+"' too, or any structure it resides in", "do not return variables within the same 'defer'", "use 'unsafe_return' to run the defer in question within this function"])
                if confirm:
                    self.returned_defers.append(defer)
                    new_returned_defers.add(id(orignal_defer))
                    to_remove.append(orignal_defer)
            if self.has_returned_once and is_safe:
                for defer in prev_returned_defers:
                    if defer not in new_returned_defers:
                        error_token.error("safety", "incompatible returned defers compared to previous return")
                for defer in new_returned_defers:
                    if defer not in prev_returned_defers:
                        error_token.error("safety", "incompatible returned defers compared to previous return")
            for defer in to_remove: self.defers.remove(defer)

        if is_safe:
            defer_vars = {var for defer in self.defers+self.returned_defers for var in defer if isinstance(var, Variable)}
            defer_var_names = [r.name for r in defer_vars]
            defer_var_names = list(set(defer_var_names))
            for ret in self.rets+[arg for arg in self.args if not self.vars[arg].immutable]: 
                v = self.vars[ret]
                if v.type.invalidated_by is POINTER_TYPE:
                    required_accompany = self.get_required_accompany(v)
                    # if not required_accompany:
                    #     error_token.error("safety", "the source of '"+pretty_name(v.stabilized_name())+"' cannot be uniquely determined to guarantee safety")
                    for accompanying in required_accompany:
                        if accompanying==v: continue
                        to_defer = self.get_assignment(accompanying.stabilized_name(), defer_var_names)
                        if to_defer is None and self.defers and not self.get_assignment(accompanying.stabilized_name(), self.args):
                            error_token.error("safety", "safely "+("returning '"if ret in self.rets else "mutating or editing input '")+pretty_name(v.stabilized_name())+"' cannot be done, because the variable comes from '"+pretty_name(accompanying.stabilized_name())+"' for which equality-based analysis is cut short (e.g., passes through allocated memory) and therefore cannot be proven to *not* be associated with a defer not accompanying the return", reason=accompanying.token, suggestions=["use 'compiler:assert_eq' to verify memory region equality and thus properly transfer deferred values", "create a copy on new memory and return that", "return all variables with associated defers, to let those defers accompany the function's return", "return a container/buffer and position pair and reconstruct necessary pointers at the return site", "return the non-pointer section of your data and reconstruct the object at the calling site", "return with 'unsafe_return' (you can even return a blank value)"])
                    
                        if (to_defer and not self.get_assignment(to_defer, self.rets)):# and not self.get_assignment(accompanying.stabilized_name(), self.args):# and not any(self.get_assignment(ret, defer_var_names) for ret in self.rets):
                            error_token.error("safety", "safely "+("returning '"if ret in self.rets else "mutating or editing input '")+pretty_name(v.stabilized_name())+"' requires to also return '"+pretty_name(accompanying.stabilized_name())+"' so that its resource release is defered further", reason=accompanying.token, raason_message="due to", suggestions=["return the accompanying variable", "return a structure containing the accompanying variable", "create a ref to the accompanying variable", "return with 'unsafe_return' (you can even return a blank value)"])
                if v.stabilized_name() in self.invalidated:
                    error_token.error("safety", "return '"+pretty_name(v.stabilized_name())+"' has been invalidated", reason=self.invalidated[v.stabilized_name()], raason_message="due to")

        self.rets = prev_self_rets
        self.has_returned_once = True
        if self.fast_return_exception: 
            self.force_not_inline = True
            self.has_returned_once = True
            self.needs_failure_mode = error_token
            raise FastReturnException
    
    async def interpret(self, values: list[int|float], memory: MemoryEmulator, recursion_budget) -> list:
        #if not self.can_try_interpreter: self.at.error("interpreter", "'"+self.name+"' is not interpretable")
        
        # memory is basically a list of chars
        args = [k for k in self.args if self.vars[k].type.builtin]+[k for k in self.rets if self.vars[k].type.builtin]
        input_args = len([k for k in self.args if self.vars[k].type.builtin])
        #by_reference = [not self.vals[k].immutable for k in self.args if self.vals[k].builtin]+[True for k in self.rets if self.vals[k].builtin]
        assert isinstance(values, list)
        if len(values)!=len(args): self.at.error("interpreter", self.signature()+" needs "+str(len(args))+" inputs and outputs total, but "+str(len(values))+" were provided")
        _arg_values = values
        local_vars: dict[str,int|float] = dict(zip(args[:input_args],values[:input_args]))
        #print(self.name, values)
        self.can_try_interpreter = False
        async def process_expression(impl: list[CodeSegment], pos: int, end: int):
            if pos>end: return
            if impl[pos].tostring()=="(" and pos<=end-3 and impl[pos+1].tostring()=="__smoll_func_ptr_type" and impl[pos+2].tostring()==")":
                candidate_name = impl[pos+3].tostring()
                functor_exists = local_vars.get(candidate_name, None)
                found_func = None
                if functor_exists is not None: return functor_exists
                for candidate in self.dependent_implementations:
                    if candidate.monomorphic_name==candidate_name:
                        found_func = candidate
                if found_func is None:
                    self.at.error("interpreter", "failed to retrieve functor '"+candidate_name+"'")
                assert found_func
                return memory.register_foreign(found_func, "") # no free check
            if impl[pos].tostring()=="(" and pos<end-3 and impl[pos+2].tostring()=="*" and impl[pos+3].tostring()==")":
                pos += 4 # skip pointer casts
            if pos>end: return
            if impl[pos].tostring()=="(" and impl[end].tostring()==")":
                return await process_expression(impl,pos+1,end-1)
            expr_pos = pos
            if impl[pos].tostring()=="!":
                condition = await process_expression(impl,pos+1,end)
                return 0 if condition else 1
            if impl[pos].tostring()=="*":
                if pos<=end-3 and impl[pos+2].tostring()=="=":
                    index = await process_expression(impl, pos+1, pos+1)
                    value = await process_expression(impl, pos+3, end)
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
                    index = await process_expression(impl, pos+1, end)
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
            if impl[pos].tostring()=="__t_all_errcodes":
                assert impl[pos+1].tostring()=="["
                assert impl[pos+3].tostring()=="]"
                value = await process_expression(impl, pos+2,pos+2)
                assert isinstance(value, int)
                k = err_code_list[value]
                return memory.named_alloc_value(k, k[1:-1])
            if pos==end:
                tok = impl[pos]
                k = tok.tostring()
                value: float|int|None = local_vars.get(tok.tostring(), None)
                if value is not None: return value
                if k=="EOF": return -1
                if k in global_var2cstr: 
                    cstr_global = global_var2cstr[k]
                    return memory.named_alloc_value(k, cstr_global[1:-1])
                if len(k)>=2 and k.startswith("\"") and k.endswith("\""):
                    return memory.named_alloc_value(k, k[1:-1])
                if len(k)>=2 and k.startswith("'") and k.endswith("'"):
                    try:
                        inner = k[1:-1]
                        if inner.startswith("\\"):
                            escape_map = {
                                'n': 10, 't': 9, 'r': 13, '0': 0,
                                '\\': 92, '\'': 39, '"': 34,
                                'a': 7, 'b': 8, 'f': 12, 'v': 11,
                            }
                            if len(inner) == 2 and inner[1] in escape_map: return escape_map[inner[1]]
                            if len(inner) >= 2 and inner[1] == 'x': return int(inner[2:], 16)
                        return ord(inner)
                    except: self.at.error("interpreter", "failed to understand character "+k)
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
                if k == "__t_complain": return 0 # may not be a var yet
                if k == "__t_errcode": return 0 # no error code set
                return self.at.error("interpreter", "failed to parse '"+k+"' in '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
            elif impl[pos+1].tostring()=="=":
                varname = impl[pos].tostring()
                parsed_value: float|int = await process_expression(impl, pos+2,end)
                if parsed_value is None: 
                    self.at.error("interpreter", "failed to parse right hand side at '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
                if varname in self.vars and self.vars[varname].type==FLOAT_TYPE: parsed_value = float(parsed_value)
                else: parsed_value = int(parsed_value)
                local_vars[varname] = parsed_value
            elif impl[pos+1].tostring()[0] in "+-*/<>=!^|&%":
                op = impl[pos+1].tostring()
                v1 = await process_expression(impl,pos,pos)
                if(op=="&" and impl[pos+2].tostring()=="&"): op = "&&"; pos += 1
                if(op=="|" and impl[pos+2].tostring()=="|"): op = "||"; pos += 1
                v2 = await process_expression(impl,pos+2,pos+2)
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
                if op=="&&": return 1 if v1 and v2 else 0
                if op=="||": return 1 if v1 or v2 else 0
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
                if callee is None and candidate_name not in ["printf", "malloc", "realloc", "free", "ptr_memzero", "memcpy", "strlen", "memcmp", "fopen", "fclose", "fgets", "sqrt", "sin", "cos", "pos", "exp", "tan", "atan", "pow", "getchar"]:
                    self.at.error("interpreter", "failed to interpret C function '"+candidate_name+"' in '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
                gathered_args: list[str] = list()
                gathered_args_by_pointer: list[bool] = list()
                pos = pos+2
                prev_pos = pos
                last_arg_name: str = ""
                by_pointer: bool = False
                values: list[int|float] = list()
                depth = 0
                while pos<=end:
                    # TODO: this skips operations within memcpy
                    tok = impl[pos]
                    if (tok.tostring()=="," or tok.tostring()==")") and depth==0:
                        if last_arg_name:
                            gathered_args.append(last_arg_name)
                            gathered_args_by_pointer.append(by_pointer)
                            last_arg_name = ""
                            by_pointer = False
                        processed = await process_expression(impl, prev_pos, pos-1)
                        if processed is None:
                            if gathered_args: del gathered_args[-1]
                            if gathered_args_by_pointer: del gathered_args_by_pointer[-1]
                        else: values.append(processed)
                        prev_pos = pos+1
                        if tok.tostring()==")": break
                    elif tok.tostring() == "&" and depth==0:
                        by_pointer = True
                        prev_pos = pos+1
                    # elif tok.tostring()[0] in "([":
                    #     self.at.error("interpreter", "the C interpreter does not allow complicated function arguments '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
                    else:
                        if tok.tostring()=="(": depth += 1
                        elif tok.tostring()==")" and depth: depth -= 1
                        else: 
                            if by_pointer: assert not last_arg_name
                            last_arg_name = tok.tostring()
                    pos += 1
                if pos!=end: self.at.error("malformed smollC", "call parenthesis closed prematurely for '"+candidate_name+"' at "+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)])+"'")
                if callee is None: # in case we have overlapping names
                    if candidate_name == "malloc":
                        if len(values)!=1: self.at.error("malformed smollC", "'malloc' requires one argument")
                        if not isinstance(values[0],int): self.at.error("malformed smollC", "'malloc' requires an integer argument")
                        ret = memory.alloc(values[0])
                        memory.must_free.append(ret)
                        return ret

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
                        ret = memory.realloc(values[0], values[1])
                        memory.must_free.append(ret)
                        return ret
                    
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

                    if candidate_name == "fopen":
                        if len(values)!=2 and len(values)!=1: self.at.error("malformed smollC", "'fopen' requires one or two arguments")
                        if not isinstance(values[0], int): self.at.error("malformed smollC", "non-cstr argument to 'fopen'")
                        if len(values)!=1 and not isinstance(values[1], int): self.at.error("malformed smollC", "non-cstr argument to 'fopen'")
                        true_args = [memory.as_cstr(val) for val in values]
                        return memory.register_foreign(open(*true_args), "file "+true_args[0])
                    
                    if candidate_name == "fclose":
                        if len(values)!=1: self.at.error("malformed smollC", "'fclose' requires one argument")
                        if not isinstance(values[0], int): self.at.error("malformed smollC", "non-int argument to 'fclose'")
                        ret = memory.close_foreign(values[0])
                        if not ret: self.at.error("interpreter", "'fclose' tried to close non-allocated or already freed resource")
                        return None

                    if candidate_name == "fgets":
                        if len(values) != 3: self.at.error("malformed smollC", "'fgets' requires three arguments")
                        if not isinstance(values[0], int): self.at.error("malformed smollC", "non-integer buffer argument to 'fgets'")
                        if not isinstance(values[1], int): self.at.error("malformed smollC", "non-integer size argument to 'fgets'")
                        if not isinstance(values[2], int): self.at.error("malformed smollC", "non-integer stream argument to 'fgets'")
                        buf_addr = values[0]
                        n = values[1]
                        file_addr = values[2]
                        if buf_addr == 0: self.at.error("interpreter", "undefined behavior: 'fgets' buffer is a null pointer")
                        if n <= 0: self.at.error("interpreter", "undefined behavior: 'fgets' called with n <= 0")
                        if file_addr == 0: self.at.error("interpreter", "undefined behavior: 'fgets' stream is a null pointer")
                        f = memory.get_foreign(file_addr)
                        if f is None: self.at.error("interpreter", "'fgets' called with invalid or already-closed stream")
                        chars = []
                        for _ in range(n - 1):
                            ch = f.read(1)
                            if not ch: break # EOF
                            chars.append(ch)
                            if ch == '\n': break # stop after newline, keeping it
                        if not chars: return 0 # EOF
                        encoded = ''.join(chars).encode('utf-8')
                        if buf_addr + len(encoded) + 1 > memory.size:
                            self.at.error("interpreter", "'fgets' would write past the end of emulated memory")
                        memory.contents[buf_addr : buf_addr + len(encoded)] = encoded
                        memory.contents[buf_addr + len(encoded)] = 0   # null terminator
                        return buf_addr

                    if candidate_name == "sqrt":
                        if len(values) != 1: self.at.error("malformed smollC", "'sqrt' requires one argument")
                        if not isinstance(values[0], float): self.at.error("malformed smollC", "non-float argument to 'sqrt'")
                        return values[0]**0.5

                    if candidate_name == "pow":
                        if len(values) != 2: self.at.error("malformed smollC", "'pow' requires two arguments")
                        if not isinstance(values[0], float): self.at.error("malformed smollC", "non-float argument to 'pow'")
                        if not isinstance(values[0], float): self.at.error("malformed smollC", "non-float argument to 'pow'")
                        return values[0]**values[1]

                    if candidate_name == "cos":
                        if len(values) != 1: self.at.error("malformed smollC", "'cos' requires one argument")
                        if not isinstance(values[0], float): self.at.error("malformed smollC", "non-float argument to 'cos'")
                        return math.cos(values[0])

                    if candidate_name == "sin":
                        if len(values) != 1: self.at.error("malformed smollC", "'sin' requires one argument")
                        if not isinstance(values[0], float): self.at.error("malformed smollC", "non-float argument to 'sin'")
                        return math.sin(values[0])

                    if candidate_name == "tan":
                        if len(values) != 1: self.at.error("malformed smollC", "'tan' requires one argument")
                        if not isinstance(values[0], float): self.at.error("malformed smollC", "non-float argument to 'tan'")
                        return math.tan(values[0])

                    if candidate_name == "asin":
                        if len(values) != 1: self.at.error("malformed smollC", "'asin' requires one argument")
                        if not isinstance(values[0], float): self.at.error("malformed smollC", "non-float argument to 'asin'")
                        return math.asin(values[0])

                    if candidate_name == "acos":
                        if len(values) != 1: self.at.error("malformed smollC", "'acos' requires one argument")
                        if not isinstance(values[0], float): self.at.error("malformed smollC", "non-float argument to 'acos'")
                        return math.acos(values[0])

                    if candidate_name == "getchar":
                        if len(values) != 0: self.at.error("malformed smollC", "'getchar' requires no arguments")
                        if is_lsp: return -1  # return EOF 
                        ch = sys.stdin.read(1)
                        if asyncio.iscoroutine(ch):
                            ch = await ch
                        if not ch: return -1  # EOF
                        return ord(ch)

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
                

                if not callee:
                    self.at.error("interpreter", "failed to interpret C function '"+candidate_name+"' in '"+" ".join([impl[i].tostring() for i in range(pos,end+1)])+"'")
                if recursion_budget<=1 and self.force_not_inline:
                    self.at.error("interpreter", "recursion budget reached at: "+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)]))
                if callee.functor_var_name is not None: # this is a functor variable
                    varname = callee.functor_var_name
                    varvalue = local_vars.get(varname, None)
                    if varvalue is None: self.at.error("interpreter", "failed to retrieve a local functor: "+varname)
                    assert varvalue is not None
                    callee = memory.get_foreign(varvalue)
                    if callee is None: self.at.error("interpreter", "failed to retrieve a local functor: "+varname)
                retcode = await callee.interpret(values, memory, recursion_budget-1 if self.force_not_inline else recursion_budget) # may modify values
                for ismut, value, k in zip(gathered_args_by_pointer, values, gathered_args):
                    if ismut: local_vars[k] = value
                return retcode
            else:
                self.at.error("interpreter", "failed to interpret C code: "+" ".join([impl[i].tostring() for i in range(expr_pos,end+1)]))
        
        async def process_block(impl: list["Token"], pos: int, npos: int):
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
                    if impl[pos].tostring()!="{": self.at.error("malformed smollC", "The use of brackets is mandatory in conditions at "+" ".join([impl[i].tostring() for i in range(pos, npos+1)])+"'")
                    depth = 1
                    endpos = pos
                    while depth:
                        endpos += 1
                        if endpos>npos: self.at.error("malformed smollC", "Unclosed code block.")
                        if impl[endpos].tostring()=="{": depth += 1
                        if impl[endpos].tostring()=="}": depth -= 1
                    while True:
                        condition = await process_expression(impl, cond_start, cond_end)
                        if not condition: break
                        ret = await process_block(impl, pos+1, endpos-1)
                        if ret=="break": break
                        if ret=="return" or ret=="failure": return ret
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
                    condition = await process_expression(impl, pos+2, endpos-1)
                    assert condition is not None
                    pos = endpos+1
                    if pos>npos: self.at.error("malformed smollC", "Missing 'if' code body.")
                    if impl[pos].tostring()!="{": self.at.error("malformed smollC", "The use of brackets is mandatory in conditions at "+" ".join([impl[i].tostring() for i in range(pos, npos+1)])+"'")
                    depth = 1
                    endpos = pos
                    while depth:
                        endpos += 1
                        if endpos>npos: self.at.error("malformed smollC", "Unclosed code block.")
                        if impl[endpos].tostring()=="{": depth += 1
                        if impl[endpos].tostring()=="}": depth -= 1
                    if condition:
                        ret = await process_block(impl, pos+1, endpos-1)
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
                            ret = await process_block(impl, pos+1, endpos-1)
                            if ret: return ret
                        pos = endpos+1
                    prev_pos = pos
                    continue
                if impl[pos].tostring()==";":
                    if pos==prev_pos+2 and impl[prev_pos].tostring()=="goto":
                        if impl[pos-1].tostring() in "__t_return": return "return"
                        if impl[pos-1].tostring() == "__t_failure":  return "failure"
                        self.at.error("interpreter", "cannot goto arbitrary C position 'goto "+impl[pos-1].tostring()+"'")
                    await process_expression(impl, prev_pos, pos-1)
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
            try:
                evaluated = eval(call_text)
                if inspect.isawaitable(evaluated):
                    evaluated = await evaluated
            except ExpectedException as e:
                err_code = err_code_table.get("\""+str(e)+"\"", 1)
                return err_code
            except Exception as e:
                self.at.error("interpreter", "the VM failed with error "+str(e)+" for command: "+call_text)
            if not isinstance(evaluated, list): evaluated = []
            if len(evaluated)!=len(args)-input_args:
                self.at.error("interpreter", "the VM command returned a different number of values than the original")
            values[input_args:] = evaluated
            ret = None
        else: 
            ret = await process_block(self.implementation, 0, len(self.implementation)-1)
            if ret=="failure":
                for defer in reversed(self.returned_defers): await process_block(defer, 0, len(defer)-1)
                values = _arg_values
                for pos in range(input_args, len(values)):
                    if self.vars[args[pos]].type==FLOAT_TYPE: 
                        values[pos] = 0.0
                        continue
                    values[pos] = 0
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
            for defer in reversed(self.defers): await process_block(defer, 0, len(defer)-1)
        self.can_try_interpreter = True
        return local_vars.get("__t_errcode", 0)
            
    def transpile(self, for_inlining=False) -> str:
        if self.never_implement: return ""
        if not self.needs_failure_mode and self.force_not_inline: self.needs_failure_mode = self.at
        ret_body_start = ""
        ret_body_end = ""
        arg_code = ""
        if not for_inlining:
            for arg in self.args:
                # other args are just class alignment
                arg_type_builtin = self.vars[arg].type.builtin
                if arg_type_builtin: 
                    if arg_code: arg_code += ", "
                    if self.vars[arg].immutable: arg_code += arg_type_builtin+" "+arg
                    else: 
                        tmp = create_temp()
                        arg_code += arg_type_builtin+"* "+tmp
                        ret_body_start += arg_type_builtin+" "+arg+"=*"+tmp+";\n  "
                        ret_body_end += "*"+tmp+"="+arg+";\n  "
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
        if not for_inlining:
            ret = ("static inline __attribute__((always_inline)) " if doinline else "")+("int " if self.needs_failure_mode else "void ")+self.monomorphic_name+"("+arg_code+") {\n  "
            ret += ret_body_start
        for var, val in self.vars.items():
            if var in self.args: continue
            if val.type.builtin and not val.name in self.used_globals: ret += val.type.builtin+" "+var+"=0;\n  "
            # non-built-ins are theoretical constructs only
        if self.needs_failure_mode: ret += "int __t_errcode=0;\n  "
        if self.has_any_complaint or self.needs_failure_mode: ret += "int __t_complain=0;\n  "
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
            #ret += "\n  goto __t_final;" # skip failure handling
            ret += "\n  __t_failure:"
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
            ret += "\n  goto __t_skip_returns;"
            if any(token.tostring()=="__t_return" for token in self.implementation):
                ret += "__t_return:\n  "
            # set return values if needed
            ret += ret_body_end
            ret += "\n  __t_skip_returns:"
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
            if not for_inlining: ret += "\n  return __t_errcode;\n}"
        else:
            if any(token.tostring()=="__t_return" for token in self.implementation):
                ret += "__t_return:\n  "
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
        self.cached: Optional[list[str]] = None # do not normally use - onlly proper usage is for macros to tokenize
        self.expanded: Optional["Token"] = None

    def open(self):
        if self.cached: return self.cached
        return open(self.path, "r")

class Token:
    def __init__(self, text, file: File, row, col):
        self.text = text
        self.file = file
        self.row = row
        self.col = col
    def starts(self): return self.text==START_TOKEN
    def ends(self): return self.text == END_TOKEN
    def is_string(self): return len(self.text)>=2 and self.text[0]=="\"" and self.text[len(self.text)-1]=="\""
    def is_char(self): return len(self.text)>=2 and self.text[0]=="'" and self.text[len(self.text)-1]=="'"
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
                printid("function")
                printid(os.path.abspath(self.file.path))
                print(self.row)
                print(self.col)
                print(len(self.text))
                # defined at
                printid(os.path.abspath(at.file.path))
                print(at.row)
                print(at.col)
                # message (may span multiple lines))
                printid(errtype+" error: "+message+" "+(raason_message+" "+(reason.file.resolved_path+" " if reason.file!=self.file else "")+"line "+str(reason.row)  if reason else ""))
                if suggestions:
                    printid("    with alternatives:")
                    for suggestion in suggestions:
                        if "(" in suggestion: 
                            suggestion_splits = suggestion.split("defined in")
                            printid("```rust\n"+suggestion_splits[0]+"\n```")
                            #if len(suggestion_splits)>1: print("defined in "+suggestion_splits[1])
                        else: printid("\n    - "+suggestion)
            if is_lsp and self.file.is_main_file and errtype=="safety": return
            raise FatalException


        print(f"{PURPLE}{errtype} error: {message}{RESET}")
        if suggestions:
            print("    alternatives")
            for suggestion in suggestions:
                print("    -", suggestion)
        try:
            f = open(self.file.resolved_path, "r", encoding="utf-8")
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
                f = open(reason.file.resolved_path, "r", encoding="utf-8")
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
        xrx = x.vars[rx]
        yry = y.vars[ry]
        if xrx.type!=yry.type: return False
        if xrx.immutable and not yry.immutable: return False
        #if xrx.type.is_buffer_of!=yry.type.is_buffer_of: return False
        #if xrx.isprivate!=yry.isprivate: return False
    return True
def _select_call(file: File, impl: ImplementedType, method: UnionType, argument_vars: list[Variable], error_token: Token, out_format=Optional[list[Variable]]) -> ImplementedType:
    available_types: list[ImplementedType] = list()
    alternative_list: list[ImplementedType] = list()
    for variation in method.variations:
        if variation in available_types: continue
        if out_format is not None and len(out_format)!=len(variation.rets): continue
        if len(argument_vars)<len(variation.args):
            vars: list[Variable] = list()
            for effect_var in variation.effect_names: 
                effect_var_prefix = effect_var+"__"
                for var in impl.vars.values():
                    if var.name==effect_var or var.name.startswith(effect_var_prefix): vars.append(var)
                if len(vars)+len(argument_vars)>=len(variation.args): break
            vars.extend(argument_vars)
        else: vars = argument_vars
        if len(variation.args)!=len(vars): continue
        variation_args = variation.args
        if out_format is not None:
            variation_args = variation_args+variation.rets
            vars = vars+out_format
        # most signature mistakes will be from mutablity or simple type errors, so have a preferred list for quickly resolving such issues
        if not variation in alternative_list: alternative_list.append(variation)

        is_available = True
        for i in range(len(vars)):
            # we can allow lowering buffers to generic any
            vvva = variation.vars[variation_args[i]]
            vit = vars[i].type
            if vit!=vvva.type and vit.is_buffer_of is None:
                is_available = False
                break
            if vit!=vvva.type and vvva.type.is_buffer_of!=ANY_TYPE:
                is_available = False
                buffer1 = vit.is_buffer_of
                buffer2 = vvva.type.is_buffer_of
                if buffer1 is not None and buffer2 is not None and match_structure_with(buffer1, buffer2):
                    is_available = True
                if buffer1 in NONE_OR_ANY and buffer2 not in NONE_OR_ANY:
                    is_available = False
                if not is_available: break
            if not vvva.immutable and vars[i].immutable:
                is_available = False
                break
        # first check for pointer mismatches (this is a safety error)
        if not is_available: continue
        for varpos, var in enumerate(vars):
            if var.type!=POINTER_TYPE: continue
            var_pointer_type = impl.get_pointer_type(var)
            other_pointer_type = variation.get_pointer_type(variation.vars[variation_args[varpos]])
            if var_pointer_type not in NONE_OR_ANY and other_pointer_type not in NONE_OR_ANY and not match_structure_with(var_pointer_type, other_pointer_type):
                is_available = False
                # TODO: make a proper is_available check, that also accounts for internal pointer types but allows structural equivalence
                # is_available = len(var_pointer_type.args)==len(other_pointer_type.args)
                # for arg1, arg2 in zip(var_pointer_type.args, other_pointer_type.args):
                #     if var_pointer_type
                if not is_available: break
        if is_available: available_types.append(variation)
    if len(available_types)==0:
        same_shapes: list[ImplementedType] = list()
        for variation in alternative_list:
            # bring effects here again
            if len(argument_vars)<len(variation.args):
                vars: list[Variable] = list()
                for effect_var in variation.effect_names: 
                    for var in impl.vars.values():
                        if var.name==effect_var or var.name.startswith(effect_var+"__"): vars.append(var)
                    if len(vars)+len(argument_vars)>=len(variation.args): break
                vars.extend(argument_vars)
            else: vars = argument_vars
            variation_args = variation.args
            if out_format is not None:
                variation_args = variation_args+variation.rets
                vars = vars+out_format
            # most signature mistakes wi
            # check variable types without any permissions
            almost_similar = True
            for i in range(len(vars)):
                if vars[i].type!=variation.vars[variation_args[i]].type:
                    almost_similar = False
                    break
            if almost_similar: same_shapes.append(variation)
        if same_shapes: alternative_list = same_shapes
        out_format_signature = "any" if out_format is None else signature_like(out_format, impl)
        #if len(method.variations)<5: alternative_list = method.variations
        if not alternative_list: alternative_list = method.variations
        if len(alternative_list)==1: 
            available_types = alternative_list
            error_token.error("type", "could not resolve any call for '"+("" if "__" in method.name else method.name)+"("+signature_like(argument_vars, impl)+") -> "+out_format_signature+"' even though there is only one option", suggestions=[t.signature() for t in alternative_list])
        else: error_token.error("type", "could not resolve any call for '"+("" if "__" in method.name else method.name)+"("+signature_like(argument_vars, impl)+") -> "+out_format_signature+"'", suggestions=[t.signature() for t in alternative_list])#+([] if alternative_list==method.variations else ["or one of "+str(len(method.variations)-len(alternative_list))+" other overloads"]))
    if len(available_types)>1:
        out_format_signature = "any" if out_format is None else signature_like(out_format, impl)
        error_token.error("type", "more than one conflicting calls '"+("" if "__" in method.name else method.name)+"("+signature_like(argument_vars, impl)+") -> "+out_format_signature+"'", suggestions=[t.signature()+(" defined in "+t.at.file.path+" line "+str(t.at.row) if t.at else " from compiler definitions") for t in available_types])

    callee: ImplementedType = available_types[0]
    if is_lsp and error_token.file.is_main_file:
        at = callee.at if callee.at else error_token
        print("---")
        # position in processed file
        printid("function")
        printid(os.path.abspath(error_token.file.resolved_path))
        print(error_token.row)
        print(error_token.col)
        print(len(error_token.text))
        # defined at
        printid(os.path.abspath(at.file.resolved_path))
        print(at.row)
        print(at.col)
        # message (may span multiple lines))
        if callee.doc: print("**"+strip_quotes(callee.doc[0])+"**")
        if len(callee.doc)>1: print("\n"+"\n".join(strip_quotes(doc) for doc in callee.doc[1:]))
        printid("```rust\n"+callee.signature()+"\n```")#+(" defined in "+at.file.path if callee.at else " from compiler definitions"))
        spawned_error_codes = callee.gather_spawned_error_codes(set())
        if len(spawned_error_codes): 
            if callee.needs_failure_mode: printid("Potential errors:\n")
            else: printid("No failing errors, but can catch these intercepted ones:\n")
        for code in spawned_error_codes: printid(str(code)+". "+err_code_list[code][1:-1]+"\n")
        if callee.returned_defers: printid("\nReturned values defer use of the following functions:")
        for defer in callee.returned_defers: printid("```rust\n"+code_summary(defer,callee)+"```")
        singletons = [dep for dep in callee.dependent_implementations if dep.has_retrieved_singleton]
        if singletons: printid("\nThe following singletons are initialized:")
        for singleton in singletons: printid("```rust\n"+singleton.signature()+"\n```")
        if callee.VM: printid("*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `"+callee.VM[1:-1]+"`*")
    return callee

def resolve_call(file: File, impl: ImplementedType, method: UnionType, vars: list[Variable], error_token: Token, out_format: Optional[list[Variable]]=None, _callee:Optional[ImplementedType]=None) -> list[Variable]:
    if ANY_TYPE in method.variations:
        return vars
    if CALL_TYPE in method.variations:
        if len(vars)==0 or vars[0].type.is_functor_of is None:
            error_token.error("type", "only a functor followed by arguments can be 'call'-ed here but got '"+signature_like(vars, impl)+"'")
        functor_var = impl.stabilize([vars[0]])[0]
        functor_method, pending_close_bracket = convert_functor_to_method_type(impl, functor_var, error_token)
        union_type = UnionType(method.name, at=method.at)
        union_type.variations.append(functor_method)
        ret_all = resolve_call(file, impl, union_type, vars[1:], error_token, out_format)
        if pending_close_bracket: impl.implementation.append(CODEWORD_RBRACKET)
        return ret_all
    
    if ABSTRACT_TYPE in method.variations:
        if len(vars)!=1 or vars[0].type.is_functor_of is None:
            error_token.error("type", "only a functor can 'abstract'-ed here but got '"+signature_like(vars, impl)+"'")
        functor_var = impl.stabilize([vars[0]])[0]

        tmp = UnionType(functor_var.type.is_functor_of.name, at=functor_var.type.is_functor_of.at)
        tmp.variations.append(functor_var.type.is_functor_of)
        return convert_method_to_functor(impl, tmp, error_token, skip_literals=True, from_name=functor_var.name)
    
    if VARNAME_TYPE in method.variations:
        prefix_len = longest_common_prefix_len([v.name for v in vars])
        if prefix_len: 
            current = vars[0].name[:prefix_len]
            if len(current)>2 and current.endswith("__"): current = current[:-2]
        else:
            current = ""
            for ret in vars:
                if current: current += ","
                current += ret.name
            current = "("+current+")"
        current = "\""+current+"\""
        tmp: str|None = global_cstr2var.get(current, None)
        variable = Variable(tmp if tmp else create_temp(), CSTR_TYPE, token=error_token)
        if tmp is None: 
            global_cstr2var[current] = variable.name
            global_var2cstr[variable.name] = current
        return [variable]
    
    if UNSAFE_DEREF_TYPE in method.variations:
        if len(vars)!=6 or vars[1].type.is_buffer_of is None or vars[0].type!=POINTER_TYPE:
            error_token.error("type", "only a pointer followed by a buffer type indicating the data can be unsafely deferred, but got '"+signature_like(vars, impl)+"'")
        return process_deref(file, None, [vars[0]], impl, error_token, unsafe_pointer_type=vars[1].type.is_buffer_of)[1]
    
    if UNSAFE_COPY_TYPE in method.variations:
        if len(vars)<2 or vars[0].type!=POINTER_TYPE:
            error_token.error("type", "only a pointer followed by at least one value can be unsafely copied, but got '"+signature_like(vars, impl)+"'")
        var = impl.stabilize([vars[0]])[0]
        rets = vars[1:]
        err_token = error_token
        rets = impl.stabilize(rets)
        ret = rets
        if var is not None and var.isprivate: err_token.error("type", "cannot set to immutable class field: '"+pretty_name(var.name)+"'")
        if var.type!=POINTER_TYPE: err_token.error("type", "you can set a value only to an existing pointer's memory contents with '"+op_name+"' but found '"+signature_like(rets)+"'")
        if var.stabilized_name() in impl.invalidated: err_token.error("safety", "this pointer could have been invalidated by a previous call; re-obtain it from its buffer", reason=impl.invalidated[var.stabilized_name()], raason_message="due to")
        if var.immutable: err_token.error("type", "cannot move data to an immutable pointer", suggestions=["make it 'mut'", "obtain it with '&&' or 'mutget' from a buffer if you are working with std", "remove 'const' qualitifier"])
        impl.implementation.extend([
            CODEWORD_IF,
            CODEWORD_LPAR,
            CODEWORD_NOT,
            var,
            CODEWORD_RPAR,
            CODEWORD_LBRACKET,
        ])
        if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: error_token.error("safety", "the matching 'try' has already handled a different failure")
        try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
        if try_var is not None:
            impl.has_any_complaint = True
            impl.implementation.extend([
                CODEWORD_TCOMPLAIN,
                CODEWORD_EQUALS,
                CODEWORD_TWO,
                CODEWORD_SEMICOLON,
                CODEWORD_RBRACKET,
                CODEWORD_ELSE,
                CODEWORD_LBRACKET
            ])
            impl.spawned_error_codes.add(2)
            impl.count_handled_tries[-1] += 1
        else:
            # non-allocation check is mandatory unfortunately
            if debug_mode:
                text = "\\033[31mmemory error\\033[0m null pointer\\n"
                text += "\\033[31mat\\033[0m "+err_token.file.path.replace('"','\\"')+" line "+str(err_token.row)+" column "+str(err_token.col)+"\\n"
                impl.implementation.extend([
                    CODEWORD_PRINTF,
                    CODEWORD_LPAR,
                    CodeWord('"%s"'),
                    CODEWORD_COMMA,
                    CodeWord('"'+text.replace('"', '\\"')+'"'),
                    CODEWORD_RPAR,
                    CODEWORD_SEMICOLON,
                ])
            impl.implementation.extend([
                CODEWORD_TERRCODE,
                CODEWORD_EQUALS,
                CODEWORD_TWO,
                CODEWORD_SEMICOLON
            ])
            impl.spawned_error_codes.add(2)
            impl.implementation.extend([
                CODEWORD_GOTO,
                CODEWORD_TFAILURE,
                CODEWORD_SEMICOLON,
                CODEWORD_RBRACKET
            ])
            impl.needs_failure_mode = error_token

        progress = 0
        for r in ret:
            mem_size = r.type.memory_size() if r.type.builtin else 0
            if not mem_size: continue
            impl.implementation.extend(
                [CodeWord("memcpy"), CODEWORD_LPAR]
                +[var]
                + ([CODEWORD_ADD, create_code_word_cached(str(progress))] if progress else [])
                + [CODEWORD_COMMA, CODEWORD_AMP]
                + [impl.vars[r.stabilized_name()]]
                + [CODEWORD_COMMA, create_code_word_cached(str(mem_size))]
                + [CODEWORD_RPAR, CODEWORD_SEMICOLON]
            )
            if impl.vars[r.stabilized_name()].type==POINTER_TYPE:
                for other_var in impl.get_required_accompany(var):
                    for source_var in impl.get_required_accompany(impl.vars[r.stabilized_name()]):
                        impl.add_required_accompany(other_var, source_var)
                    impl.add_required_accompany(other_var, impl.vars[r.stabilized_name()])
                impl.add_required_accompany(var, impl.vars[r.stabilized_name()])
            progress += mem_size
        if try_var is not None: impl.implementation.append(CODEWORD_RBRACKET)
        return [var]

    if DEBUG_TYPE in method.variations:
        if not is_lsp: print(signature_like(vars, impl))
        return vars
    if RESOLVE_LITERAL_TYPE in method.variations:# and len(vars)==1 and vars[0].type.is_literal_of is not None:
        new_vars = list()
        for var in vars:
            if not var.type.is_literal_of:
                new_vars.append(var)
                continue
            variable = Variable(create_temp(), var.type.is_literal_of, token=error_token)
            literal_method = var.type
            if literal_method.is_literal_of==CSTR_TYPE:
                current = literal_method.at.text
                #if is_lsp and error_token.file.is_main_file: print_lsp_literal(error_token, "**literal**\n\ncstr defined to be "+literal_method.at.text)
                tmp: str|None = global_cstr2var.get(current, None)
                variable = Variable(tmp if tmp else create_temp(), CSTR_TYPE, token=error_token)
                if tmp is None: 
                    global_cstr2var[current] = variable.name
                    global_var2cstr[variable.name] = current
                impl.vars[variable.name] = variable
                impl.used_globals.add(variable.name)
                new_vars.append(variable)
            elif literal_method.is_literal_of==ANY_TYPE:
                var = create_temp()
                for ret in literal_method.rets:
                    new_var = Variable(var+ret, literal_method.vars[ret].type)
                    impl.vars[new_var.name] = new_var
                    new_vars.append(new_var)
            elif literal_method.is_literal_of!=BLANK_TYPE:
                variable = Variable(create_temp(), literal_method.is_literal_of, token=error_token)
                impl.vars[variable.name] = variable
                impl.implementation.extend([
                    variable,
                    CODEWORD_EQUALS,
                    create_code_word_cached(literal_method.at.text),
                    CODEWORD_SEMICOLON
                ])
                new_vars.append(variable)
        if is_lsp and error_token.file.is_main_file: print_lsp_literal(error_token, "**type to value**\n\nConverts a tuple containing literal types, including the outcome of 'compt', to a local variable of type:\n```rust\n"+signature_like(new_vars, impl)+"\n```")
            
        return new_vars
    if SIZEOF_TYPE in method.variations:
        total_size = 0
        for var in vars:
            if var.type.builtin: total_size += var.type.memory_size()
        tmp = create_temp()
        var = Variable(tmp, UINT_TYPE, token=error_token)
        impl.vars[tmp] = var
        impl.implementation.extend([
            var,
            CODEWORD_EQUALS,
            create_code_word_cached(str(total_size)),
            CODEWORD_SEMICOLON
        ])
        return [var]
    if _callee is not None: callee = _callee
    else: callee = _select_call(file, impl, method, vars, error_token, out_format)
    for link in callee.linker:
        if link not in impl.linker: impl.linker.append(link)
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
    if callee==DEREF_TYPE:
        if len(vars)==1 and vars[0].type is POINTER_TYPE:
            return process_deref(file, None, vars, impl, error_token)[1]
        error_token.error("syntax", "can dereference only a pointer but got '"+signature_like(vars, impl)+"'")
    if callee==NOCATCH_TYPE:
        if impl.needs_failure_mode: error_token.error("safety", "there are potential errors that can occur up to here that have not been intercepted with `try`", reason=impl.needs_failure_mode, raason_message="due to")
        #return [TRUE_TYPE if impl.needs_failure_mode else FALSE_TYPE]
    if callee==FOR_COUNTER_TYPE:
        if not impl.for_counter: error_token.error("type", "you are not within a 'for' loop and so this cannot be called")
        return [impl.vars[impl.for_counter[-1]]]
        

    if callee==CAUGHT_TYPE:
        tmp = create_temp()
        var = Variable(tmp, CAUGHT_TYPE, token=error_token)
        impl.vars[tmp] = var
        if not impl.used_error_codes: error_token.error("safety", "there is nothing to catch up to here")
        impl.has_caught_used_error_codes = True
        if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: error_token.error("safety", "the matching 'try' has already handled a different failure")
        try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
        if try_var is None: error_token.error("safety", "you can only catch within a `try`, for example per `if exists error=compiler:catch() print cstr error`")
        else: impl.count_handled_tries[-1] += 1
        impl.implementation.extend([
            var,
            CODEWORD_EQUALS,
            CODEWORD_TCOMPLAIN,
            CODEWORD_SEMICOLON,
        ])
        impl.has_any_complaint = True
        impl.implementation.extend([
            try_var,
            CODEWORD_EQUALS,
            CODEWORD_LPAR,
            CODEWORD_TCOMPLAIN,
            CODEWORD_COMPARISON_EQUALS,
            CODEWORD_ZERO,
            CODEWORD_RPAR,
            CODEWORD_SEMICOLON,
        ])
        impl.implementation.extend([
            CODEWORD_TCOMPLAIN,
            CODEWORD_EQUALS,
            CODEWORD_ZERO,
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
                    if not val.immutable:
                        impl.implementation.extend([
                            impl.vars[v], 
                            CODEWORD_EQUALS,
                            CODEWORD_ZERO,
                            CODEWORD_SEMICOLON
                        ])

        if (not callee.vars[callee.args[varpos]].immutable) and (not callee.vars[callee.args[varpos]].isprivate) and callee.args[varpos] not in callee.refargs:
            defer_vars = {var for defer in impl.defers+impl.returned_defers for var in defer if isinstance(var, Variable)}
            defer_var_names = [r.stabilized_name() for r in defer_vars]
            v = var.stabilized_name()
            v_assignment = impl.get_assignment(v, defer_var_names)
            if v_assignment and v_assignment in defer_var_names and v not in defer_var_names:
                error_token.error("safety", "you are passing a pointer '"+pretty_name(v)+"' for mutation that has been obtained from a different pointer associated with a 'defer' '"+pretty_name(v_assignment)+"'", reason=impl.vars[v_assignment].token, suggestions=["create a 'ref' to the pointer just after resource allocation", "a common standard library pattern is 'buf=ref alloc(mut float[], 10)' before 'buf.resize 20'"], raason_message="should 'ref' the result of")
    
    # second, check that arguments that have been tied together are, indeed tied together
    if callee!=SAME_CONTENTS_TYPE:
        for arg_pos, arg in enumerate(callee.args):
            v = callee.vars[arg]
            if v.type!=POINTER_TYPE or callee.get_pointer_type(v) not in NONE_OR_ANY: continue
            dep = callee.follow_pointer_dependency(v)
            if dep is None: continue
            for arg_pos2, arg2 in enumerate(callee.args):
                dep2 = callee.vars[arg2]#callee.follow_pointer_dependency(callee.vars[arg2])
                if dep2 is None: continue
                if dep.name!=dep2.name: continue
                if arg_pos==arg_pos2 or callee.vars[arg2].type!=POINTER_TYPE: continue
                var1 = vars[arg_pos]
                var2 = vars[arg_pos2]
                typ1 = impl.get_pointer_type(var1)
                typ2 = impl.get_pointer_type(var2)
                if typ1==typ2: continue
                if typ1 in NONE_OR_ANY or typ2 in NONE_OR_ANY:
                    d1 = impl.follow_pointer_dependency(var1)
                    d2 = impl.follow_pointer_dependency(var2)
                    if d1 and d2 and (d1.name==d2.name or d1.name==var2.name or d2.name==var1.name): continue
                error_token.error("safety", "you are passing two independent pointers of different types '"+signature_like([var1], impl)+"' and '"+signature_like([var2],impl)+"' to arguments '"+pretty_name(arg)+"' and '"+pretty_name(arg2)+"' but these have been coupled inside the body of function '"+callee.signature()+"'")



    # TODO: we will now call the method, but we could also inline it in the future maybe
    tmp = create_temp()
    rets = list()
    if callee.needs_failure_mode:
        if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: error_token.error("safety", "the matching 'try' has already handled a different failure")
        try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
        if try_var is not None:
            impl.has_any_complaint = True
            impl.implementation.extend([
                CODEWORD_TCOMPLAIN,
                CODEWORD_EQUALS,
                CallPointer(callee),#CodeWord(callee.monomorphic_name),
                CODEWORD_LPAR,
            ])
        else:
            impl.implementation.extend([
                CODEWORD_TERRCODE,
                CODEWORD_EQUALS,
                CallPointer(callee),#CodeWord(callee.monomorphic_name),
                CODEWORD_LPAR,
            ])
            impl.needs_failure_mode = error_token
    else:
        impl.implementation.extend([
            CallPointer(callee),#CodeWord(callee.monomorphic_name),
            CODEWORD_LPAR,
        ])
    impl.used_error_codes.add(callee)
    for defer in callee.returned_defers:
        for i in range(len(defer)-3):
            if defer[i].tostring()=="__t_errcode" and defer[i+1].tostring()=="=" and defer[i+3].tostring()==";":
                impl.spawned_error_codes.add(int(defer[i+2].tostring()))
    for varpos, var in enumerate(vars):
        if var.type.builtin: 
            callee_arg = callee.vars[callee.args[varpos]]
            if callee_arg.immutable:
                impl.implementation.extend([var, CODEWORD_COMMA])
                continue
            #if impl.name=="mutget":
            #    print(var.name, var.isprivate, var.immutable)
            if var.isprivate: error_token.error("safety", "an immutable class field '"+pretty_name(vars[varpos].name)+"' would be modified by mutable '"+pretty_name(callee_arg.name)+"'", reason=callee.at)
            elif var.immutable: error_token.error("type", "an immutable variable '"+pretty_name(vars[varpos].name)+"' would be modified by mutable '"+pretty_name(callee_arg.name)+"'", reason=callee.at)
            impl.implementation.extend([CODEWORD_AMP, var, CODEWORD_COMMA])

    if callee.defers and callee.invalidate_types_on_defer:
        # if the called function has any defers, we know that it's complete and now we can kind of safely tell
        # whether it should invalidate the defers
        for p in callee.invalidate_types_on_defer:
            if p not in callee.invalidate_types_when_called:
                callee.invalidate_types_when_called.append(p)
        callee.invalidate_types_on_defer.clear()


    add_to_invalidators: set[Variable] = set()
    for invalid_type in callee.invalidate_types_when_called:
        for varname, val in impl.vars.items():
            if val.type.invalidated_by == invalid_type:# and not varname.endswith("__unsafe_ptr"):
                impl.invalidated[val.stabilized_name()] = error_token
                add_to_invalidators.add(val)
                
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
    # which have a known structure, with the pointers as the first return after the type.

    prefix_length = longest_common_prefix_len(callee.rets)
    #print(impl.name, callee.name, prefix, callee.rets)
    
    for ret_pos, ret in enumerate(callee.rets):
        varname = tmp+"__"+ret[prefix_length:]
        original = callee.vars[ret]
        variable = original.renamed_copy(varname, token=error_token)
        impl.vars[varname] = variable
        rets.append(variable)
        if variable.type.builtin: impl.implementation.extend([CODEWORD_AMP, variable, CODEWORD_COMMA])
        if original.type!=POINTER_TYPE: continue
        original_pointer_type = callee.get_pointer_type(original)
        if original_pointer_type is None or original_pointer_type==ANY_TYPE:
            original_pointer_dependency: Variable|None = callee.follow_pointer_dependency(original)
            if original_pointer_dependency is None or original_pointer_dependency==original: original_pointer_dependency = original
            if callee==SAME_CONTENTS_TYPE: assert original_pointer_dependency
            if original_pointer_dependency is not None:
                for varpos, varname in enumerate(callee.args):
                    if varname!=original_pointer_dependency.name: continue
                    impl.set_pointer_depedency(variable, vars[varpos])
                    found_dependency = True
                    # if impl.name=="push":
                    #     print(variable.name, " ~ ", vars[varpos].name)
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

    # we are now coming to the point where we bundle variables together
    # so that we are forced to be returned together
    all_rets = [impl.vars[tmp+"__"+ret[prefix_length:]] for ret in callee.rets]
    all_args = vars+all_rets
    callee_all_args = callee.args+callee.rets
    for a, ac in zip(all_args, callee_all_args):
        if a.type!=POINTER_TYPE: continue
        if callee.vars[ac].immutable and ac in callee.args and ac not in callee.rets: continue
        for r, rc in zip(all_args, callee_all_args):
            if r.type!=POINTER_TYPE: continue
            if callee.vars[rc].immutable and rc in callee.args and rc not in callee.rets: continue
            # t1 = impl.get_pointer_type(a)
            # t2 = impl.get_pointer_type(r)
            # if t1 is None or t2 is None or t1==ANY_TYPE or t2==ANY_TYPE or t1==t2 or t1 is POINTER_TYPE or t2 is POINTER_TYPE:
            #if callee.vars[ac] in callee.get_required_accompany(callee.vars[rc]):
            for accompany in impl.get_required_accompany(a):
                impl.add_required_accompany(r, accompany)
            impl.add_required_accompany(r, a)

    for var in add_to_invalidators:
        if not val.immutable:
            impl.implementation.extend([
                val, 
                CODEWORD_EQUALS,
                CODEWORD_ZERO,
                CODEWORD_SEMICOLON
            ])

    if callee.needs_failure_mode:
        if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: error_token.error("safety", "the matching 'try' has already handled a different failure")
        try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
        if try_var is not None:
            impl.implementation.extend([
                try_var,
                CODEWORD_EQUALS,
                CODEWORD_TCOMPLAIN,
                CODEWORD_SEMICOLON,
            ])

    if callee.needs_failure_mode and impl.is_parsing_a_try:
        if impl.is_parsing_a_try[-1] is None: error_token.error("safety", "the 'try' mechanism has already matched one function call")
        impl.count_handled_tries[-1] += 1

    if callee==ASSERT_SAME_TYPE:
        if impl.is_parsing_a_try: error_token.error("safety", "intercepting the compiler's pointer equality assertion violates preconditions that cannot be recovered during runtime")

    if callee==ASSERT_SAME_TYPE: 
        # it is imperative that we insert this assignment here:
        # we have just actualled called the method but need a
        # window to transfer pointer values, in case those are
        # used by defers
        impl.assign(vars[0].name, [vars[1]], error_token, perform_immutability_checks=False)

    if callee.needs_failure_mode and not impl.is_parsing_a_try:
        if impl.is_parsing_a_defer: error_token.error("safety", "cannot call a function with unhandled failure within 'defer'", reason=callee.at, suggestions=["usa only safe code", "add a 'try'"])
        impl.implementation.extend([
            CODEWORD_IF,
            CODEWORD_LPAR,
            CODEWORD_TERRCODE,
            CODEWORD_RPAR,
            CODEWORD_LBRACKET,
        ])
        if debug_mode:
            text = "\\033[31mat\\033[0m "+error_token.file.path.replace('"','\\"')+" line "+str(error_token.row)+" column "+str(error_token.col)+"\\n"
            text +="   unhandled error from "+callee.signature()+"\\n"
            impl.implementation.extend([
                CODEWORD_PRINTF,
                CODEWORD_LPAR,
                CodeWord('"%s"'),
                CODEWORD_COMMA,
                CodeWord('"'+text.replace('"', '\\"')+'"'),
                CODEWORD_RPAR,
                CODEWORD_SEMICOLON,
            ])
        impl.implementation.extend([
            CODEWORD_GOTO,
            CODEWORD_TFAILURE,
            CODEWORD_SEMICOLON,
            CODEWORD_RBRACKET
        ])
        impl.needs_failure_mode = error_token

    # transfer dependent assignments from inputs to outputs on callee
    for ret in callee.rets:
        tmp_name = tmp+"__"+ret[prefix_length:]
        for argpos, arg in enumerate(callee.args):
            if callee.get_assignment(ret, [arg]) is not None:
                impl._assignment_graph = None
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
    if callee==UNSAFE_EFFECTS_TYPE:
        impl.dependent_implementations = [dep for dep in impl.dependent_implementations if not dep.has_retrieved_singleton]
        return []
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
            if isinstance(segment, CallPointer):
                if segment.callee.functor_var_name is not None:
                    if segment.callee.functor_var_name in callee.rets:
                        next_segment = ImplementedType("", at=error_token)
                        for a in segment.callee.__dict__:
                            setattr(next_segment, a, getattr(segment.callee, a))
                        new_functor_var_name = tmp+"__"+segment.callee.functor_var_name
                        next_segment.monomorphic_name = segment.callee.monomorphic_name.replace(")"+segment.callee.functor_var_name+")", ")"+new_functor_var_name+")")
                        next_segment.functor_var_name = new_functor_var_name
                        segment = CallPointer(next_segment)
                new_defer.append(segment)
                continue
            if segment.name[0] in symbols or not isinstance(segment, Variable) or (segment.name in global_var2cstr):
                new_defer.append(segment)
                continue
            v_name = segment.tostring()
            if v_name in callee.rets:
                v_name_tmp = tmp+"__"+v_name[prefix_length:]
                new_defer.append(impl.vars[v_name_tmp]) # we have already created this
                #if impl.vars[v_name_tmp].type is POINTER_TYPE:
                impl.accumulating_defers[-1][v_name_tmp] = error_token
                continue
            new_v = segment.renamed_copy(secondary_tmp+"__"+v_name, error_token)
            new_defer.append(new_v)
            impl.vars[new_v.name] = new_v
        for pos, segment in enumerate(new_defer):
            if not isinstance(defer, Variable): continue
            if segment.type.functor_var_name: print(segment.type.functor_var_name)
            if segment.type.functor_var_name is None or segment.type.functor_var_name not in callee.rets: continue
            ret_type = ImplementedType("", at=error_token)
            for a in segment.type.__dict__:
                setattr(ret_type, a, getattr(segment.type, a))
            new_functor_var_name = tmp+"__"+segment.type.functor_var_name
            ret_type.monomorphic_name = segment.type.monomorphic_name.replace(")"+segment.type.functor_var_name+")", ")"+new_functor_var_name+")")
            ret_type.functor_var_name = new_functor_var_name
            new_defer[pos] = Variable(segment.name, ret_type)

        impl.defers.append(new_defer)

    # at this point we have resolved everything succcessfully for normal functions
    # however, we need to port over pointer types from functors that may have missed the
    # associations
    # for i, ret in enumerate(rets):
    #     if i<len(rets)-2 and ret.type.is_buffer_of is not None and ret.type.is_buffer_of!=ANY_TYPE:
    #         found_type = impl.get_pointer_type(rets[i+1])
    #         if found_type is None or found_type==ANY_TYPE:
    #             impl.set_pointer_type(rets[i+1], ret.type.is_buffer_of)

    return rets

def process_deref(file: File, pos: int, ret: list[Variable], impl: ImplementedType, current_token: Token, explicit: bool=True, unsafe_pointer_type:Optional[ImplementedType]=None):
    ret = impl.stabilize(ret)
    if len(ret)!=1: 
        if not explicit: return pos, ret
        current_token.error("type", "can only deref a 'ptr' but got '"+signature_like(ret)+"'")
    if ret[0].type!=POINTER_TYPE:
        if not explicit: return pos, ret
        current_token.error("type", "can only deref a 'ptr' but got '"+signature_like(ret)+"'")
    if ret[0].stabilized_name() in impl.invalidated: current_token.error("safety", "this pointer could have been invalidated by a previous call; re-obtain it from its buffer", reason=impl.invalidated[ret[0].stabilized_name()])
    if unsafe_pointer_type is not None:
        pointer_type = unsafe_pointer_type
    else:
        pointer_type = impl.get_pointer_type(ret[0])
        if pointer_type is None: current_token.error("type", "there is no known type attached to the pointer to deref at this point")
        if pointer_type == ANY_TYPE: current_token.error("type", "cannot deref a pointer on 'any' data (this can be specialized)")
    assert pointer_type is not None
    new_vars = list()
    prefix = create_temp()+"__"
    progress = 0
    skip = 0
    # non-allocation check is mandatory unfortunately
    impl.implementation.extend([
        CODEWORD_IF,
        CODEWORD_LPAR,
        CODEWORD_NOT,
        ret[0],
        CODEWORD_RPAR,
        CODEWORD_LBRACKET,
    ])
    if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: current_token.error("safety", "the matching 'try' has already handled a different failure")
    try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
    if try_var is not None:
        impl.has_any_complaint = True
        impl.implementation.extend([
            CODEWORD_TCOMPLAIN,
            CODEWORD_EQUALS,
            CODEWORD_TWO,
            CODEWORD_SEMICOLON,
            CODEWORD_RBRACKET,
            CODEWORD_ELSE,
            CODEWORD_LBRACKET
        ])
        impl.spawned_error_codes.add(2)
        impl.count_handled_tries[-1] += 1
    else:
        if debug_mode:
            text = "\\033[31mmemory error\\033[0m null pointer\\n"
            text += "\\033[31mat\\033[0m "+current_token.file.path.replace('"','\\"')+" line "+str(current_token.row)+" column "+str(current_token.col)+"\\n"
            impl.implementation.extend([
                CODEWORD_PRINTF,
                CODEWORD_LPAR,
                CodeWord('"%s"'),
                CODEWORD_COMMA,
                CodeWord('"'+text.replace('"', '\\"')+'"'),
                CODEWORD_RPAR,
                CODEWORD_SEMICOLON,
            ])
        impl.implementation.extend([
            CODEWORD_TERRCODE,
            CODEWORD_EQUALS,
            CODEWORD_TWO,
            CODEWORD_SEMICOLON
        ])
        impl.spawned_error_codes.add(2)
        impl.implementation.extend([
            CODEWORD_GOTO,
            CODEWORD_TFAILURE,
            CODEWORD_SEMICOLON,
            CODEWORD_RBRACKET
        ])
        impl.needs_failure_mode = current_token
    for ret_name in pointer_type.rets:
        r_var = pointer_type.vars[ret_name].renamed_copy(prefix+ret_name, current_token)
        new_vars.append(r_var)
        mem_size = r_var.type.memory_size() if r_var.type.builtin else 0
        impl.vars[r_var.name] = r_var
        if not mem_size: continue
        impl.implementation.extend(
            [CodeWord(w) for w in "memcpy (".split(" ")]
            + [CODEWORD_AMP, r_var, CODEWORD_COMMA, ret[0]]
            + ([CODEWORD_ADD, CodeWord(str(progress))] if progress else [])
            + [CODEWORD_COMMA, CodeWord(str(mem_size)), CODEWORD_RPAR, CODEWORD_SEMICOLON]
        )
        progress += mem_size
    if try_var is not None: impl.implementation.append(CODEWORD_RBRACKET)
    if is_lsp and current_token.file.is_main_file: print_lsp_var(current_token, signature_like(new_vars, impl))
    if ret[0].immutable: new_vars = [r.immutable_copy() for r in new_vars]
    r = ret[0]
    for var in new_vars:
        if var.type is POINTER_TYPE:
            for other_var in impl.get_required_accompany(impl.vars[r.stabilized_name()]):
                impl.add_required_accompany(var, other_var)
            impl.add_required_accompany(var, impl.vars[r.stabilized_name()])

    rets = new_vars

    # now there is a special quirk that if we retrieve classes we need to fill in missing pointer info
    # because that info is simply not retrievable from the type system (which only sees abstract pointers)
    i = 0
    while i<len(rets):
        ret = rets[i]
        rt = ret.type
        if len(rt.rets)==0 or rt.vars[rt.rets[0]].type!=rt: 
            i += 1 
            continue
        if rt is POINTER_TYPE:
            current_token.error("safety", "pointers cannot dereference to pointer structural data (mirroring that buffers cannot contain pointer structural data)", suggestions=["those can only be part of a 'class' or a 'singleton'", "it is my great shame to admit that this is not an actual error per the language specification, but the work to fix type checking if this rule is not imposed requires rewriting the compiler - maniospas"])
        for ret_ret in rt.rets:
            if rt.vars[ret_ret].type is POINTER_TYPE:
                ret = rets[i]
                pt = rt.get_pointer_type(rt.vars[ret_ret])
                if pt not in NONE_OR_ANY:
                    existing_dep = impl.get_pointer_type(ret)
                    if existing_dep not in [None, pt]:
                        current_token.error("type", "incompatible type '"+existing_dep.signature()+"' vs '"+pt.signature()+"'")
                    impl.set_pointer_type(ret, pt)
            i += 1

    return pos, new_vars

buffer_types: dict[UnionType|ImplementedType, UnionType] = dict()

def find_unique_variations(variations: list[ImplementedType]):
    all_found: list[ImplementedType] = list()
    for impl in variations:
        already_parsed = False
        #impl_common_length = len(longest_common_prefix([v for va in impl.rets]))
        for variation in all_found:
            is_same = len(variation.rets)==len(impl.rets)
            #variation_common_length = len(longest_common_prefix([v for va in variation.rets]))
            if is_same:
                for variation_arg, impl_arg in zip(variation.rets, impl.rets):
                    vv = variation.vars[variation_arg]
                    iv = impl.vars[impl_arg]
                    if vv.type != iv.type or (vv.immutable or vv.isprivate) != (iv.immutable or iv.isprivate):
                        is_same = False
                        break
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
        if variation.vars[varg].type == POINTER_TYPE:
            actual_variation.invalidated_by = POINTER_TYPE
        i += 1
    i = 0
    while i<len(variation.rets):
        varg = variation.rets[i]
        if variation.vars[varg].type == POINTER_TYPE:
            error_token.error("safety", "a buffer cannot contain pointer structural data", suggestions=["those can only be part of a 'class' or a 'singleton'", "it is my great shame to admit that this is not an actual error per the language specification, but the work to fix type checking if this rule is not imposed requires rewriting the compiler - maniospas"])
        i += max(len(variation.vars[varg].type.rets), 1)
    actual_variation.vars[type_arg] = Variable(type_arg, actual_variation, immutable=True, isprivate=False)
    actual_variation.vars["unsafe_ptr"] = UNSAFE_PTR_VARIABLE
    actual_variation.vars["unsafe_size"] = UNSAFE_SIZE_VARIABLE
    actual_variation.vars["unsafe_offset"] = UNSAFE_OFFSET_VARIABLE
    actual_variation.vars["unsafe_align"] = UNSAFE_ALIGN_VARIABLE
    actual_variation.set_pointer_type(UNSAFE_PTR_VARIABLE, variation)
    actual_variation.implementation.extend([
        UNSAFE_ALIGN_VARIABLE,
        CODEWORD_EQUALS,
        create_code_word_cached(memory_size),
        CODEWORD_SEMICOLON
    ])
    actual_variation.rets.append(type_arg)
    actual_variation.rets.append("unsafe_ptr")
    actual_variation.rets.append("unsafe_size")
    actual_variation.rets.append("unsafe_offset")
    actual_variation.rets.append("unsafe_align")
    return actual_variation

literal_types: dict[str, UnionType] = dict()
    
def create_literal_type(literal_tok: Token, type: ImplementedType, allow_cache: bool=True):
    text = literal_tok.text
    if allow_cache and text in literal_types: return literal_types[text]
    ret = ImplementedType(create_temp(), at=literal_tok)
    ret.is_literal_of = type
    type_var = create_temp()
    ret.vars[type_var] = Variable(type_var, ret, token=literal_tok)
    ret.rets.append(type_var)
    #ret.vars["arg"] = Variable("arg", type)
    #ret.args.append("arg")
    uret = UnionType(ret.name, at=ret.at)
    uret.variations.append(ret)
    if allow_cache: literal_types[text] = uret
    return uret

async def process_type(file: File, tokens: list[Token], pos: int, show_lsp: bool=False, reduce_to_unique_variations: bool=True, impl: Optional[ImplementedType]=None, do_not_follow_namespace: bool=False) -> tuple[int, File|UnionType]:
    type_start = get(tokens, pos)
    name = type_start.text
    if impl is not None and name=="type":
        if impl is None:
            literal_tok.error("type", "can only use 'type' within function bodies")
        pos, values = await process_statement(file, tokens, pos+1, impl, current_operator_priority=0)
        pos, values = await process_statement_operator(file, tokens, impl, pos, values, current_operator_priority=0)
        if values and ((values[0].type.builtin and len(values)==1) or len(values[0].type.rets)==len(values)): 
            variation = values[0].type
        else:
            variation = ImplementedType("", at=type_start)
            for r in values:
                variation.rets.append(r.name)
                variation.vars[r.name] = r
        type = UnionType("", at=type_start)
        type.variations.append(variation)
        if is_lsp and type_start.file.is_main_file and show_lsp: print_lsp_keyword(type_start, signature_like(values, impl))
        return pos, type
    #if name=="literal":
        # if is_lsp and type_start.file.is_main_file: print_lsp_keyword(type_start, "denotes a data literal")
        # pos += 1
    literal_tok = type_start#get(tokens, pos)
    if literal_tok.is_string() and peek_text(tokens, pos+1)!="::":
        if is_lsp and literal_tok.file.is_main_file: print_lsp_string(literal_tok)
        return pos+1, create_literal_type(literal_tok, CSTR_TYPE)
    if literal_tok.is_char():
        if is_lsp and literal_tok.file.is_main_file: print_lsp_literal(literal_tok, "a character literal: "+literal_tok.text)
        return pos+1, create_literal_type(literal_tok, CHAR_TYPE)
    if literal_tok.is_uint():
        if is_lsp and literal_tok.file.is_main_file: print_lsp_literal(literal_tok, "an unsigned integer literal: "+literal_tok.text)
        return pos+1, create_literal_type(literal_tok, UINT_TYPE)
    if literal_tok.is_int():
        if is_lsp and literal_tok.file.is_main_file: print_lsp_literal(literal_tok, "an integer literal: "+literal_tok.text)
        return pos+1, create_literal_type(literal_tok, INT_TYPE)
    if literal_tok.is_float():
        if is_lsp and literal_tok.file.is_main_file: print_lsp_literal(literal_tok, "a float literal: "+literal_tok.text)
        return pos+1, create_literal_type(literal_tok, FLOAT_TYPE)
    # if literal_tok.text=="call":
    #     if impl is None:
    #         literal_tok.error("type", "can only use 'call' within function bodies")
    #     if is_lsp and literal_tok.file.is_main_file: print_lsp_keyword(literal_tok, "**call functor**\n\nEvalutes a functor, or an expression that results to a functor, to a function. The result is a callable type. The conversion from functor to function may fail at runtime if a zero-initialized functor is provided.")
    #     pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority=0)
    #     pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
    #     if len(ret)!=1 or ret[0].type.is_functor_of is None:
    #         literal_tok.error("type", "only a function or functor can be 'call'-ed here but got '"+signature_like(ret, impl)+"'")
    #     functor_var = ret[0] 
    #     method = convert_functor_to_method_type(impl, functor_var, literal_tok)
    #     union_type = UnionType(method.name, at=method.at)
    #     union_type.variations.append(method)
    #     return pos, union_type
    if literal_tok.text=="compt":
        if is_lsp and literal_tok.file.is_main_file: print_lsp_keyword(literal_tok, "**compile time evaluation**\n\nEvaluates the following expression to a literal value during compilation. This requires that the VM is able to axecute all of the expression's dependent code.")
        temporary_implementation = ImplementedType(literal_tok.text, at=literal_tok)
        pos, ret = await process_statement(file, tokens, pos+1, temporary_implementation, current_operator_priority=0)
        pos, ret = await process_statement_operator(file, tokens, temporary_implementation, pos, ret, current_operator_priority=0)
        for i in range(len(ret)):
            r = ret[i]
            if r.type.is_buffer_of:
                if any(r.type.is_buffer_of.vars[r_ret].type is POINTER_TYPE for r_ret in r.type.is_buffer_of.rets):
                    literal_tok.error("interpreter", "'compt' cannot serialize pointer indirection, like pointers within buffers in "+signature_like(ret, temporary_implementation))
            if not r.type.builtin: continue
            if r.type not in [FLOAT_TYPE, UINT_TYPE, INT_TYPE, CSTR_TYPE, BOOL_TYPE, POINTER_TYPE, UINT16_TYPE, UINT32_TYPE, UINT8_TYPE]:
                literal_tok.error("interpreter", "'compt' requires that primitives are retrieved but got '"+signature_like(ret, temporary_implementation)+"' that contains '"+pretty_name(r.type.name)+"'")
        temporary_implementation.returns(ret, literal_tok, is_safe=True)
        memory = MemoryEmulator(1024*vm_memory_kb)
        returned_values = [0 for r in ret if r.type.builtin]
        temporary_implementation.defers.clear()
        returned_error = await temporary_implementation.interpret(returned_values, memory, recursion_budget=vm_recursion_budget)
        if returned_error!=0: literal_tok.error("interpreter", "failed due to "+err_code_list[returned_error][1:-1])

        lits: list[ImplementedType] = list()
        i = 0
        for r in ret:
            if not r.type.builtin:
                lits.append(r.type)
                continue
            if r.type is FLOAT_TYPE: 
                lits.append(create_literal_type(Token(str(returned_values[i]), literal_tok.file, literal_tok.row, literal_tok.col), FLOAT_TYPE).variations[0])
            elif r.type in [INT_TYPE, UINT_TYPE, UINT16_TYPE, UINT32_TYPE, UINT8_TYPE]: 
                lits.append(create_literal_type(Token(str(int(returned_values[i])), literal_tok.file, literal_tok.row, literal_tok.col), r.type).variations[0])
            elif r.type is BOOL_TYPE: 
                lits.append(create_literal_type(Token(str(int(returned_values[i])), literal_tok.file, literal_tok.row, literal_tok.col), BOOL_TYPE).variations[0])
            elif r.type is POINTER_TYPE:
                mem_size = memory.alloc_sizes.get(returned_values[i], None)
                if returned_values[i]==0: literal_tok.error("interpreter", "failed because 'compt' evaluated to a null pointer value")
                if mem_size is None: literal_tok.error("interpreter", "failed because 'compt' can not capture pointers to foreign resources (like file handles)")
                lits.append(create_literal_type(Token("\""+memory.as_rawstr(returned_values[i], mem_size)+"\"", literal_tok.file, literal_tok.row, literal_tok.col), POINTER_TYPE, allow_cache=False).variations[0])
                raw_type = temporary_implementation.get_pointer_type(r)
                if raw_type and raw_type!=ANY_TYPE: lits[-1].is_forced_pointer_type_of = raw_type
                else: lits[-1].is_forced_pointer_type_of = ANY_TYPE
            else: 
                lits.append(create_literal_type(Token("\""+memory.as_cstr(returned_values[i])+"\"", literal_tok.file, literal_tok.row, literal_tok.col), CSTR_TYPE).variations[0])
            i += 1
        if len(lits)==0:
            ret = UnionType(BLANK_LITERAL.name, at=BLANK_LITERAL.at)
            ret.variations.append(BLANK_LITERAL)
            return pos, ret
        synthetic_type = ImplementedType(signature_like(ret, temporary_implementation), at=literal_tok)
        synthetic_type.is_literal_of = synthetic_type # self-literals mean unpacking
        for lit in lits:
            var = Variable(create_temp(), lit)
            synthetic_type.rets.append(var.name)
            synthetic_type.vars[var.name] = var
        synthetic_type_union = UnionType(synthetic_type.name, at=synthetic_type.at)
        synthetic_type_union.variations.append(synthetic_type)
        return pos, synthetic_type_union

        #literal_tok.error("type", "a 'literal' definition can only be followed by a number or string literal, not an expession")

    namespace: File|None = file if name=="\""+file.path+"\"" else file.namespaces.get(name, None)
    if peek_text(tokens, pos+1)!="::" or (namespace is None and do_not_follow_namespace):
        if name in operators: tokens[pos].error("syntax", "the previous expression has ended")
        type: UnionType|None = file.types.get(name, None)
        if type is None:
            #raise("unknown type '"+name+"'")
            for tokpos, tok in enumerate(tokens):
                if tok.text=="def" and peek_text(tokens, tokpos+1)==name:
                    if peek_text(tokens, tokpos+2)=="=": tokens[pos].error("type", "type union is declared later per 'def "+name+"'")
                    else:
                        if pos>tokpos: 
                            tokens[pos].error("type", "usage of 'def "+name+"' before its definition", suggestions=["fix compilation errors", "declare it as 'rec'"])
                        else:
                            tokens[pos].error("type", "usage of 'def "+name+"' defined later, but the present function must return non-recursively before its first recursive call")
                elif tok.text=="rec" and peek_text(tokens, tokpos+1)==name:
                    tokens[pos].error("type", "usage of 'rec "+name+"' before its definition", suggestions=["fix compilation errors", "move the definition earlier (recursive functions can call subsequent ones)"]) 

            if name[0] in symbols and name[0]!="&": tokens[pos].error("syntax", "previous expression ended before operator '"+name+"'")
            candidates: list[ImplementedType] = list()
            max_candidate_common_length = 0
            for type in file.types.values():
                for variation in type.variations:
                    if "__t" in variation.name: continue
                    common_length = longest_common_prefix_len([variation.name, name])
                    if common_length>max_candidate_common_length: 
                        candidates = list()
                        max_candidate_common_length = common_length
                    if common_length==max_candidate_common_length: 
                        candidates.append(variation)
            if file==tokens[pos].file:
                if impl:
                    varname = name
                    var = impl.vars.get(varname, None)
                    if var is not None:
                        # if var.type.is_functor_of:
                        #     tokens[pos].error("type", "unknown type '"+pretty_name(name)+"' but a local functor variable with the same name exists; use 'compiler:call' to call that variable as if it were a type '"+signature_like([var], impl)+"'")
                        if var.type.is_functor_of:
                            ret = UnionType(var.type.is_functor_of.name, at=var.type.is_functor_of.at)
                            ret.variations.append(var.type.is_functor_of)
                            return pos+1, ret
                        if var.type.is_literal_of:
                            ret = UnionType(var.type.name, at=var.type.at)
                            ret.variations.append(var.type)
                            return pos+1, ret
                        # if peek_text(tokens, pos+1)[0] in symbols:
                        #     tokens[pos].error("type", "unknown type '"+pretty_name(name)+"' but a local variable with the same name exists '"+signature_like([var] if var else obj, impl)+"'", suggestions=["enclose an expression within another parenthesis pair"])
                        tokens[pos].error("type", "unknown type '"+pretty_name(name)+"' but a local structural variable with the same name exists '"+signature_like([var] if var else obj, impl)+"'")
                    varname = name+"__"
                    vars = [r for r in impl.vars.values() if r.name.startswith(varname)]
                    if vars and ((vars[0].type.builtin and len(obj)==1) or len(vars[0].type.rets)==len(vars)):
                        ret = UnionType(vars[0].type.name, at=vars[0].type.at)
                        ret.variations.append(vars[0].type)
                        return pos+1, ret
                    if vars: tokens[pos].error("type", "unknown type '"+pretty_name(name)+"' but a local structural or nominal variable with the same name exists '"+signature_like(vars, impl)+"'")
                tokens[pos].error("type", "unknown type '"+pretty_name(name)+"'", suggestions=[candidate.signature() for candidate in candidates]+["\""+file.path+"\"::"+k for k in file.namespaces])
            
            namespace: File|None = file if name=="\""+file.path+"\"" else file.namespaces.get(name, None)
            if namespace is None: tokens[pos].error("import", "unknown namespace or type '"+name+"'", suggestions=["\""+file.path+"\"::"+k for k in file.namespaces])
            assert namespace is not None
            if peek_text(tokens, pos+3)=="::":
                return await process_type(namespace, tokens, pos+2, reduce_to_unique_variations=reduce_to_unique_variations, impl=impl)
            return pos+1, namespace
            
            #tokens[pos].error("type", "unknown type '\""+file.path+"\"::"+pretty_name(name)+"'", suggestions=[candidate.signature() for candidate in candidates]+["\""+file.path+"\"::"+k for k in file.namespaces])
        assert type is not None
        if peek_text(tokens, pos+1)=="[":
            at_pos = get(tokens, pos+1)
            if get(tokens, pos+2).text!="]": return pos+1, type#at_pos.error("syntax", "to denote a buffer type use '[]'")
            buffer_type: UnionType|None = buffer_types[type] if type in buffer_types else None
            if buffer_type is None:
                buffer_type = UnionType(type.name+"____t_buffer", at=type.at)
                # always found unique buffer variations
                unique_variations = find_unique_variations(type.variations) #if reduce_to_unique_variations else type.variations
                #unique_variations = type.variations
                #if len(unique_variations)!=1: at_pos.error("safety", "it is not clear which version should be used for '"+type.name+"[]'", suggestions=[candidate.signature() for candidate in unique_variations])
                for variation in unique_variations:
                    variation_buffer_type = buffer_types.get(type, None)
                    if variation_buffer_type is None:
                        actual_variation = create_buffer_type(buffer_type.name+"____buffer", str(variation.memory_size()), variation, get(tokens, pos))
                        variation_buffer_type = UnionType(buffer_type.name+"____t_buffer", at=variation.at)
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
                    printid("struct")
                    printid(os.path.abspath(type_start.file.path))
                    print(type_start.row)
                    print(type_start.col)
                    print(len(type_end.text)+type_end.col-type_start.col)
                    # defined at
                    printid(os.path.abspath(at.file.path))
                    print(at.row)
                    print(at.col)
                    # message (may span multiple lines))
                    printid("```rust\n"+signature_like([variation.vars[ret] for ret in variation.rets], variation)+"\n```")#+(" defined in "+at.file.path if variation.at else " from compiler definitions"))

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
                printid("struct")
                printid(os.path.abspath(type_start.file.path))
                print(type_start.row)
                print(type_start.col)
                print(len(type_end.text)+type_end.col-type_start.col)
                # defined at
                printid(os.path.abspath(at.file.path))
                print(at.row)
                print(at.col)
                # message (may span multiple lines))
                printid("```rust\n"+(signature_like([variation.vars[ret] for ret in variation.rets], variation) if reduce_to_unique_variations else variation.signature())+"\n```")#+(" defined in "+at.file.path if variation.at else " from compiler definitions"))

        return pos+1, type
    namespace: File|None = file if name=="\""+file.path+"\"" else file.namespaces.get(name, None)
    if namespace is None: tokens[pos].error("import", "unknown namespace '"+name+"'", suggestions=["\""+file.path+"\"::"+k for k in file.namespaces])
    assert namespace is not None
    return await process_type(namespace, tokens, pos+2, reduce_to_unique_variations=reduce_to_unique_variations, impl=impl)
 
cached_factors_for_comparison: dict[str, ImplementedType] = dict()
def create_functor(input_type: UnionType, output_type: UnionType, token: Token):
    type = UnionType("functor "+input_type.name+"->"+output_type.name, at=token)
    for input_variation in find_unique_variations(input_type.variations):
        for output_variation in find_unique_variations(output_type.variations):
            variation = ImplementedType(create_temp(), at=token)
            variation.never_implement = True
            variation.force_not_inline = True # all functors must have an address
            variation.needs_failure_mode = token # all functors have a failure mode
            # var = Variable(create_temp(), variation)
            # variation.args.append(var.name)
            # variation.vars[var.name] = var
            for arg in input_variation.rets:
                var = input_variation.vars[arg].renamed_copy(create_temp())
                variation.args.append(var.name)
                variation.vars[var.name] = var.immutable_copy()
                if var.type is POINTER_TYPE:
                    existing_pointer_type = input_variation.get_pointer_type(input_variation.vars[arg])
                    if existing_pointer_type is None or existing_pointer_type==ANY_TYPE:
                        pass#token.error("safety", "return with generic pointer type not allowed in functor input '"+signature_like([input_variation.vars[r] for r in input_variation.rets], input_variation)+"'")
                    else: variation.set_pointer_type(var, existing_pointer_type)
            for arg in output_variation.rets:
                var = output_variation.vars[arg].renamed_copy(create_temp())
                variation.rets.append(var.name)
                variation.vars[var.name] = var.immutable_copy()
                if var.type is POINTER_TYPE:
                    existing_pointer_type = output_variation.get_pointer_type(output_variation.vars[arg])
                    if existing_pointer_type is None or existing_pointer_type==ANY_TYPE:
                        pass#token.error("safety", "return with generic pointer type not allowed in functor output '"+signature_like([output_variation.vars[r] for r in output_variation.rets], output_variation)+"'")
                    else: variation.set_pointer_type(var, existing_pointer_type)
            canonical_signature = variation.signature()
            functor_variation = cached_factors_for_comparison.get(canonical_signature)
            if functor_variation is None:
                functor_variation = ImplementedType(variation.signature(), "__smoll_func_ptr_type", memory_size=8, at=token)
                functor_variation.is_functor_of = variation
                cached_factors_for_comparison[canonical_signature] = functor_variation
            type.variations.append(functor_variation)
    return type

def convert_functor_to_method_type(impl: ImplementedType, functor_var: Variable, err_token: Token):
    assert functor_var.type.is_functor_of is not None
    if functor_var.type not in impl.dependent_implementations:
        impl.dependent_implementations.append(functor_var.type)

    ret_type = ImplementedType("", at=err_token) # perfect copy of the functor
    for a in functor_var.type.is_functor_of.__dict__:
        setattr(ret_type, a, getattr(functor_var.type.is_functor_of, a))

    impl.implementation.extend([
        CODEWORD_IF,
        CODEWORD_LPAR,
        CODEWORD_NOT,
        functor_var,
        CODEWORD_RPAR,
        CODEWORD_LBRACKET,
    ])
    if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: err_token.error("safety", "the matching 'try' has already handled a different failure")
    try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
    pending_close_bracket = False
    if try_var is not None:
        impl.has_any_complaint = True
        impl.implementation.extend([
            CODEWORD_TCOMPLAIN,
            CODEWORD_EQUALS,
            CODEWORD_TWO,
            CODEWORD_SEMICOLON,
            try_var,
            CODEWORD_EQUALS,
            CODEWORD_TCOMPLAIN,
            CODEWORD_SEMICOLON,
            CODEWORD_RBRACKET,
            CODEWORD_ELSE,
            CODEWORD_LBRACKET
        ])
        impl.spawned_error_codes.add(2)
        impl.count_handled_tries[-1] += 1
        pending_close_bracket = True
    else:
        # non-allocation check is mandatory unfortunately
        if debug_mode:
            text = "\\033[31mmemory error\\033[0m null pointer\\n"
            text += "\\033[31mat\\033[0m "+err_token.file.path.replace('"','\\"')+" line "+str(err_token.row)+" column "+str(err_token.col)+"\\n"
            impl.implementation.extend([
                CODEWORD_PRINTF,
                CODEWORD_LPAR,
                CodeWord('"%s"'),
                CODEWORD_COMMA,
                CodeWord('"'+text.replace('"', '\\"')+'"'),
                CODEWORD_RPAR,
                CODEWORD_SEMICOLON,
            ])
        impl.implementation.extend([
            CODEWORD_TERRCODE,
            CODEWORD_EQUALS,
            CODEWORD_TWO,
            CODEWORD_SEMICOLON
        ])
        impl.spawned_error_codes.add(2)
        impl.implementation.extend([
            CODEWORD_GOTO,
            CODEWORD_TFAILURE,
            CODEWORD_SEMICOLON,
            CODEWORD_RBRACKET
        ])
        impl.needs_failure_mode = err_token

    # only change the name in the ret_type
    self = functor_var.type.is_functor_of
    signature_ret = "int" if self.force_not_inline or self.needs_failure_mode else "void" # always int
    arg_code = ""
    for arg in self.args:
        # other args are just class alignment
        arg_type_builtin = self.vars[arg].type.builtin
        if arg_type_builtin: 
            if arg_code: arg_code += ", "
            if self.vars[arg].immutable: arg_code += arg_type_builtin+" "
            else: arg_code += arg_type_builtin+"* "
    ret_code = ""
    for arg in self.rets:
        arg_type_builtin = self.vars[arg].type.builtin
        if arg_type_builtin:
            if ret_code: ret_code += ", "
            ret_code += arg_type_builtin+"* "
    if arg_code and ret_code: arg_code += ", "
    ret_type.monomorphic_name = "(("+signature_ret+" (*)("+arg_code+ret_code+"))"+functor_var.name+")"
    ret_type.functor_var_name = functor_var.name

    return ret_type, pending_close_bracket

def convert_method_to_functor(impl: ImplementedType, _method: UnionType, err_token: Token, skip_literals: bool=False, from_name: Optional[str]=None):
    if len(_method.variations)==0: err_token.error("type", "no variations to convert to a functor")
    if len(_method.variations)!=1: err_token.error("type", "cannot convert multiple variations to a functor", suggestions=[t.signature() for t in _method.variations])
    method = _method.variations[0]
    #if not method.implementation and not method.builtin:
    #    err_token.error("safety", "cannot convert a function into a functor without an implementation (perhaps it is already a functor)")

    if method.at is None: err_token.error("type", "cannot retrieve functors from function '"+method.signature()+"' defined by the compiler, as these require interaction with the compilation state that is unavailable at runtime", suggestions=["create a wrapper for the desired functionality"])
    if method.returned_defers: err_token.error("safety", "the function '"+method.signature()+"' attaches 'defer' to its returns and therefore cannot be converted to a functor (the calling site does not know this)")
    # pos = 0 # TODO: relax this
    # while pos<len(method.args):
    #     var = method.vars[method.args[pos]]
    #     if var.type==POINTER_TYPE: err_token.error("safety", "the function '"+method.signature()+"' cantains raw pointer arguments and therefore cannot be converted into a functor (future language versions may relax this)")
    #     if len(var.type.rets)==0: pos += 1
    #     else: pos += len(var.type.rets)
    # pos = 0 # TODO: relax this
    # while pos<len(method.rets):
    #     var = method.vars[method.rets[pos]]
    #     if var.type==POINTER_TYPE: err_token.error("safety", "the function '"+method.signature()+"' cantains raw pointer returns and therefore cannot be converted into a functor (future language versions may relax this)")
    #     if len(var.type.rets)==0: pos += 1
    #     else: pos += len(var.type.rets)
    for arg in method.args:
        if not method.vars[arg].immutable: err_token.error("safety", "the function '"+method.signature()+"' has 'edit' or 'mut' in its arguments and therefore cannot become a functor; only pure functions can be functors")
    if not method.needs_failure_mode or not method.force_not_inline:
        new_method = ImplementedType(method.name, at=method.at)
        new_method.args = [arg for arg in method.args]
        for arg in method.args: 
            new_method.vars[arg] = method.vars[arg]
            existing_pointer_type = method.get_pointer_type(method.vars[arg])
            if existing_pointer_type is not None and existing_pointer_type!=ANY_TYPE:
                new_method.set_pointer_type(method.vars[arg], existing_pointer_type)
        rets = resolve_call(err_token.file, new_method, _method, [new_method.vars[arg] for arg in new_method.args], err_token, _callee=method)
        new_method.returns(rets, err_token, False) # don't do redundant error checks
        new_method.implementation.extend([CODEWORD_GOTO, CODEWORD_TRETURN, CODEWORD_SEMICOLON])
        new_method.needs_failure_mode = err_token
        new_method.force_not_inline = True
        method = new_method
    input_variation = ImplementedType("", at=method.at)
    output_variation = ImplementedType("", at=method.at)
    for ret in method.args:
        if skip_literals and method.vars[ret].type.is_literal_of: continue
        input_variation.rets.append(ret)
        input_variation.vars[ret] = method.vars[ret]
        if method.vars[ret].type==POINTER_TYPE:
            existing_pointer_type = method.get_pointer_type(method.vars[ret])
            if existing_pointer_type is not None and existing_pointer_type!=ANY_TYPE:
                input_variation.set_pointer_type(method.vars[ret], existing_pointer_type)
    for ret in method.rets:
        if skip_literals and method.vars[ret].type.is_literal_of: continue
        output_variation.rets.append(ret)
        output_variation.vars[ret] = method.vars[ret]
        if method.vars[ret].type==POINTER_TYPE:
            existing_pointer_type = method.get_pointer_type(method.vars[ret])
            if existing_pointer_type is not None and existing_pointer_type!=ANY_TYPE:
                output_variation.set_pointer_type(method.vars[ret], existing_pointer_type)
    input_type = UnionType(input_variation.name, at=method.at)
    input_type.variations.append(input_variation)
    output_type = UnionType(output_variation.name, at=method.at)
    output_type.variations.append(output_variation)
    method_functor = create_functor(input_type, output_type, err_token)
    var = Variable(create_temp(), method_functor.variations[0])
    impl.vars[var.name] = var
    if method not in impl.dependent_implementations:
        impl.dependent_implementations.append(method)
    impl.implementation.extend([
        var,
        CODEWORD_EQUALS,
        CODEWORD_LPAR,
        CODEWORD_CAST_FUNC_PTR,
        CODEWORD_RPAR,
        CodeWord(from_name if from_name is not None else method.monomorphic_name),
        CODEWORD_SEMICOLON
    ])
    if is_lsp and err_token.file.is_main_file:
        variation = var.type
        at = variation.at if variation.at else err_token
        print("---")
        # position in processed file
        printid("struct")
        printid(os.path.abspath(err_token.file.path))
        print(err_token.row)
        print(err_token.col)
        print(len(err_token.text)+err_token.col-err_token.col)
        # defined at
        printid(os.path.abspath(at.file.path))
        print(at.row)
        print(at.col)
        # message (may span multiple lines))
        printid("```rust\n"+signature_like([variation.vars[ret] for ret in variation.rets], variation)+"\n```")

    return [var]

async def process_linear_type(file: File, tokens: list[Token], pos: int, show_lsp: bool=False, reduce_to_unique_variations: bool=True, impl: Optional[ImplementedType]=None) -> tuple[int, UnionType]:
    parentheses = peek_text(tokens, pos)=="("
    if parentheses: pos += 1
    start_pos = pos
    prev_pos = pos
    pos, tmptype = await process_type(file, tokens, pos, show_lsp, reduce_to_unique_variations=reduce_to_unique_variations, impl=impl, do_not_follow_namespace=True)
    if not isinstance(tmptype, UnionType): tokens[prev_pos].error("type", "expecting a type instead of namespace")
    assert isinstance(tmptype, UnionType)
    type: UnionType = tmptype
    if peek_text(tokens, pos)=="<":
        functor_token = get(tokens, pos)
        pos -= 2
        pos, name, abstract_arg_types, abstract_arg_names, abstract_arg_immutability, abstract_arg_convert_to_ptr, effect_names = await _gather_def(file, tokens, pos, True, True, "<", ">", contained_in=impl)
        candidates: set[ImplementedType] = set()
        source_impl = impl
        for arg_types in itertools.product(*abstract_arg_types):
            impl = ImplementedType(name, at=functor_token)
            impl.effect_names = effect_names
            for arg_name, arg_type, immutable, convert_to_ptr in zip(abstract_arg_names, arg_types, abstract_arg_immutability, abstract_arg_convert_to_ptr):
                if convert_to_ptr:
                    impl.vars[arg_name] = Variable(arg_name, POINTER_TYPE, immutable!=0, token=functor_token)
                    impl.args.append(arg_name)
                    impl.set_pointer_type(impl.vars[arg_name], arg_type)
                    if immutable==1: tokens[pos-1].error("safety", "'edit' is identical to 'mut' here; use the latter instead or remove the edentifier to prevent any editing")
                    continue
                elif arg_type.builtin:
                    impl.vars[arg_name] = Variable(arg_name, arg_type, immutable!=0, token=functor_token)
                    impl.args.append(arg_name)
                    if arg_type==POINTER_TYPE: impl.set_pointer_type(impl.vars[arg_name], ANY_TYPE)
                    continue
                prefix_len = longest_common_prefix_len(arg_type.rets)
                used_immutable = False
                for ret in arg_type.rets:
                    ret_name = arg_name+"__"+ret[prefix_len:]  if len(arg_type.rets)>1 else arg_name
                    impl.vars[ret_name] = arg_type.vars[ret].renamed_copy(ret_name, functor_token)
                    if immutable==0: impl.vars[ret_name] = impl.vars[ret_name].mutable_copy(tokens[pos-1])
                    elif immutable==1:
                        original_var = impl.vars[ret_name] 
                        if (not impl.vars[ret_name].isprivate and not impl.vars[ret_name].immutable): #or not impl.vars[ret_name].type.builtin: 
                            impl.vars[ret_name] = impl.vars[ret_name].mutable_copy(tokens[pos-1])
                        else: 
                            impl.vars[ret_name] = impl.vars[ret_name].immutable_copy()
                            #if original_var.immutable!=impl.vars[ret_name].immutable:
                            used_immutable = True
                    elif immutable==-1: impl.vars[ret_name] = impl.vars[ret_name].immutable_copy()
                    elif immutable==-2:
                        impl.vars[ret_name] = impl.vars[ret_name].stable_copy()
                    impl.refargs.append(ret_name) # start with everything as refarg and we will remove during assignment
                    impl.args.append(ret_name)
                    if impl.vars[ret_name].type==POINTER_TYPE:
                        found_ptr_type = arg_type.get_pointer_type(arg_type.vars[ret])
                        if found_ptr_type is not None and found_ptr_type!=ANY_TYPE: impl.set_pointer_type(impl.vars[ret_name], found_ptr_type)
                        #else:
                        #    dep = arg_type.follow_pointer_dependency(arg_type.vars[ret])
                        #    if dep is not None: impl.set_pointer_depedency(dep.renamed_copy(arg_name+"__"+dep.name[prefix_len:]))
                if immutable==1 and not used_immutable: tokens[pos-1].error("safety", "'edit' is identical to 'mut' here; use the latter instead or remove the edentifier to prevent any editing")
            for variation in type.variations:
                if len(variation.args)!=len(impl.args): continue
                compliant = True
                for arg1, arg2 in zip(variation.args, impl.args):
                    if not variation.vars[arg1].is_same(impl.vars[arg2]):
                        compliant = False
                        break
                if compliant: candidates.add(variation)
        impl = source_impl
        ret = UnionType(type.name+"<...>", at=get(tokens, prev_pos))
        ret.variations = [variation for variation in type.variations if variation in candidates]
        type = ret
    if peek_text(tokens, pos)=="::":
        pos += 1
        reflection_token = get(tokens, pos)
        pos += 1
        reflection_token_text = reflection_token.text
        variations = list()
        for variation in type.variations:
            at = variation.at
            if at is None: reflection_token.error("type", "type '"+variation.signature()+"' has no definition point")
            assert at is not None
            lit: Optional[UnionType] = None
            if variation.is_literal_of==ANY_TYPE:
                if len(type.variations)!=1: reflection_token.error("type", "more than one variations for '"+type.name+"' prevent obtaining a function's returns via reflection", suggestions=[candidate.signature() for candidate in type.variations])
                if reflection_token_text not in variation.rets:
                    reflection_token.error("type", "variable descriptor has no member '"+reflection_token_text+"' but has available values: "+', '.join(variation.rets))
                variations.append(variation.vars[reflection_token_text].type)
            elif reflection_token_text=="name":
                lit = create_literal_type(Token("\""+variation.name+"\"", at.file, at.row, at.col), CSTR_TYPE)
                if is_lsp and get(tokens,pos-2).file.is_main_file: print_lsp_literal(reflection_token, "**type "+reflection_token_text+" literal**\n\nRetrieves the type's "+reflection_token_text+" as the literal type "+lit.at.text)
                assert lit is not None
                for litvar in lit.variations:
                    if litvar not in variations: variations.append(litvar)
            elif reflection_token_text=="tag":
                lit = create_literal_type(Token("\""+variation.monomorphic_name+"\"", at.file, at.row, at.col), CSTR_TYPE)
                if is_lsp and get(tokens,pos-2).file.is_main_file: print_lsp_literal(reflection_token, "**type "+reflection_token_text+" literal**\n\nRetrieves the type's "+reflection_token_text+" as the literal type "+lit.at.text)
                assert lit is not None
                for litvar in lit.variations:
                    if litvar not in variations: variations.append(litvar)
            elif reflection_token_text=="rets":
                if len(type.variations)!=1: reflection_token.error("type", "more than one variations for '"+type.name+"' prevent obtaining a function's returns via reflection", suggestions=[candidate.signature() for candidate in type.variations])
                for arg in variation.args:
                    if not variation.vars[arg].type.builtin: continue
                    lit_token = Token("return "+arg, at.file, at.row, at.col)
                    variable_type = ImplementedType(variation.name+" variable "+arg, at=lit_token)
                    variable_type.is_literal_of = ANY_TYPE
                    variable_type.rets.extend(["mut", "name", "zero"])
                    variable_type.vars["mut"] = Variable("mut", FALSE_TYPE if variation.vars[arg].immutable or variation.vars[arg].isprivate else TRUE_TYPE)
                    lit_token = Token("\""+arg+"\"", at.file, at.row, at.col)
                    lit = create_literal_type(lit_token, CSTR_TYPE)
                    variable_type.vars["name"] = Variable("name", lit.variations[0])
                    variable_type.vars["zero"] = Variable("zero", variation.vars[arg].type)
                    variations.append(variable_type)
            elif reflection_token_text=="args":
                if len(type.variations)!=1: reflection_token.error("type", "more than one variations for '"+type.name+"' prevent obtaining a function's arguments via reflection", suggestions=[candidate.signature() for candidate in type.variations])
                for arg in variation.args:
                    if not variation.vars[arg].type.builtin: continue
                    lit_token = Token("argument "+arg, at.file, at.row, at.col)
                    variable_type = ImplementedType(variation.name+" variable "+arg, at=lit_token)
                    variable_type.is_literal_of = ANY_TYPE
                    variable_type.rets.extend(["mut", "name", "zero"])
                    variable_type.vars["mut"] = Variable("mut", FALSE_TYPE if variation.vars[arg].immutable else TRUE_TYPE)
                    lit_token = Token("\""+arg+"\"", at.file, at.row, at.col)
                    lit = create_literal_type(lit_token, CSTR_TYPE)
                    variable_type.vars["name"] = Variable("name", lit.variations[0])
                    variable_type.vars["zero"] = Variable("zero", variation.vars[arg].type)
                    variations.append(variable_type)
            elif reflection_token_text=="size":
                memory_size = str(variation.memory_size())
                lit = create_literal_type(Token(memory_size, at.file, at.row, at.col), UINT_TYPE)
                if is_lsp and get(tokens,pos-2).file.is_main_file: print_lsp_literal(reflection_token, "**type "+reflection_token_text+" literal**\n\nRetrieves the type's "+reflection_token_text+" as the literal type "+lit.at.text)
                assert lit is not None
                for litvar in lit.variations:
                    if litvar not in variations: variations.append(litvar)
            else:
                reflection_token.error("type", "only '::name', '::tag', '::size', '::rets', or '::args' are allowed for reflection but got '::"+reflection_token_text+"'")
            
        ret = UnionType(type.name+"::"+reflection_token_text, at=reflection_token)
        ret.variations = variations
        type = ret
    if peek_text(tokens, pos)=="->":
        pos += 1
        functor_token = get(tokens, pos)
        pos, output_type = await process_linear_type(file, tokens, pos, show_lsp, reduce_to_unique_variations, impl=impl)
        type = create_functor(type, output_type, functor_token)
    if parentheses:
        if peek_text(tokens, pos)!=")": get(tokens, start_pos-1).error("type", "unclosed type definition parenthesis")
        pos += 1
    if peek_text(tokens, pos) == "|":
        if is_lsp and get(tokens, pos).file.is_main_file and show_lsp: print_lsp_keyword(get(tokens, pos), "either of the types")
        prev_pos = pos
        pos, alternatives = await process_linear_type(file, tokens, pos+1, show_lsp, reduce_to_unique_variations=reduce_to_unique_variations, impl=impl)
        ret = UnionType(type.name+"|"+alternatives.name, at=get(tokens, prev_pos))
        ret.variations.extend(type.variations)
        ret.variations.extend(alternatives.variations)
        ret.variations = list(dict.fromkeys(ret.variations))#list(set(ret.variations))
        if reduce_to_unique_variations: ret.variations = find_unique_variations(ret.variations)
        type = ret
    elif peek_text(tokens, pos) == "&":
        if is_lsp and get(tokens, pos).file.is_main_file and show_lsp: print_lsp_keyword(get(tokens, pos), "common elements of the type unions")
        prev_pos = pos
        pos, alternatives = await process_linear_type(file, tokens, pos+1, show_lsp, reduce_to_unique_variations=False, impl=impl)
        ret = UnionType(type.name+"&"+alternatives.name, at=get(tokens, prev_pos))
        alternative_variations = set(alternatives.variations)
        ret.variations = [variation for variation in type.variations if variation in alternative_variations]
        type = ret
    elif peek_text(tokens, pos) == "\\":
        if is_lsp and get(tokens, pos).file.is_main_file and show_lsp: print_lsp_keyword(get(tokens, pos), "exclude elements of the right type union from the left")
        prev_pos = pos
        pos, alternatives = await process_linear_type(file, tokens, pos+1, show_lsp, reduce_to_unique_variations=False, impl=impl)
        ret = UnionType(type.name+"\\"+alternatives.name, at=get(tokens, prev_pos))
        alternative_variations = set(alternatives.variations)
        ret.variations = [variation for variation in type.variations if variation not in alternative_variations]
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
    "::": ("reflection", 0.5),
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
        peek_next = peek_text(tokens, pos+1)
        if op_name=="=": #op_name==">>" or op_name=="<<" or 
            if op_name=="=" and peek_text(tokens, pos-1)!="]" and (len(rets)!=1 or rets[0].type!=POINTER_TYPE): tokens[pos].error("safety", "unexpected '=' in the middle of expression", suggestions=["use 'buffer[item] = value' when supported by 'mutget' (for buffers, this is equivalent to buffer[item]&&<<value)"])
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
            if var.immutable: err_token.error("type", "cannot move data to an immutable pointer", suggestions=["make it 'mut'", "obtain it with '&&' or 'mutget' from a buffer if you are working with std", "remove 'const' qualitifier"])
            pointer_type: ImplementedType|None = impl.get_pointer_type(var)
            if pointer_type is None or pointer_type==ANY_TYPE: err_token.error("type", "cannot "+op_name+" a value onto a pointer with unknown associated type")
            assert pointer_type is not None
            if len(pointer_type.rets)!=len(ret): err_token.error("type", "this is a pointer to data of different type: '"+signature_like(ret)+"' vs '"+pointer_type.signature()+"'")
            for pr, r in zip(pointer_type.rets, ret):
                if pointer_type.vars[pr].type != r.type: err_token.error("type", "this is a pointer to data of different type: '"+signature_like(ret)+"' vs '"+pointer_type.signature()+"'")
            # we now have a contract that we can place our data on the pointer
            impl.implementation.extend([
                CODEWORD_IF,
                CODEWORD_LPAR,
                CODEWORD_NOT,
                var,
                CODEWORD_RPAR,
                CODEWORD_LBRACKET,
            ])
            if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: op_token.error("safety", "the matching 'try' has already handled a different failure")
            try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
            if try_var is not None:
                impl.has_any_complaint = True
                impl.implementation.extend([
                    CODEWORD_TCOMPLAIN,
                    CODEWORD_EQUALS,
                    CODEWORD_TWO,
                    CODEWORD_SEMICOLON,
                    CODEWORD_RBRACKET,
                    CODEWORD_ELSE,
                    CODEWORD_LBRACKET
                ])
                impl.spawned_error_codes.add(2)
                impl.count_handled_tries[-1] += 1
            else:
                # non-allocation check is mandatory unfortunately
                if debug_mode:
                    text = "\\033[31mmemory error\\033[0m null pointer\\n"
                    text += "\\033[31mat\\033[0m "+err_token.file.path.replace('"','\\"')+" line "+str(err_token.row)+" column "+str(err_token.col)+"\\n"
                    impl.implementation.extend([
                        CODEWORD_PRINTF,
                        CODEWORD_LPAR,
                        CodeWord('"%s"'),
                        CODEWORD_COMMA,
                        CodeWord('"'+text.replace('"', '\\"')+'"'),
                        CODEWORD_RPAR,
                        CODEWORD_SEMICOLON,
                    ])
                impl.implementation.extend([
                    CODEWORD_TERRCODE,
                    CODEWORD_EQUALS,
                    CODEWORD_TWO,
                    CODEWORD_SEMICOLON
                ])
                impl.spawned_error_codes.add(2)
                impl.implementation.extend([
                    CODEWORD_GOTO,
                    CODEWORD_TFAILURE,
                    CODEWORD_SEMICOLON,
                    CODEWORD_RBRACKET
                ])
                impl.needs_failure_mode = op_token

            progress = 0
            for r in ret:
                mem_size = r.type.memory_size() if r.type.builtin else 0
                if not mem_size: continue
                impl.implementation.extend(
                    [CodeWord("memcpy"), CODEWORD_LPAR]
                    +[var]
                    + ([CODEWORD_ADD, create_code_word_cached(str(progress))] if progress else [])
                    + [CODEWORD_COMMA, CODEWORD_AMP]
                    + [impl.vars[r.stabilized_name()]]
                    + [CODEWORD_COMMA, create_code_word_cached(str(mem_size))]
                    + [CODEWORD_RPAR, CODEWORD_SEMICOLON]
                )
                if impl.vars[r.stabilized_name()].type==POINTER_TYPE:
                    for other_var in impl.get_required_accompany(var):
                        for source_var in impl.get_required_accompany(impl.vars[r.stabilized_name()]):
                            impl.add_required_accompany(other_var, source_var)
                        impl.add_required_accompany(other_var, impl.vars[r.stabilized_name()])
                    impl.add_required_accompany(var, impl.vars[r.stabilized_name()])
                progress += mem_size
            if try_var is not None: impl.implementation.append(CODEWORD_RBRACKET)
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
            if "while" in impl.nesting:
                impl.implementation.append(CODEWORD_LBRACKET)
                for ret in rets:
                    if ret.type.builtin:
                        impl.implementation.extend([
                            ret,
                            CODEWORD_EQUALS,
                            CODEWORD_ZERO,
                            CODEWORD_SEMICOLON
                        ])
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
                CODEWORD_NOT,
                rets[0],
                CODEWORD_RPAR,
                CODEWORD_LBRACKET
            ])
            pos, rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=op_priority) 
            pack_name = create_temp()
            impl.assign(pack_name, rets, op_token)
            rets = [v for k, v in impl.vars.items() if k.startswith(pack_name)]
            impl.implementation.extend([
                CODEWORD_RBRACKET,
                CODEWORD_ELSE,
                CODEWORD_LBRACKET,
            ])
            for ret in rets:
                if ret.type.builtin:
                    impl.implementation.extend([
                        ret,
                        CODEWORD_EQUALS,
                        CODEWORD_ZERO,
                        CODEWORD_SEMICOLON
                    ])
                get_func_name = "not"
                type = file.types.get(get_func_name, None)
                if type is None: op_token.error("type", "missing implementation for '"+get_func_name+"'")
                assert type is not None
                new_rets = resolve_call(file, impl, type, rets, op_token, out_format=rets)
                if len(new_rets)!=len(rets): op_token.error("type", "'not' did not return the same type")
                for r,nr in zip(rets, new_rets):
                    impl.assign(r.name, [nr], op_token, perform_immutability_checks=False, top_entry=False)
            impl.implementation.append(CODEWORD_RBRACKET)
            continue

        if op_name=="is":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "compile time boolean check of whether a value is of a given type; 'value is blank' checks if the value exists")
            async def process_is(pos: int, rets: list[Variable]):
                is_pos = pos
                pos += 1
                # first parse type extraction statements
                found_variations: list[ImplementedType] = list()
                # if peek_text(tokens, pos)=="type":
                #     pos, processed_rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=0)
                #     matched = len(processed_rets)==len(rets)
                #     if matched:
                #         for processed_ret, rets_ret in zip(processed_rets, rets):
                #             if processed_ret.type!=rets_ret.type and processed_ret.type.is_literal_of!=rets_ret.type:
                #                 matched = False
                #                 break
                #     rets = [Variable(create_temp(), TRUE_TYPE) if matched else Variable(create_temp(), FALSE_TYPE)]
                #     impl.vars[rets[0].name] = rets[0]
                #     return pos, rets
                pos, type = await process_linear_type(file, tokens, pos, reduce_to_unique_variations=False, show_lsp=True, impl=impl)
                count_with_literals = 0
                for variation in type.variations:
                    matched = len(variation.rets)==len(rets)
                    is_with_literal = False
                    if matched:
                        for variation_ret, rets_ret in zip(variation.rets, rets):
                            # literal_method = variation.vars[variation_ret].type
                            # if literal_method.is_literal_of is not None and (literal_method.is_literal_of==CSTR_TYPE or literal_method.is_forced_pointer_type_of):
                            #     current = literal_method.at.text
                            #     tmp: str|None = global_cstr2var.get(current, None)
                            #     ptr_type = literal_method.is_forced_pointer_type_of
                            #     variable = Variable(tmp if tmp else create_temp(), POINTER_TYPE if ptr_type else literal_method.is_literal_of, token=op_token)
                            #     if tmp is None: 
                            #         global_cstr2var[current] = variable.name
                            #         global_var2cstr[variable.name] = current
                            #     impl.vars[variable.name] = variable
                            #     impl.used_globals.add(variable.name)
                            #     if ptr_type: impl.set_pointer_type(variable, ptr_type)
                                
                            #     variable2 = rets_ret
                            #     if variable2.type.is_literal_of:
                            #         current = literal_method.at.text
                            #         tmp: str|None = global_cstr2var.get(current, None)
                            #         ptr_type = literal_method.is_forced_pointer_type_of
                            #         variable2 = Variable(tmp if tmp else create_temp(), POINTER_TYPE if ptr_type else literal_method.is_literal_of, token=op_token)
                            #         if tmp is None: 
                            #             global_cstr2var[current] = variable2.name
                            #             global_var2cstr[variable2.name] = current
                            #         impl.vars[variable2.name] = variable2
                            #         impl.used_globals.add(variable2.name)
                            #         if ptr_type: impl.set_pointer_type(variable2, ptr_type)
                            #     if variable.name==variable2.name: 
                            #         continue
                            if variation.vars[variation_ret].type.is_literal_of:
                                is_with_literal = True
                            if (variation.vars[variation_ret].type!=rets_ret.type and variation.vars[variation_ret].type.is_literal_of!=rets_ret.type):
                                matched = False
                                break
                    if matched: 
                        found_variations.append(variation)
                        if is_with_literal: count_with_literals += 1
                if count_with_literals<len(found_variations):
                    rets = [Variable(create_temp(), TRUE_TYPE)]
                elif count_with_literals:
                    has_any_var = Variable(create_temp(), BOOL_TYPE, token=op_token)
                    is_variation_matching_var = Variable(create_temp(), BOOL_TYPE, token=op_token)
                    impl.vars[has_any_var.name] = has_any_var
                    impl.vars[is_variation_matching_var.name] = is_variation_matching_var
                    for variation in found_variations:
                        impl.implementation.extend([is_variation_matching_var, CODEWORD_EQUALS, CODEWORD_ONE,CODEWORD_SEMICOLON])
                        for arg_pos, arg in enumerate(variation.rets):
                            literal_method = variation.vars[arg].type
                            if literal_method.is_literal_of is None: continue # already checked
                            if literal_method.is_literal_of==CSTR_TYPE or literal_method.is_forced_pointer_type_of:
                                current = literal_method.at.text
                                tmp: str|None = global_cstr2var.get(current, None)
                                ptr_type = literal_method.is_forced_pointer_type_of
                                variable = Variable(tmp if tmp else create_temp(), POINTER_TYPE if ptr_type else literal_method.is_literal_of, token=op_token)
                                if tmp is None: 
                                    global_cstr2var[current] = variable.name
                                    global_var2cstr[variable.name] = current
                                impl.vars[variable.name] = variable
                                impl.used_globals.add(variable.name)
                                if ptr_type: impl.set_pointer_type(variable, ptr_type)
                                
                                variable2 = rets[arg_pos]
                                if variable2.type.is_literal_of:
                                    current = literal_method.at.text
                                    tmp: str|None = global_cstr2var.get(current, None)
                                    ptr_type = literal_method.is_forced_pointer_type_of
                                    variable2 = Variable(tmp if tmp else create_temp(), POINTER_TYPE if ptr_type else literal_method.is_literal_of, token=op_token)
                                    if tmp is None: 
                                        global_cstr2var[current] = variable2.name
                                        global_var2cstr[variable2.name] = current
                                    impl.vars[variable2.name] = variable2
                                    impl.used_globals.add(variable2.name)
                                    if ptr_type: impl.set_pointer_type(variable2, ptr_type)

                                impl.implementation.extend([
                                    CODEWORD_IF,
                                    CODEWORD_LPAR,
                                    variable,
                                    CODEWORD_COMPARISON_NOT_EQUALS,
                                    variable2,#rets[arg_pos],#CodeWord(rets[arg_pos].type.at.text),
                                    CODEWORD_RPAR,
                                    CODEWORD_LBRACKET,
                                    is_variation_matching_var,
                                    CODEWORD_EQUALS,
                                    CODEWORD_ZERO,
                                    CODEWORD_SEMICOLON,
                                    CODEWORD_RBRACKET,
                                ])
                            else:
                                variable = Variable(create_temp(), literal_method.is_literal_of, token=op_token)
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
                                    CODEWORD_COMPARISON_NOT_EQUALS,
                                    CodeWord(rets[arg_pos].type.at.text),
                                    CODEWORD_RPAR,
                                    CODEWORD_LBRACKET,
                                    is_variation_matching_var,
                                    CODEWORD_EQUALS,
                                    CODEWORD_ZERO,
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
                            CODEWORD_ONE,
                            CODEWORD_SEMICOLON,
                            CODEWORD_RBRACKET,
                        ])
                    rets = [has_any_var]
                else:
                    rets = [Variable(create_temp(), FALSE_TYPE, token=op_token)]
                impl.vars[rets[0].name] = rets[0]
                return pos, rets
            pos, rets = await process_is(pos, rets)
            continue
        if op=="." and (
            (len(rets)==5 and rets[0].type.is_buffer_of
                and not peek_text(tokens, pos+1) in ["unsafe_ptr", "unsafe_size", "unsafe_align", "unsafe_offset"] 
                and any(preview==peek_next or preview.startswith(peek_next+"__") for preview in rets[0].type.is_buffer_of.rets)) 
            or (len(rets)==1 and rets[0].type==POINTER_TYPE 
                and impl.get_pointer_type(rets[0]) not in NONE_OR_ANY 
                and any(preview==peek_next or preview.startswith(peek_next+"__") for preview in impl.get_pointer_type(rets[0]).rets))
        ):
            if is_lsp and op_token.file.is_main_file: print_lsp_keyword(op_token, "**memory field**\n\nRetrieves a safe offset to a buffer or pointer based on its type's content layout.")
            def process_substructure(pos: int, rets: list[Variable]):
                associated_type: ImplementedType|None = None
                if len(rets)==1 and rets[0].type==POINTER_TYPE:
                    associated_type = impl.get_pointer_type(rets[0])
                    if associated_type is None or associated_type==ANY_TYPE: tokens[pos].error("type", "cannot apply the @ notation on 'any ptr', as an explicit type is needed to compute offsets")
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
                    offset = 0
                    for i in range(min_pos):
                        var = associated_type.vars[associated_type.rets[i]]
                        mem_size = var.type.memory_size() if var.type.builtin else 0
                        offset += mem_size
                    len_common_prefix = 0
                    temp_type = ImplementedType(associated_type.name+"."+field_name)
                    associated_len_common_prefix = longest_common_prefix_len([var for var in associated_type.rets[min_pos:max_pos_plus_one]])
                    for j in range(min_pos, max_pos_plus_one):
                        new_name = associated_type.rets[j][associated_len_common_prefix:]
                        temp_type.rets.append(new_name)
                        temp_type.vars[new_name] = associated_type.vars[associated_type.rets[j]].renamed_copy(new_name)
                    new_var = Variable(create_temp(), POINTER_TYPE, immutable=rets[0].immutable, isprivate=rets[0].isprivate, token=op_token)
                    impl.vars[new_var.name] = new_var
                    impl.set_pointer_type(new_var, temp_type)
                    if is_lsp and field_token.file.is_main_file: print_lsp_var(field_token, signature_like([new_var], impl))

                    impl.implementation.extend([
                        CODEWORD_IF,
                        CODEWORD_LPAR,
                        CODEWORD_NOT,
                        rets[0],
                        CODEWORD_RPAR,
                        CODEWORD_LBRACKET,
                    ])
                    if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: op_token.error("safety", "the matching 'try' has already handled a different failure")
                    try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
                    if try_var is not None:
                        impl.has_any_complaint = True
                        impl.implementation.extend([
                            CODEWORD_TCOMPLAIN,
                            CODEWORD_EQUALS,
                            CODEWORD_TWO,
                            CODEWORD_SEMICOLON,
                            CODEWORD_RBRACKET,
                            CODEWORD_ELSE,
                            CODEWORD_LBRACKET
                        ])
                        impl.spawned_error_codes.add(2)
                        impl.count_handled_tries[-1] += 1
                    else:
                        # non-allocation check is mandatory unfortunately
                        if debug_mode:
                            err_token = op_token
                            text = "\\033[31mmemory error\\033[0m null pointer\\n"
                            text += "\\033[31mat\\033[0m "+err_token.file.path.replace('"','\\"')+" line "+str(err_token.row)+" column "+str(err_token.col)+"\\n"
                            impl.implementation.extend([
                                CODEWORD_PRINTF,
                                CODEWORD_LPAR,
                                CodeWord('"%s"'),
                                CODEWORD_COMMA,
                                CodeWord('"'+text.replace('"', '\\"')+'"'),
                                CODEWORD_RPAR,
                                CODEWORD_SEMICOLON,
                            ])
                        impl.implementation.extend([
                            CODEWORD_TERRCODE,
                            CODEWORD_EQUALS,
                            CODEWORD_TWO,
                            CODEWORD_SEMICOLON
                        ])
                        impl.spawned_error_codes.add(2)
                        impl.implementation.extend([
                            CODEWORD_GOTO,
                            CODEWORD_TFAILURE,
                            CODEWORD_SEMICOLON,
                            CODEWORD_RBRACKET
                        ])
                        impl.needs_failure_mode = op_token
                    impl.implementation.extend([
                        new_var,
                        CODEWORD_EQUALS,
                        rets[0],
                        CODEWORD_ADD,
                        CodeWord(str(offset)),
                        CODEWORD_SEMICOLON
                    ])
                    impl._assignment_graph = None
                    impl.dependent_assignments[new_var.name] = rets[0].name
                    return pos, [new_var]

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
                if count!=1 or associated_type is None: tokens[pos].error("type", "can only apply '@' on a buffer or pointer, not '"+signature_like(rets)+"'")
                if associated_type==ANY_TYPE: tokens[pos].error("type", "cannot apply the . notation on 'any[]', as an explicit type is needed to compute offsets")
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
                len_common_prefix = longest_common_prefix_len([var.name for var in rets])
                new_rets = list()
                temp_type = ImplementedType(associated_type.name+"."+field_name)
                associated_len_common_prefix = longest_common_prefix_len([var for var in associated_type.rets[min_pos:max_pos_plus_one]])
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
                            var,
                            CODEWORD_SEMICOLON
                        ])
                        impl._assignment_graph = None
                        impl.dependent_assignments[new_name] = prev_name
                    elif var.name.endswith("__unsafe_offset"):
                        new_var = var.renamed_copy(new_name)
                        impl.vars[new_var.name] = new_var
                        impl.implementation.extend([
                            new_var,
                            CODEWORD_EQUALS,
                            var,
                            CODEWORD_ADD,
                            CodeWord(str(offset)),
                            CODEWORD_SEMICOLON
                        ])
                    else:
                        impl.assign(new_name, [var], field_token, False, False)
                        new_var = impl.vars[new_name]
                        impl._assignment_graph = None
                        impl.dependent_assignments[new_name] = prev_name # transfer this but not the offset
                    new_rets.append(new_var)
                rets = new_rets
                return pos, new_rets
            pos, rets = process_substructure(pos, rets)
            continue
        elif op=="::":
            pos += 1
            reflection_token = get(tokens, pos)
            pos += 1
            reflection_token_text = reflection_token.text
            if len(rets)!=1:
                get(tokens, pos-2).error("type", "reflection is applicable only to types, functor variables, or variable descriptors but got: '"+signature_like(rets, impl)+"'")
            reflection_var = rets[0]
            if reflection_var.type.is_functor_of is None and reflection_var.type.is_literal_of!=ANY_TYPE:
                get(tokens, pos-2).error("type", "reflection is applicable only to types, functor variables, or variable descriptors but got: '"+signature_like(rets, impl)+"'")
            
            variation = reflection_var.type
            variations = list()
            at = variation.at
            if at is None: reflection_token.error("type", "type '"+variation.signature()+"' has no definition point")
            assert at is not None
            lit: Optional[UnionType] = None
            if reflection_var.type.is_literal_of==ANY_TYPE:
                if reflection_token.text not in reflection_var.type.rets:
                    reflection_token.error("type", "variable descriptor has no member to unpack: '"+reflection_token.text+"' but found candidates: "+', '.join(reflection_var.type.rets))
                ret = Variable(create_temp(), reflection_var.type.vars[reflection_token.text].type)
                impl.vars[ret.name] = ret
                rets = [ret]
                continue
            elif reflection_token_text=="name":
                lit = create_literal_type(Token("\""+variation.name+"\"", at.file, at.row, at.col), CSTR_TYPE)
                if is_lsp and get(tokens,pos-2).file.is_main_file: print_lsp_literal(reflection_token, "**type "+reflection_token_text+" literal**\n\nRetrieves the type's "+reflection_token_text+" as the literal type "+lit.at.text)
                assert lit is not None
                for litvar in lit.variations:
                    if litvar not in variations: variations.append(litvar)
            elif reflection_token_text=="rets":
                reflection_token.error("type", "'::rets' is supported only during type resolution")
            elif reflection_token_text=="args":
                reflection_token.error("type", "'::args' is supported only during type resolution")
            else:
                reflection_token.error("type", "only '::name' or '::args' are allowed for reflection but got '::"+reflection_token_text+"'")
            assert lit is not None
            ret = Variable(create_temp(), lit.variations[0])
            impl.vars[ret.name] = ret
            rets = [ret]
            continue
        elif op==".":
            async def process_access(pos: int, rets: list[Variable]):
                current_token = tokens[pos]
                # if peek_text(tokens, pos+1)==".":
                #     if len(rets)==1 and rets[0].type==POINTER_TYPE:
                #         pos, rets = process_deref(file, pos, rets, impl, current_token)
                #         pos += 2
                #         return pos, rets
                #     current_token.error("syntax", "can dereference only a pointer or functor but got '"+signature_like(rets, impl)+"'")
                current_length = longest_common_prefix_len([r.name for r in rets])
                current = "" if current_length==0 else rets[0].name[:current_length]
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
                        pos, type = await process_type(file, tokens, pos+1, impl=impl)
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
                        if varname.startswith("__t") or "____t" in varname: continue
                        common_length = longest_common_prefix_len([varname, current])
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
                    pos, type = await process_type(file, tokens, pos+1, impl=impl)
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
                while peek_text(tokens, pos)==",":
                    pos, comma_rets = await process_statement(file, tokens, pos+1, impl, current_operator_priority=0)
                    additional_rets += comma_rets
                if peek_text(tokens, pos)!="]": err_token.error("syntax", "missing closing ']'")
                pos += 1
                get_func_name = "get"
                deref = True
                also_assign = False
                if peek_text(tokens, pos)=="&" and peek_text(tokens, pos+1)=="&":
                    #if is_lsp and get(tokens, pos).file.is_main_file: print_lsp_var(get(tokens, pos), "mut ptr {"+signature_like(rets+additional_rets, impl)+"}")
                    get_func_name = "mutget"
                    deref = False
                    pos += 2
                elif peek_text(tokens, pos)=="&":
                    #if is_lsp and get(tokens, pos).file.is_main_file: print_lsp_var(get(tokens, pos), "ptr {"+signature_like(rets+additional_rets, impl)+"}")
                    deref = False
                    pos += 1
                elif peek_text(tokens, pos)=="=":
                    get_func_name = "mutget"
                    deref = False
                type = file.types.get(get_func_name, None)
                if type is None: err_token.error("type", "missing implementation for '"+get_func_name+"'")
                assert type is not None
                args = rets+additional_rets
                rets = resolve_call(file, impl, type, args, err_token, [Variable(create_temp(), POINTER_TYPE, immutable=get_func_name!="mutget")])
                if deref:
                    pos, rets = process_deref(file, pos, rets, impl, err_token, explicit=False)
                else:
                    for a in args:
                        if a.type!=POINTER_TYPE: continue
                        for r in rets:
                            if r.type!=POINTER_TYPE: continue
                            impl.add_required_accompany(r, a)
                return pos, rets
            pos, rets = await process_get(pos, rets)
            continue
        # elif op_priority==-1:
        #     op_token.error("syntax", "'->' has been deprecated")
        #     pos, type = await process_type(file, tokens, pos+1, impl=impl)
        #     if not isinstance(type, UnionType): op_token.error("type", "resolved to a file but not a type")
        #     pos -= 1
        #     op_priority = -0.5
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
        impl.needs_failure_mode = current_token
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
                    CodeWord('"%s"'),
                    CODEWORD_COMMA,
                    CodeWord('"'+text.replace('"', '\\"')+'"'),
                    CODEWORD_RPAR,
                    CODEWORD_SEMICOLON,
                ])
            if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: current_token.error("safety", "the matching 'try' has already handled a different failure")
            try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
            if try_var is not None:
                impl.has_any_complaint = True
                impl.implementation.extend([
                    CODEWORD_TCOMPLAIN,
                    CODEWORD_EQUALS,
                    ret[0],
                    CODEWORD_SEMICOLON
                ])
                impl.count_handled_tries[-1] += 1
            else:
                if impl.is_parsing_a_defer: current_token.error("safety", "cannot fail within a 'defer' statement unless within a 'try'")
                impl.implementation.extend([
                    CODEWORD_TERRCODE,
                    CODEWORD_EQUALS,
                    ret[0],
                    CODEWORD_SEMICOLON,
                    CODEWORD_GOTO,
                    CODEWORD_TFAILURE,
                    CODEWORD_SEMICOLON
                ])
                impl.needs_failure_mode = current_token
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
                CodeWord('"%s"'),
                CODEWORD_COMMA,
                CodeWord('"'+text.replace('"', '\\"')+'"'),
                CODEWORD_RPAR,
                CODEWORD_SEMICOLON,
            ])
        if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: current_token.error("safety", "the matching 'try' has already handled a different failure")
        try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
        if try_var is not None:
            impl.has_any_complaint = True
            impl.implementation.extend([
                CODEWORD_TCOMPLAIN,
                CODEWORD_EQUALS,
                CodeWord(str(err_code)),
                CODEWORD_SEMICOLON
            ])
            impl.count_handled_tries[-1] += 1
        else:
            if impl.is_parsing_a_defer: current_token.error("safety", "cannot fail within a 'defer' statement unless within a 'try'")
            impl.implementation.extend([
                CODEWORD_TERRCODE,
                CODEWORD_EQUALS,
                CodeWord(str(err_code)),
                CODEWORD_SEMICOLON,
                CODEWORD_GOTO,
                CODEWORD_TFAILURE,
                CODEWORD_SEMICOLON
            ])
            impl.needs_failure_mode = current_token
        return await process_statement_operator(file, tokens, impl, pos+1, [], current_operator_priority)
    if current=="true":
        tmp = create_temp()
        variable = Variable(tmp, BOOL_TYPE, token=current_token) 
        impl.vars[tmp] = variable
        impl.implementation.extend([
            variable,
            CODEWORD_EQUALS,
            CODEWORD_ONE,
            CODEWORD_SEMICOLON
        ])
        return await process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if current=="false":
        tmp = create_temp()
        variable = Variable(tmp, BOOL_TYPE, token=current_token)
        impl.vars[tmp] = variable
        impl.implementation.extend([
            variable,
            CODEWORD_EQUALS,
            CODEWORD_ZERO,
            CODEWORD_SEMICOLON
        ])
        return await process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
    if peek_text(tokens,pos+1)!="&":
        if current_token.is_string():
            if is_lsp and current_token.file.is_main_file: print_lsp_string(current_token)
            tmp: str|None = global_cstr2var.get(current, None)
            variable = Variable(tmp if tmp else create_temp(), CSTR_TYPE, token=current_token)
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
            variable = Variable(tmp, UINT_TYPE, token=current_token)
            impl.vars[tmp] = variable
            impl.implementation.extend([variable, CODEWORD_EQUALS, CodeWord(current), CODEWORD_SEMICOLON])
            return await process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
        if current_token.is_int():
            if is_lsp and current_token.file.is_main_file: print_lsp_literal(current_token, "an integer")
            tmp = create_temp()
            variable = Variable(tmp, INT_TYPE, token=current_token)
            impl.vars[tmp] = variable
            impl.implementation.extend([variable, CODEWORD_EQUALS, CodeWord(current), CODEWORD_SEMICOLON])
            return await process_statement_operator(file, tokens, impl, pos+1, [variable], current_operator_priority)
        if current_token.is_float():
            if is_lsp and current_token.file.is_main_file: print_lsp_literal(current_token, "a float value")
            tmp = create_temp()
            variable = Variable(tmp, FLOAT_TYPE, token=current_token)
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
    if peek_text(tokens, pos)=="[":
        #if peek_text(tokens, pos)!="[": get(tokens, pos).error("syntax", "expecting '[' after 'args'")
        variables_sets: list[list[Variable]] = list()
        pos, buffer_element = await process_statement(file, tokens, pos+1, impl, current_operator_priority=0)
        variables_sets.append(buffer_element)
        if not any(element.type.builtin for element in buffer_element): 
            current_token.error("type", "cannot create a buffer on empty data - it would not perform any allocation")
        # find temp type for data on the buffer

        if buffer_element and len(buffer_element[0].type.rets)==len(buffer_element):
            temp_type = buffer_element[0].type
        else:
            temp_type = ImplementedType(create_temp())
            total_name = ""
            j = 0
            for element in buffer_element:
                new_name = element.name
                while new_name in temp_type.vars: 
                    j = j+1
                    new_name = new_name+str(j)
                temp_type.rets.append(new_name)
                temp_type.vars[new_name] = element.renamed_copy(new_name)
                if total_name: total_name += ","
                total_name += element.type.name
            temp_type.name = total_name
        buffer_type = create_buffer_type(temp_type.name+"____buffer", str(temp_type.memory_size()), temp_type, current_token)
        buffer_type_method = UnionType(temp_type.name+"____t_buffer", at=current_token)
        buffer_type_method.variations.append(buffer_type)
        buffer_types[temp_type] = buffer_type_method
        while get(tokens, pos).text==",":
            pos += 1
            pos, buffer_element = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
            variables_sets.append(buffer_element)
            if len(temp_type.rets)!=len(buffer_element): get(tokens, pos).error("type", "mismatching buffer contents")
            for rx,ry in zip(buffer_element, temp_type.rets):
                if rx.type!=temp_type.vars[ry].type: get(tokens, pos).error("type", "mismatching buffer contents")
                if rx.immutable and not temp_type.vars[ry].immutable: get(tokens, pos).error("type", "mismatching buffer contents")
        if peek_text(tokens, pos)!="]": get(tokens, pos).error("syntax", "expecting closing ']' for 'args' here")
        should_ref = peek_text(tokens, pos+1)=="&"
        should_mut_ref = False
        if should_ref:
            pos += 1
            should_mut_ref = peek_text(tokens, pos+1)=="&"
            if should_mut_ref: pos += 1
        created_buffer = resolve_call(file, impl, buffer_type_method, [], current_token)
        #total_size = temp_type.memory_size()*len(variables_sets)
        alloc_type = file.types.get("alloc", None)
        if alloc_type is None: get(tokens, pos).error("syntax", "no valid 'alloc' allocator for buffer")
        size_var = Variable(create_temp(), UINT_TYPE)
        impl.vars[size_var.name] = size_var
        impl.implementation.extend([
            size_var,
            CODEWORD_EQUALS,
            CodeWord(str(len(variables_sets))),
            CODEWORD_SEMICOLON,
        ])
        impl.set_pointer_type(created_buffer[1], temp_type)
        resolve_call(file, impl, alloc_type, created_buffer+[size_var], current_token)

        progress = 0
        for buffer_element in variables_sets:
            for r_var in buffer_element:
                mem_size = r_var.type.memory_size() if r_var.type.builtin else 0
                impl.vars[r_var.name] = r_var
                if not mem_size: continue
                impl.implementation.extend(
                    [CodeWord(w) for w in "memcpy (".split(" ")]
                    + [created_buffer[1]]
                    + ([CODEWORD_ADD, CodeWord(str(progress))] if progress else [])
                    + [CODEWORD_COMMA]
                    + [CODEWORD_AMP]
                    + [r_var]
                    + [CODEWORD_COMMA, CodeWord(str(mem_size))]
                    + [CODEWORD_RPAR, CODEWORD_SEMICOLON]
                )
                progress += mem_size
                if r_var.type==POINTER_TYPE:
                    impl.add_required_accompany(created_buffer[1], r_var)
                    for v in impl.get_required_accompany(r_var):
                        impl.add_required_accompany(created_buffer[1], v)
        
        if should_ref:
            if should_mut_ref:created_buffer = [created_buffer[1]]
            else: created_buffer = [created_buffer[1].immutable_copy()]
            if is_lsp and get(tokens, pos).file.is_main_file: print_lsp_var(get(tokens, pos), signature_like(created_buffer, impl))
        return await process_statement_operator(file, tokens, impl, pos+1, created_buffer, current_operator_priority)

    if current=="macro":
        literal_tok = current_token
        if is_lsp and literal_tok.file.is_main_file: print_lsp_keyword(literal_tok, "**macro**\n\nEvaluates a dependent user-defined function that manipulates 'cstr' literals available at compile-time with the pattern 'macro<builder>(inputs)'. That function must return 'char[]', which is then re-tokenized and parsed as code.")
        if peek_text(tokens, pos+1)!="<":
            get(tokens, pos+1).error("syntax", "expecting 'macro'-ed string manipulation in 'macro<...>'")
        pos += 1
        pos, method = await process_linear_type(file, tokens, pos+1, show_lsp=True, reduce_to_unique_variations=False, impl=impl)
        if peek_text(tokens, pos)!=">":
            get(tokens, pos).error("syntax", "expecting closing '>'")
        pos += 1
        pos, ret = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
        pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
        temporary_implementation = _select_call(file, impl, method, ret, literal_tok, out_format=None)
        input_args = ret
        ret = input_args+[temporary_implementation.vars[r] for r in temporary_implementation.rets]
        memory = MemoryEmulator(1024*vm_memory_kb)
        returned_values = [0 for r in ret if r.type.builtin]
        for i, arg in enumerate(input_args):
            if arg.type!=CSTR_TYPE: 
                literal_tok.error("type", "macros can only have known cstr inputs", suggestions=["retrieve inputs with 'compiler::varname'", "directly pass a string literal", "directly pass a reflection string like type::name"])
            if arg.name not in global_var2cstr: 
                literal_tok.error("type", "macros can only have known cstr inputs", suggestions=["retrieve inputs with 'compiler::varname'", "directly pass a string literal", "directly pass a reflection string like type::name"])
            returned_values[i] = memory.write_cstr(global_var2cstr[arg.name][1:-1])
        temporary_implementation.defers.clear()
        returned_error = await temporary_implementation.interpret(returned_values, memory, recursion_budget=vm_recursion_budget)
        if returned_error!=0: literal_tok.error("interpreter", "failed due to "+err_code_list[returned_error][1:-1])
        returned_values = returned_values[len(input_args):]
        ret = ret[len(input_args):]
        if len(ret)==5 and ret[0].type.is_buffer_of==CHAR_TYPE:
            offset = returned_values[2]
            mem_size = returned_values[1]
            if returned_values[0]==0: literal_tok.error("interpreter", "failed because 'macro' evaluated to a null pointer value")
            text = memory.as_rawstr(returned_values[0]+offset, mem_size)
        else:
            literal_tok.error("type", "macros can only output char[] but returned '"+signature_like(ret, temporary_implementation)+"'")
        local_file = File("macro")
        local_file.cached = text.split("\n")
        local_file.types = file.types
        local_file.namespaces = file.namespaces
        local_file.localdefs = file.localdefs
        local_file, local_toks = _load(local_file, False, literal_tok)
        for tok in local_toks:
            tok.file = literal_tok.file
            tok.row = literal_tok.row
            tok.col = literal_tok.col
        if len(impl.nesting)>=MACRO_LIMIT:
            literal_tok.error("interpreter", "macros expanded more than "+str(MACRO_LIMIT)+" nesting levels deep (counting loops and conditions too), which indicates either infinite recursion that should be stopped, or metaprogramming hell the should be avoided; directly call code building")
        impl.nesting.append("macro")
        local_pos = 0
        local_pos, ret = await process_statement(file, local_toks, local_pos, impl, current_operator_priority=0)
        local_pos, ret = await process_statement_operator(file, local_toks, impl, local_pos, ret, current_operator_priority=0)
        impl.nesting.pop()
        return pos, ret
        
    if current=="mut":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**mutable**\n\nDeclares that the following value will be treated as mutable, meaning that it can be overwritten with a value of the same type, and that its fields and pointer contents may be modified. This also means that variables, fields and pointer contents may modified. Creates an error if such treatment is unsafe.")
        if peek_text(tokens, pos-1) not in ["=", "return"]: current_token.error("safety", "'mut' can only follow an assignment or 'return' symbol (temporary variables retain 'edit' status)")
        prev_pos = pos
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        if len(ret)==0:
            current_token.error("safety", "next value is blank")
        tmp = create_temp()
        impl.assign(tmp, ret, current_token)
        ret = [r for r in impl.vars.values() if r.name.startswith(tmp)]
        if all(r.stabilized_name()!=r.name for r in ret): current_token.error("safety", "references defined with 'ref' are skipped (not mutated) when adding mutation with 'mut'. And the current value consists only of references, so it does nothing.")
        mutated = [r.mutable_copy(tokens[prev_pos]) if r.stabilized_name()==r.name else r for r in ret]
        return await process_statement_operator(file, tokens, impl, pos, mutated, current_operator_priority)
    
    if current=="edit":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**editable**\n\nDeclares that the following value cannot be overwritten, but its fields and pointer contents may be modified. Creates an error if such treatment is unsafe.")
        if peek_text(tokens, pos-1) not in ["=", "return"]: current_token.error("safety", "'edit' can only follow an assignment or 'return' symbol (temporary variables retain 'edit' status)")
        prev_pos = pos
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        if len(ret)==0:
            current_token.error("safety", "next value is blank")
        tmp = create_temp()
        #prev_ret = ret
        impl.assign(tmp, ret, current_token)
        ret = [r for r in impl.vars.values() if r.name.startswith(tmp)]
        if not any(r.immutable or r.isprivate for r in ret): 
            current_token.error("safety", "'edit' is identical to 'mut' here; use the latter instead or remove the edentifier to prevent any editing")
        if all(r.stabilized_name()!=r.name for r in ret): current_token.error("safety", "references defined with 'ref' are skipped (not mutated) when adding mutation with 'edit' but the current value consists only of references")
        mutated = [r.editable_copy() if r.stabilized_name()==r.name else r for r in ret]
        return await process_statement_operator(file, tokens, impl, pos, mutated, current_operator_priority)
    
    # if current=="functor":
    #     pos, all_variations = await process_linear_type(file, tokens, pos+1, reduce_to_unique_variations=False, show_lsp=True, impl=impl)
    #     for variation in all_variations:
    #         if not variation.is_functor_of: current_token.error("type", "functor missing output type; try the syntax '(input type) -> (output type)'")
    #     if peek_text(tokens, pos)=="&":
    #         if len(all_variations)!=1: current_token.error("type", "more than one variations for retrieving a uniquely callable functor retrieved with '&'")
            
    #     pos, ret = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
    #     pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)
                
            
    if current=="try":
        async def process_try(pos: int):
            if is_lsp and current_token.file.is_main_file: print_lsp_keyword(current_token, "**try**\n\nTries to execute the rest of the statement without failing. The result is a true or false boolean value, depending on whether an error occurred or not; the error's value is retrieved by the next 'compiler:caught()'.")
            tmp = create_temp()
            var = Variable(tmp, BOOL_TYPE, token=current_token)
            impl.vars[tmp] = var
            impl.is_parsing_a_try.append(var)
            impl.count_handled_tries.append(0)
            pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
            pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority)
            if impl.count_handled_tries[-1]==0: current_token.error("safety", "this 'try' statement does not guard against anything")
            impl.count_handled_tries.pop()
            impl.is_parsing_a_try.pop()
            impl.implementation.extend([
                var,
                CODEWORD_EQUALS,
                var,
                CODEWORD_COMPARISON_EQUALS,
                CODEWORD_ZERO,
                CODEWORD_SEMICOLON
            ])
            return pos, [var]
        return await process_try(pos)
    if current=="local":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**local**\n\nCreates an anonymized version of the next variable. Anonymization prevents mutable modidications from affecting the original, although it does not safeguard memory contents.")
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        if len(ret)==0:# or all(r.name.startswith("__t") or "____t" in r.name for r in ret):
            current_token.error("safety", "next value is blank")
        tmp = create_temp()
        impl.assign(tmp, ret, current_token)
        ret = [r for r in impl.vars.values() if r.name.startswith(tmp)]
        ret = impl.stabilize(ret)
        return await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority)
    if current=="ref":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**reference**\n\nTracks changes to the referenced value, such as buffer modifications, and makes all subsequent usage of the value (even implicit usage) use the referenced value. References are unpacked into actual independent values during returns.")
        #if peek_text(tokens, pos-1) not in ["="]: current_token.error("safety", "'ref' can only follow an assignment symbol")
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
    if current=="unsafe_valid":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**unsafe revalidation**\n\nDeclares that the following value will be treated as valid from hereon, even if it would have normally been invalidated. YOU HAVE BEEN WARNED.")
        prev_pos = pos
        next_tok = get(tokens, pos+1)
        ret = [var for var in impl.vars.values() if var.name==next_tok.text or var.name.startswith(next_tok.text+"__")]
        for r in ret:
            if r in impl.invalidated:
                del impl.invalidated[r]
        return await process_statement_operator(file, tokens, impl, pos+2, ret, current_operator_priority)
    if current=="const":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**constant value or memory**\n\nDeclares that the following value will be treated as fully immutable (it cannot be the reason why fields and pointer contents are modified). This strips away any class membership information too. Do note that this does NOT mean that memory cannot be modified elsewhere - just that the yielded value cannot anymore be the source of modifications.")
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        return await process_statement_operator(file, tokens, impl, pos, [r.immutable_copy() for r in ret], current_operator_priority)
    if current == "INVALIDATE":
        if is_lsp and current_token.file.is_main_file: print_lsp_keyword(current_token, "**INVALIDATE**\n\nInvalides all data of the subsequent type that are not __unsafe_ptr; DO NOT USE THIS KEYWORD unless you are trying to enforce some safety patterns on exceptionally unsafe code, such as pointer invalidation whenever memory is reallocated or freed.")
        pos, type = await process_linear_type(file, tokens, pos+1, impl=impl)
        for varname, val in impl.vars.items():
            if val.type in type.variations:# and not varname.endswith("__unsafe_ptr"):
                impl.invalidated[val.stabilized_name()] = current_token
                if not val.immutable:
                    impl.implementation.extend([
                        val, 
                        CODEWORD_EQUALS,
                        CODEWORD_ZERO,
                        CODEWORD_SEMICOLON
                    ])
        if impl.is_parsing_a_defer: impl.invalidate_types_on_defer.extend(type.variations)
        else: impl.invalidate_types_when_called.extend(type.variations)
        return pos, []
    # if current == "deref" or current=="::":
    #     pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
    #     pos, ret = process_deref(file, pos, ret, impl, current_token)
    #     return await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority)
    if current == "class":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**class declaration**\n\npacks into a type class unique to this function")
        if impl.has_retrieved_singleton: current_token.error("safety", "cannot create both a singleton and a class for the same function", reason=impl.has_retrieved_singleton, raason_message="due to")
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        tmp = create_temp()
        var_class = Variable(tmp, impl, token=current_token)
        impl.vars[tmp] = var_class
        impl.has_retrieved_class = current_token
        return await process_statement_operator(file, tokens, impl, pos, [var_class]+[r.private_copy() if r.immutable else r for r in ret], current_operator_priority)

    if current == "singleton":
        if is_lsp and current_token.file.is_main_file: print_lsp_decorator(current_token, "**singleton class declaration**\n\npacks into a type class unique to this function, while further setting this function as a singleton resource")
        if impl.has_retrieved_class: current_token.error("safety", "cannot create both a singleton (class with a single instance) and a class for the same function", reason=impl.has_retrieved_class, raason_message="due to")
        pos, ret = await process_statement(file, tokens, pos+1, impl, current_operator_priority)
        tmp = create_temp()
        var_class = Variable(tmp, impl, token=current_token)
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
            littype = literal_types.get("\""+peek+"\"", None)
            if littype is None: get(tokens, prev_pos).error("syntax", "expecting comma, closing parenthesis, or keyword derived from a cstr literal type but got: '"+peek+"'")
            if is_lsp and get(tokens, pos).file.is_main_file: print_lsp_keyword(get(tokens, pos), "**literal type**\n\nThis is a shorthand to adding a 'type \""+peek+"\"' argument here.")
            litvar = Variable(create_temp(), littype.variations[0])
            impl.vars[litvar.name] = litvar
            ret.append(litvar)
        pos += 1 # skip closing parenthesis
        if peek_text(tokens, pos)=="as" or peek_text(tokens, pos)=="." or peek_text(tokens, pos)=="[" or (peek_text(tokens, pos) in operators and for_call): return pos, ret  # manual left-to-right piping
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
        is_mutable_assignment = peek_text(tokens, pos+2)=="mut" or peek_text(tokens, pos+2)=="unsafe_mut" or peek_text(tokens, pos+2)=="edit" or peek_text(tokens, pos+2)=="ref"
        var_token = get(tokens, pos)
        op_token = get(tokens, pos+1)
        if var is not None and var.isprivate: tokens[pos].error("type", "cannot set to immutable class field: '"+pretty_name(current)+"'")
        current_prefix = current+"__"
        pos, ret = await process_statement(file, tokens, pos+2, impl, current_operator_priority=0)
        pos, ret = await process_statement_operator(file, tokens, impl, pos, ret, current_operator_priority=0)

        skip_next_pointer_interior_assignment = False
        if len(ret)==1 and ret[0].type==POINTER_TYPE:
            if peek_text(tokens, pos)=="&" and peek_text(tokens, pos+1)=="&":
                pos += 2
                skip_next_pointer_interior_assignment = True
            elif peek_text(tokens, pos-1)=="&" and peek_text(tokens, pos-2)=="&":
                skip_next_pointer_interior_assignment = True
        if var and var.type==POINTER_TYPE and not skip_next_pointer_interior_assignment:
            rets = [var]
            err_token = var_token
            op_name = op_token.text
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
            if pointer_type is None or pointer_type==ANY_TYPE: err_token.error("type", "cannot "+op_name+" a value onto a pointer with unknown associated type."+(" Perhaps you meant to add && after the value to make this a pointer assignment?"if len(ret)==1 and ret[0].type==POINTER_TYPE else ""))
            assert pointer_type is not None
            if len(pointer_type.rets)!=len(ret): err_token.error("type", "this is a pointer to data of different type: '"+signature_like(ret)+"' vs '"+pointer_type.signature()+"'"+(". Perhaps you meant to add && after the value to make this a pointer assignment?"if len(ret)==1 and ret[0].type==POINTER_TYPE else ""))
            for pr, r in zip(pointer_type.rets, ret):
                if pointer_type.vars[pr].type != r.type: err_token.error("type", "this is a pointer to data of different type: '"+signature_like(ret)+"' vs '"+pointer_type.signature()+"'"+(". Perhaps you meant to add && after the value to make this a pointer assignment?"if len(ret)==1 and ret[0].type==POINTER_TYPE else ""))
            # we now have a contract that we can place our data on the pointer
            impl.implementation.extend([
                CODEWORD_IF,
                CODEWORD_LPAR,
                CODEWORD_NOT,
                var,
                CODEWORD_RPAR,
                CODEWORD_LBRACKET,
            ])
            if impl.is_parsing_a_try and impl.is_parsing_a_try[-1] is None: op_token.error("safety", "the matching 'try' has already handled a different failure")
            try_var = impl.is_parsing_a_try[-1] if impl.is_parsing_a_try else None
            if try_var is not None:
                impl.has_any_complaint = True
                impl.implementation.extend([
                    CODEWORD_TCOMPLAIN,
                    CODEWORD_EQUALS,
                    CODEWORD_TWO,
                    CODEWORD_SEMICOLON,
                    CODEWORD_RBRACKET,
                    CODEWORD_ELSE,
                    CODEWORD_LBRACKET
                ])
                impl.spawned_error_codes.add(2)
                impl.count_handled_tries[-1] += 1
            else:
                # non-allocation check is mandatory unfortunately
                if debug_mode:
                    text = "\\033[31mmemory error\\033[0m null pointer\\n"
                    text += "\\033[31mat\\033[0m "+err_token.file.path.replace('"','\\"')+" line "+str(err_token.row)+" column "+str(err_token.col)+"\\n"
                    impl.implementation.extend([
                        CODEWORD_PRINTF,
                        CODEWORD_LPAR,
                        CodeWord('"%s"'),
                        CODEWORD_COMMA,
                        CodeWord('"'+text.replace('"', '\\"')+'"'),
                        CODEWORD_RPAR,
                        CODEWORD_SEMICOLON,
                    ])
                impl.implementation.extend([
                    CODEWORD_TERRCODE,
                    CODEWORD_EQUALS,
                    CODEWORD_TWO,
                    CODEWORD_SEMICOLON
                ])
                impl.spawned_error_codes.add(2)
                impl.implementation.extend([
                    CODEWORD_GOTO,
                    CODEWORD_TFAILURE,
                    CODEWORD_SEMICOLON,
                    CODEWORD_RBRACKET
                ])
                impl.needs_failure_mode = op_token

            progress = 0
            for r in ret:
                mem_size = r.type.memory_size() if r.type.builtin else 0
                if not mem_size: continue
                impl.implementation.extend(
                    [CodeWord("memcpy"), CODEWORD_LPAR]
                    +[var]
                    + ([CODEWORD_ADD, CodeWord(str(progress))] if progress else [])
                    + [CODEWORD_COMMA, CODEWORD_AMP]
                    + [impl.vars[r.stabilized_name()]]
                    + [CODEWORD_COMMA, CodeWord(str(mem_size))]
                    + [CODEWORD_RPAR, CODEWORD_SEMICOLON]
                )
                if impl.vars[r.stabilized_name()].type==POINTER_TYPE:
                    for other_var in impl.get_required_accompany(var):
                        impl.add_required_accompany(other_var, impl.vars[r.stabilized_name()])
                    impl.add_required_accompany(var, impl.vars[r.stabilized_name()])
                progress += mem_size
            if try_var is not None: impl.implementation.append(CODEWORD_RBRACKET)
            found: list[Variable] = [] 
            if is_lsp and var_token.file.is_main_file: print_lsp_var(var_token, signature_like([var],impl))
            return pos, found


        previous = [val for varname, val in impl.vars.items() if varname.startswith(current_prefix)]
        if len(previous)!=len(ret) and previous: current_token.error("type", "cannot set an incompatible type on '"+pretty_name(current)+"' previous type was '"+signature_like(previous, impl)+"' and cannot be replaced by '"+signature_like(ret, impl)+"'")
        if previous:
            for p, r in zip(previous, ret): impl.assign(p.name, [r], current_token)
        else:
            impl.assign(current, ret, current_token, strip_mutability=not is_mutable_assignment)

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
                if varname.startswith("__t") or "____t" in varname: continue
                common_length = longest_common_prefix_len([varname, current])
                if common_length>max_candidate_common_length: 
                    field_candidates = list()
                    max_candidate_common_length = common_length
                if common_length==max_candidate_common_length: 
                    varname = pretty_name(varname)
                    field_candidates.append(varname)
            current_token.error("type", "not found field '"+pretty_name(current)+"'", suggestions=[candidate for candidate in field_candidates]) 
        start_call = get(tokens,pos)
        is_type_resolution = start_call.text=="type"
        if is_type_resolution:
            if is_lsp and start_call.file.is_main_file: print_lsp_decorator(start_call, "**literal or function type**\n\nPerform type resolution and store the result as a first-class variable. This creates a literal type value from a literal, or a functor from a function.")
            pos, method = await process_linear_type(file, tokens, pos+1, reduce_to_unique_variations=False, show_lsp=True, impl=impl)
            if all(variation.is_literal_of is None for variation in method.variations): 
                return pos, convert_method_to_functor(impl, method, start_call)
            pos -= 1
        else:
            # then resolve to a call based on type
            pos, method = await process_linear_type(file, tokens, pos, reduce_to_unique_variations=False, impl=impl)
        call_token = get(tokens, pos-1)
        if all(variation.is_literal_of is not None for variation in method.variations):
            if len(method.variations)==0: call_token.error("type", "cannot have no literal type alternatives")
            if len(method.variations)!=1: call_token.error("type", "cannot have multiple literal type alternatives", suggestions=[variation.signature() for variation in method.variations])
            literal_method = method.variations[0]
            if is_type_resolution:
                pos += 1
                variable = Variable(create_temp(), literal_method, token=current_token)
                if is_lsp and get(tokens,pos-2).file.is_main_file: print_lsp_literal(get(tokens,pos-2), "**retrieve literal type**\n\nRetrieves the type defined to evaluate to "+literal_method.at.text)
                impl.vars[variable.name] = variable
                varsret = [variable]
            elif literal_method.is_literal_of==literal_method: # unpack literal type that points to itself
                varsret = list()
                for ret in literal_method.rets:
                    lit_method = literal_method.vars[ret].type
                    if lit_method.is_literal_of==CSTR_TYPE or (literal_method.is_literal_of and literal_method.is_forced_pointer_type_of):
                        current = lit_method.at.text
                        if is_lsp and current_token.file.is_main_file: 
                            if lit_method.is_literal_of==CSTR_TYPE: print_lsp_literal(call_token, "**literal**\n\ncstr defined to be "+literal_method.at.text)
                            else: print_lsp_literal(call_token, "**literal**\n\nstatic pointer transferred via a char[] representation")
                        tmp: str|None = global_cstr2var.get(current, None)
                        ptr_type = literal_method.is_forced_pointer_type_of
                        variable = Variable(tmp if tmp else create_temp(), POINTER_TYPE if ptr_type else lit_method.is_literal_of, token=current_token)
                        if tmp is None: 
                            global_cstr2var[current] = variable.name
                            global_var2cstr[variable.name] = current
                        impl.vars[variable.name] = variable
                        impl.used_globals.add(variable.name)
                        if ptr_type: impl.set_pointer_type(variable, ptr_type)
                        varsret.append(variable)
                    elif lit_method.is_literal_of:
                        variable = Variable(create_temp(), lit_method.is_literal_of, token=current_token)
                        if is_lsp and current_token.file.is_main_file: print_lsp_literal(call_token, "**literal**\n\nnumber defined to be "+literal_method.at.text)
                        impl.vars[variable.name] = variable
                        impl.implementation.extend([
                            variable,
                            CODEWORD_EQUALS,
                            CodeWord(lit_method.at.text),
                            CODEWORD_SEMICOLON
                        ])
                        varsret.append(variable)
                    else:
                        variable = Variable(create_temp(), literal_method.vars[ret].type)
                        impl.vars[variable.name] = variable
                        varsret.append(variable)
            elif literal_method.is_literal_of==CSTR_TYPE:
                current = literal_method.at.text
                if is_lsp and current_token.file.is_main_file: print_lsp_literal(call_token, "**literal**\n\ncstr defined to be "+literal_method.at.text)
                tmp: str|None = global_cstr2var.get(current, None)
                variable = Variable(tmp if tmp else create_temp(), CSTR_TYPE, token=current_token)
                if tmp is None: 
                    global_cstr2var[current] = variable.name
                    global_var2cstr[variable.name] = current
                impl.vars[variable.name] = variable
                impl.used_globals.add(variable.name)
                varsret = [variable]
            else:
                variable = Variable(create_temp(), literal_method.is_literal_of, token=current_token)
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
            out_format: Optional[list[Variable]] = None
            if peek_text(tokens, pos)=="->":
                out_type_token = get(tokens, pos)
                if is_lsp and out_type_token.file.is_main_file: print_lsp_keyword(out_type_token, "**select function based on output**\n\nSelects from all available calls one that matches the designated type. This helps specialize when there are more than one valid calls.")
                pos, out_type = await process_linear_type(file, tokens, pos+1, True, impl=impl)
                if len(out_type.variations)!=1: out_type_token.error("type", "failed to resolve to a unique desired output type")
                out_format = [out_type.variations[0].vars[r].renamed_copy(create_temp()) for r in out_type.variations[0].rets]
            varsret = resolve_call(file, impl, method, vars, call_token, out_format=out_format)
        return await process_statement_operator(file, tokens, impl, pos, varsret, current_operator_priority)
    return await process_statement_operator(file, tokens, impl, pos+1, [var], current_operator_priority)

async def process_body(file: File, tokens: list[Token], pos: int, impl: ImplementedType, one_line: bool=False):
    def skip_statement(file: File, tokens: list[Token], pos: int):
        get(tokens, pos).error("safety", "this statement needs to start in a new line because it could be skipped (for now, skipping relies on code block indentation to properly end)")

    if peek_text(tokens, pos)!=START_TOKEN and not one_line: get(tokens,pos).error("syntax", "expecting indentation")
    pos += 1
    start_pos = pos
    while pos<len(tokens):
        if one_line and pos>start_pos: return pos
        name = get(tokens, pos)
        pos += 1
        if name.text==END_TOKEN and not one_line: return pos
        if name.text=="{" and get_skip(tokens,pos).is_string():
            impl.linker.append(get_skip(tokens,pos).text[1:-1])
            pos += 1
            if peek_text(tokens,pos)!="}": name.error("syntax", "linker instruction should be a string within branckets")
            pos += 1
            continue
        if name.text=="{":
            depth = 1
            while pos<len(tokens):
                tok = tokens[pos]
                if tok.starts(): 
                    pos += 1
                    continue
                if tok.ends(): 
                    pos += 1
                    continue
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
                    variable = Variable(varname, rets[0].type, token=tok)
                    impl.vars[varname] = variable
                    impl.implementation.append(variable)
                elif tok.text=="builtins" and peek_text(tokens, pos+1)=="::":
                    pos += 2
                    pos, type = await process_type(file_cache["builtins"], tokens, pos, impl=impl)
                    if not isinstance(type, UnionType): get(tokens, pos).error("type", "only builtin types can be unpacked here but found file '"+pretty_name(type.path)+"'")
                    assert isinstance(type, UnionType)
                    variations = [variation for variation in type.variations if variation.builtin]
                    if not variations: get(tokens, pos).error("type", "only builtin types can be unpacked here '"+pretty_name(type.name)+"'",suggestions=list(set(t.name for ut in type.at.file.types for t in ut.variations if t.builtin)))
                    for variation in variations:
                        if type.variations[0].builtin!=variation.builtin:
                            get(tokens, pos).error("type", "more than one types in union '"+pretty_name(type.name)+"'",suggestions=[t.signature() for t in variations])
                    
                    #impl.implementation.append(CodeWord(type.variations[0].builtin))
                    varname = get(tokens, pos).text
                    variable = Variable(varname, type.variations[0], token=get(tokens,pos))
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
                impl.implementation.extend([CODEWORD_GOTO, CODEWORD_TRETURN, CODEWORD_SEMICOLON])
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
            if impl.is_parsing_a_defer: name.error("safety", "cannot call 'del' within a 'defer', as this would at most delay the latter")
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
                        # if varname in impl.args: name.error("safety", "cannot invalidate the associated function argument '"+pretty_name(varname)+"'")
                        # for r in impl.args:
                        #     if val in impl.get_required_accompany(impl.vars[r]):
                        #         name.error("safety", "would invalidate associated function argument '"+pretty_name(val.name)+"'")
                    # elif any(val in impl.get_required_accompany(impl.vars[r]) for r in rets):
                    #     invalidated.add(val)
                    #     impl.invalidated[varname] = name
                        # if varname in impl.args: name.error("safety", "would invalidate the associated function argument '"+pretty_name(varname)+"'")
                        # for r in impl.args:
                        #     if val in impl.get_required_accompany(impl.vars[r]):
                        #         name.error("safety", "would invalidate associated function argument '"+pretty_name(val.name)+"'")

                for invalid_type in impl.invalidate_types_on_defer: # TODO: track defers for each variable to be deleted
                    for varname, val in impl.vars.items():
                        if val.type.invalidated_by == invalid_type:# and not varname.endswith("__unsafe_ptr"):
                            impl.invalidated[val.stabilized_name()] = name
                            if var.name in impl.args: name.error("safety", "cannot invalidate associated argument '"+pretty_name(varname)+"'")

                to_remove = list()
                for defer in impl.defers:
                    if not any(v in defer for v in invalidated): continue
                    for v in defer:
                        if isinstance(v, Variable) and any(impl.get_assignment(arg, [v]) or impl.get_required_accompany(impl.vars[arg]) for arg in impl.args): 
                            name.error("safety", "this 'del' would evoke a defer that would invalidate an argument '"+pretty_name(v.name)+"'")
                    impl.implementation.extend(defer)
                    to_remove.append(defer)
                if not to_remove:
                    name.error("safety", "does nothing because it does not call any active 'defer' for '"+signature_like(ret, impl)+"'")
                for v in invalidated:
                    if v.name in impl.args and not v.immutable and v.type.builtin:
                        impl.implementation.extend([
                            v, 
                            CODEWORD_EQUALS,
                            CODEWORD_ZERO,
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
                prev_invalidated = {k:v for k,v in impl.invalidated.items()}
                impl.implementation = list()
                pos = await process_body(file, tokens, pos, impl, one_line=False)
                impl.defers.append(impl.implementation)
                impl.implementation = prev_implementation
                impl.invalidated = prev_invalidated
                impl.is_parsing_a_defer = False
                return pos
            pos = await process_defer(pos)
            continue
        if name.text=="continue" or name.text=="break":
            if not impl.nesting or not any(nest=="while" for nest in impl.nesting): name.error("syntax", "need to be in a loop to '"+name.text+"'")
            if is_lsp and name.file.is_main_file:
                if name.text=="continue": print_lsp_keyword(name, "continues immediately from the next loop iteration by skipping the rest of the current iteration")
                else: print_lsp_keyword(name, "stops the current loop immediately")
            impl.implementation.extend([CODEWORD_BREAK if name.text=="break" else CODEWORD_CONTINUE, CODEWORD_SEMICOLON])
            continue
        if name.text=="for":
            if is_lsp and name.file.is_main_file: print_lsp_keyword(name, "**for**\n\nLoop that automatically retrieves index-indexed items. 'for var in iterator ...' is equivalent to 'index =0 while try var=iterator[index] ... index=index+1'")
            if_pos = pos-1
            as_pointer = False
            as_mutpointer = False
            varname = peek_text(tokens,pos)
            vartok = get(tokens,pos)
            if peek_text(tokens, pos+1)=="&" and peek_text(tokens, pos+2)=="&":
                pos += 2
                as_mutpointer = True
            elif peek_text(tokens, pos+1)=="&":
                pos += 1
                as_pointer = True
            if peek_text(tokens, pos+1)=="is":
                is_token = get(tokens, pos+1)
                if as_pointer or as_mutpointer:
                     get(tokens, pos+1).error("syntax", "types obtained by 'is' cannot be retrieved as pointer variables", suggestions=["use 'in' instead"])
                pos, iterating_types = await process_linear_type(file, tokens, pos+2, show_lsp=True, reduce_to_unique_variations=False, impl=impl)
                #previous_vars = {k: v for k, v in impl.vars.items()}
                if not iterating_types.variations:
                    get(tokens, pos).error("type", "no valid variation; use an explicit 'if' check for safety")
                start_body_pos = pos
                if varname in impl.vars: is_token.error("type", "variable already exists: "+varname)
                for variation in iterating_types.variations:
                    pos = start_body_pos
                    if variation.is_literal_of is not None:
                        var = Variable(varname, variation)
                        impl.vars[var.name] = var
                    else:
                        if varname in impl.vars: del impl.vars[varname]
                        tmp = UnionType(variation.name, at=variation.at)
                        tmp.variations.append(variation)
                        impl.assign(varname, convert_method_to_functor(impl, tmp, is_token), is_token)
                    if peek_text(tokens, pos)==START_TOKEN:
                        pos = await process_body(file, tokens, pos, impl)
                    else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)
                    if varname in impl.rets: is_token.error("type", "cannot return a 'for' type variable, as its type may be different each time")
                    for defer in impl.defers+impl.returned_defers:
                        for tok in defer: 
                            if varname==tok.tostring(): is_token.error("type", "cannot involve a 'for' type variable in a defer, as its type may be different each time")
                impl.invalidated[varname] = name
                continue
            impl.nesting.append("while")
            if peek_text(tokens, pos+1)!="in": get(tokens, pos+1).error("syntax", "'in' or 'is' expected", suggestions=["iteration syntax should be 'for var in iterable'", "type repetition syntax should be 'for var is types'"])
            in_pos = pos+1
            indexor = Variable(create_temp(), UINT_TYPE, immutable=False)
            impl.vars[indexor.name] = indexor
            impl.for_counter.append(indexor.name)
            pos, iterator_object = await process_statement(file, tokens, pos+2, impl, current_operator_priority=0)
            impl.accumulating_defers.append(dict())

            impl.implementation.extend([
                indexor,
                CODEWORD_EQUALS,
                CODEWORD_ZERO,
                CODEWORD_MINUS,
                CODEWORD_ONE,
                CODEWORD_SEMICOLON
            ])
            
            impl.implementation.extend([
                CODEWORD_WHILE,
                CODEWORD_LPAR,
                CODEWORD_ONE,
                CODEWORD_RPAR,
                CODEWORD_LBRACKET,
            ])
            current_token = name
            async def process_for_get(pos: int):
                tmp = create_temp()
                var = Variable(tmp, BOOL_TYPE, token=current_token)
                impl.vars[tmp] = var
                impl.is_parsing_a_try.append(var)
                impl.count_handled_tries.append(0)
                
                type = file.types.get("mutget" if as_mutpointer else "get", None)
                if type is None: err_token.error("type", "missing implementation for 'get'")
                ret = resolve_call(file, impl, type, iterator_object+[indexor], get(tokens, in_pos)) 
                if not as_pointer and not as_mutpointer:
                    _, ret = process_deref(file, pos, ret, impl, get(tokens, in_pos), explicit=False)
                if is_lsp and vartok.file.is_main_file: print_lsp_var(vartok, signature_like(ret, impl))
                impl.assign(varname, ret, current_token)
                if impl.count_handled_tries[-1]==0: current_token.error("safety", "this 'try' statement does not guard against anything")
                impl.count_handled_tries.pop()
                impl.is_parsing_a_try.pop()
                impl.implementation.extend([
                    var,
                    CODEWORD_EQUALS,
                    var,
                    CODEWORD_COMPARISON_EQUALS,
                    CODEWORD_ZERO,
                    CODEWORD_SEMICOLON
                ])
                return pos, [var]
            impl.implementation.extend([
                indexor,
                CODEWORD_EQUALS,
                indexor,
                CODEWORD_ADD,
                CODEWORD_ONE,
                CODEWORD_SEMICOLON
            ])
            pos, ret = await process_for_get(pos)
            if ret[0].type!=BOOL_TYPE: get(tokens, in_pos).error("type", "internal error - conditions can only evaluate to 'bool' or be constantly true/false")
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
                impl.implementation.extend([
                        CODEWORD_IF, 
                        CODEWORD_LPAR,
                        CODEWORD_NOT,
                        ret[0],
                        CODEWORD_RPAR,
                        CODEWORD_LBRACKET,
                        CODEWORD_BREAK,
                        CODEWORD_SEMICOLON,
                        CODEWORD_RBRACKET,
                    ])
                if peek_text(tokens, pos)==START_TOKEN: pos = await process_body(file, tokens, pos, impl)
                else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)

            for should_invalid in impl.accumulating_defers[-1]:
                if impl.invalidated.get(should_invalid) is None:
                    impl.accumulating_defers[-1][should_invalid].error("safety", "this creates a leaking resource '"+pretty_name(should_invalid)+"'", reason=name, raason_message="due to being part of a loop", suggestions=["release the resource with 'del'", "initialize the resource before the loop"])

            impl.implementation.append(CODEWORD_RBRACKET)
            impl.for_counter.pop()
            impl.nesting.pop()
            impl.accumulating_defers.pop()
            continue
        
        if name.text=="while":
            if is_lsp and name.file.is_main_file: print_lsp_keyword(name, "**while**\n\nLoop that runs while the condition is true.")
            impl.nesting.append("while")
            if_pos = pos-1
            impl.implementation.extend([
                CODEWORD_WHILE,
                CODEWORD_LPAR,
                CODEWORD_ONE,
                CODEWORD_RPAR,
                CODEWORD_LBRACKET,
            ])
            impl.accumulating_defers.append(dict())
            pos, ret = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
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
                    CODEWORD_NOT,
                    ret[0],
                    CODEWORD_RPAR,
                    CODEWORD_LBRACKET,
                    CODEWORD_BREAK,
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
            pos, ret = await process_statement(file, tokens, pos, impl, current_operator_priority=0)
            if len(ret)!=1: 
                if is_lsp and name.file.is_main_file: print_lsp_keyword(name, "**if**\n\nStart a conditional statement and run a code block if it is true.")
                name.error("type", "conditions can only evaluate to 'bool' but found '"+signature_like(ret)+"'")
            if ret[0].type==TRUE_TYPE:
                if is_lsp and name.file.is_main_file: print_lsp_keyword(name, "**branchless if**\n\nStart a conditional statement and run a code block if it is true. This statement's truth value is determined during compilation.")
                if peek_text(tokens, pos)==START_TOKEN: pos = await process_body(file, tokens, pos, impl)
                else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)
                if peek_text(tokens, pos)=="else":
                    if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "**else**\n\nAlternative to conditional statement.")
                    pos += 1
                    if get_skip(tokens, pos).text!=START_TOKEN: pos = skip_statement(file, tokens, pos)
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
                if is_lsp and name.file.is_main_file: print_lsp_keyword(name, "**branchless if**\n\nStart a conditional statement and run a code block if it is true. This statement's truth value is determined during compilation.")
                if peek_text(tokens,pos)!=START_TOKEN: pos = skip_statement(file, tokens, pos)
                else:
                    depth = 1
                    pos += 1
                    while depth:
                        next_token = get_skip(tokens, pos).text
                        if next_token==START_TOKEN: depth += 1
                        elif next_token==END_TOKEN: depth -= 1
                        pos += 1
                if get_skip(tokens, pos).text=="else":
                    if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "**else**\n\nAlternative to conditional statement.")
                    pos += 1
                    if peek_text(tokens, pos)==START_TOKEN: pos = await process_body(file, tokens, pos, impl)
                    else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)
                continue
            if is_lsp and name.file.is_main_file: print_lsp_keyword(name, "**if**\n\nStart a conditional statement and run a code block if it is true.")
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
                impl.implementation.extend([CODEWORD_ELSE, CODEWORD_LBRACKET])
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
    if peek_text(tokens, pos)=="::":
        if not isinstance(imported, File): get(tokens, pos).error("import", "expecting file before ':' but got type '"+name+"'")
        assert isinstance(imported, File)
        pos, imported = await process_type(imported, tokens, pos - 1) # go back and process properly
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
            new_type.variations = list(dict.fromkeys(new_type.variations))#list(set(new_type.variations))
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

async def _gather_def(file: File, tokens: list[Token], pos: int, fast_return_exception: bool, is_local: bool, start_symbol: str="(", end_symbol: str=")", contained_in: Optional[ImplementedType]=None):
    start_token = get(tokens, pos)
    pos += 1
    name = get(tokens, pos).text
    abstract_arg_types: list[list[ImplementedType]] = list()
    abstract_arg_names: list[str] = list()
    abstract_arg_immutability: list[int] = list()
    abstract_arg_convert_to_ptr: list[bool] = list()
    pos += 1
    if get(tokens, pos).text!=start_symbol: tokens[pos].error("syntax", "expecting opening parenthesis")
    pos += 1
    effect_names: list[str] = list()
    while peek_text(tokens, pos)!=end_symbol:
        arg_immutability = -1
        is_effect = False
        if get(tokens, pos).text=="effect":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_decorator(get(tokens,pos), "**effect argument**\n\nDeclares that the provided argument should be autonomously gathered from the calling context's variables.")
            if len(effect_names)<len(abstract_arg_names): get(tokens,pos).error("type", "effects can only be declared as the first arguments")
            pos += 1
            is_effect = True
        if get(tokens, pos).text=="mut":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_decorator(get(tokens,pos), "**mutable argument**\n\nChanges to it overwrite values at the calling site (overwritten values must also be mutable).")
            pos += 1
            arg_immutability = 0
        elif get(tokens, pos).text=="const":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_decorator(get(tokens,pos), "**const argument**\n\nNot only is it immutable, but also guarantees that it will allow no attached memory or other resource modifications.")
            pos += 1
            arg_immutability = -1
        elif get(tokens, pos).text=="edit":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_decorator(get(tokens,pos), "**edit**\n\nCan edit mutable fields ONLY of the argument - less permissive than 'mut'.")
            pos += 1
            arg_immutability = 1
        elif get(tokens, pos).text=="ref":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_decorator(get(tokens,pos), "**reference argument**\n\nIt allows attached memory or other resource modifications, but promises to not change which resource instance it points to.")
            pos += 1
            arg_immutability = -2
        if peek_text(tokens, pos)=="ptr":
            tokens[pos].error("syntax", "pointers should follow their attached data type. Perhaps you meant 'any ptr'?")
        if peek_text(tokens, pos)=="any" and peek_text(tokens, pos+1)=="ptr":
            if is_lsp and get(tokens,pos).file.is_main_file: print_lsp_keyword(get(tokens,pos), "**any type**\n\nThis marks a generic type, which depends on what is passed as arguments later. HOWEVER, this function's implementation is determined now.")
            pos += 1
            arg_type = smol_namespace.types["any"]
        else: pos, arg_type = await process_linear_type(file, tokens, pos, True, impl=contained_in)
        if peek_text(tokens, pos)=="ptr":
            if is_lsp and get(tokens,pos).file.is_main_file:
                at = get(tokens,pos)
                print("---")
                # position in processed file
                printid("function")
                printid(os.path.abspath(at.file.path))
                print(at.row)
                print(at.col)
                print(len(at.text))
                # defined at
                printid(os.path.abspath(at.file.path))
                print(at.row)
                print(at.col)
                # message (may span multiple lines))
                printid("```rust\n"+POINTER_TYPE.signature()+"\n"+" from compiler definitions\n```")
            pos += 1
            abstract_arg_convert_to_ptr.append(True)
        else: abstract_arg_convert_to_ptr.append(False)
        arg_name = peek_text(tokens, pos)
        if is_effect: effect_names.append(arg_name)
        if arg_name==end_symbol or arg_name==",": arg_name = "__t_anon"+str(len(abstract_arg_types)) # reproducible argument names for is_same checks
        else: pos += 1
        arg_type_variations: list[ImplementedType] = find_unique_variations(arg_type.variations)
        abstract_arg_types.append(arg_type_variations)
        #if arg_immutability==-1 and all(variation.builtin for variation in arg_type.variations):
        #    tokens[pos].error("type", "all argument parameters are builtin types, so 'const' is redundant")
        if POINTER_TYPE in arg_type.variations: tokens[pos].error("syntax", "'ptr' should follow after its attached data type. Perhaps you meant 'any ptr'?")
        abstract_arg_names.append(arg_name)
        abstract_arg_immutability.append(arg_immutability)
        next_symbol = peek_text(tokens, pos)
        if next_symbol==end_symbol: break
        if next_symbol!=",": tokens[pos].error("syntax", "expecting comma between arguments but found '"+next_symbol+"'")
        pos += 1 # skip the comma
    if get(tokens, pos).text!=end_symbol: tokens[pos].error("syntax", "expecting closing '"+end_symbol+"'")
    pos += 1
    return pos, name, abstract_arg_types, abstract_arg_names, abstract_arg_immutability, abstract_arg_convert_to_ptr, effect_names

async def process_def(file: File, tokens: list[Token], pos: int, fast_return_exception: bool, is_local: bool):
    start_token = get(tokens, pos)
    name_token = get(tokens, pos+1)
    pos, name, abstract_arg_types, abstract_arg_names, abstract_arg_immutability, abstract_arg_convert_to_ptr, effect_names = await _gather_def(file, tokens, pos, fast_return_exception, is_local)
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
            impl.needs_failure_mode = start_token
        try:
            for arg_name, arg_type, immutable, convert_to_ptr in zip(abstract_arg_names, arg_types, abstract_arg_immutability, abstract_arg_convert_to_ptr):
                if convert_to_ptr:
                    impl.vars[arg_name] = Variable(arg_name, POINTER_TYPE, immutable!=0, token=start_token)
                    impl.args.append(arg_name)
                    impl.set_pointer_type(impl.vars[arg_name], arg_type)
                    if arg_type!=ANY_TYPE and len([ret for ret in arg_type.rets if arg_type.vars[ret].type.builtin])==0: tokens[pos-1].error("safety", "cannot convert a data type with no runtime storage to a pointer")
                    if immutable==1: tokens[pos-1].error("safety", "'edit' is identical to 'mut' here; use the latter instead or remove the edentifier to prevent any editing")
                    continue
                elif arg_type.builtin:
                    impl.vars[arg_name] = Variable(arg_name, arg_type, immutable!=0, token=start_token)
                    impl.args.append(arg_name)
                    if arg_type==POINTER_TYPE: impl.set_pointer_type(impl.vars[arg_name], ANY_TYPE)
                    continue
                prefix_len = longest_common_prefix_len(arg_type.rets)
                used_immutable = False
                for ret in arg_type.rets:
                    ret_name = arg_name+"__"+ret[prefix_len:]  if len(arg_type.rets)>1 else arg_name
                    impl.vars[ret_name] = arg_type.vars[ret].renamed_copy(ret_name, start_token)
                    if immutable==0: impl.vars[ret_name] = impl.vars[ret_name].mutable_copy(tokens[pos-1])
                    elif immutable==1:
                        original_var = impl.vars[ret_name] 
                        if (not impl.vars[ret_name].isprivate and not impl.vars[ret_name].immutable): #or not impl.vars[ret_name].type.builtin: 
                            impl.vars[ret_name] = impl.vars[ret_name].mutable_copy(tokens[pos-1])
                        else: 
                            impl.vars[ret_name] = impl.vars[ret_name].immutable_copy()
                            #if original_var.immutable!=impl.vars[ret_name].immutable:
                            used_immutable = True
                    elif immutable==-1: impl.vars[ret_name] = impl.vars[ret_name].immutable_copy()
                    elif immutable==-2:
                        impl.vars[ret_name] = impl.vars[ret_name].stable_copy()
                    impl.refargs.append(ret_name) # start with everything as refarg and we will remove during assignment
                    impl.args.append(ret_name)
                    if impl.vars[ret_name].type==POINTER_TYPE:
                        found_ptr_type = arg_type.get_pointer_type(arg_type.vars[ret])
                        if found_ptr_type is not None and found_ptr_type!=ANY_TYPE: impl.set_pointer_type(impl.vars[ret_name], found_ptr_type)
                        #else:
                        #    dep = arg_type.follow_pointer_dependency(arg_type.vars[ret])
                        #    if dep is not None: impl.set_pointer_depedency(dep.renamed_copy(arg_name+"__"+dep.name[prefix_len:]))
                if immutable==1 and not used_immutable: tokens[pos-1].error("safety", "'edit' is identical to 'mut' here; use the latter instead or remove the edentifier to prevent any editing")
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
                    if peek_text(tokens, pos)==START_TOKEN: pos = await process_body(file, tokens, pos, impl)
                    else: pos = await process_body(file, tokens, pos-1, impl, one_line=True)
                    #pos = await process_body(file, tokens, pos, impl)
                    if not impl.has_returned_once: 
                        impl.returns([], start_token, True)
                    
                    if is_lsp and name_token.file.is_main_file:
                        callee = impl
                        print("---")
                        # position in processed file
                        print("function")
                        printid(os.path.abspath(name_token.file.resolved_path))
                        print(name_token.row)
                        print(name_token.col)
                        print(len(name_token.text))
                        # defined at
                        printid(os.path.abspath(name_token.file.resolved_path))
                        print(name_token.row)
                        print(name_token.col)
                        # message (may span multiple lines))
                        if callee.doc: printid("**"+strip_quotes(callee.doc[0])+"**")
                        if len(callee.doc)>1: printid("\n"+"\n".join(strip_quotes(doc) for doc in callee.doc[1:]))
                        printid("```rust\n"+callee.signature()+"\n```")#+(" defined in "+at.file.path if callee.at else " from compiler definitions"))
                        spawned_error_codes = callee.gather_spawned_error_codes(set())
                        if len(spawned_error_codes):
                            if callee.needs_failure_mode: printid("Potential errors:\n")
                            else: printid("No failing errors, but can catch these intercepted ones:\n")
                        for code in spawned_error_codes: printid(str(code)+". "+err_code_list[code][1:-1]+"\n")
                        if callee.returned_defers: printid("\nReturned values defer use of the following functions:")
                        for defer in callee.returned_defers: printid("```rust\n"+code_summary(defer, callee)+"```")
                        singletons = [dep for dep in callee.dependent_implementations if dep.has_retrieved_singleton]
                        if singletons: printid("\nThe following singletons are initialized:")
                        for singleton in singletons: printid("```rust\n"+singleton.signature()+"\n```")
                        if callee.VM: printid("*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `"+callee.VM[1:-1]+"`*")
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

async def process_union(file: File, tokens: list[Token], pos: int):
    start_token = get(tokens, pos)
    pos += 1
    union_name = get(tokens, pos).text
    if union_name in file.types: tokens[pos].error("type", "type already exists '"+union_name+"'")
    pos += 1
    if get(tokens,pos).text!="=": tokens[pos].error("syntax", "expecting '='")
    pos += 1
    union_type: UnionType = UnionType(union_name, at=start_token)
    pos, linear_type = await process_linear_type(file, tokens, pos, show_lsp=True, reduce_to_unique_variations=False)
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
                    i = await process_union(file, tokens, i)
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
                    printid("namespace") # type of token: namespace, string, keyword, function, variable
                    printid(os.path.abspath(defname.file.path))
                    print(defname.row)
                    print(defname.col)
                    endtok = get(tokens,i-1)
                    assert endtok.row==defname.row
                    print(endtok.col-defname.col+len(endtok.text)) # token length
                    # defined at
                    if isinstance(imported, File):
                        printid(os.path.abspath(imported.path))
                        print(1)
                        print(1)
                    else:
                        printid(os.path.abspath(imported.at.file.path))
                        print(imported.at.row)
                        print(imported.at.col)
                    # message (may span multiple lines))
                    printid("imported path")
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
    # new_types = dict()
    # for k,v in file.types.items():
    #     u = UnionType(v.name, at=v.at)
    #     for variation in v.variations:
    #         if variation not in file.localdefs:
    #             u.variations.append(variation)
    #     if u.variations: new_types[k] = u
    # file.types = new_types
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

def _load(file: File, is_main_file: bool=False, err_token:Token|None=None) -> tuple[File, list[Token]]:
    assert isinstance(file, File)
    file.is_main_file = is_main_file
    tokens = list()
    nesting_levels = [0]
    row = 0
    has_tabs = False
    has_spaces = False
    bracket_depth = 0
    bracket_indent_stack = []
    try:
        f = file.open()
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
            if bracket_depth == 0 or (line.startswith("]") or line.startswith(")")):
                while count_spaces < prev_nesting_level:
                    tokens.append(Token(END_TOKEN, file, row, prev_nesting_level+1))
                    error_nesting_level = prev_nesting_level
                    nesting_levels.pop() # pop from back
                    prev_nesting_level = nesting_levels[len(nesting_levels)-1]
                    if count_spaces > prev_nesting_level: Token(" "*count_spaces, file, row, 1).error("syntax", f"misaligned indentation - expecting this line to start {error_nesting_level} {'tab' if has_tabs else 'space'}{'s' if error_nesting_level!=1 else 0} deep but it starts at {prev_nesting_level+1}")
                if count_spaces > prev_nesting_level:
                    tokens.append(Token(START_TOKEN, file, row, count_spaces+1))
                    nesting_levels.append(count_spaces)
            else: 
                required = bracket_indent_stack[-1]
                if count_spaces <= required:
                    Token(" "*count_spaces, file, row, 1).error(
                        "syntax",
                        f"continuation line inside brackets must be indented more than the opening line "
                        f"(expected more than {required} {'tab' if has_tabs else 'space'}{'s' if required != 1 else ''}, got {count_spaces})"
                    )
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
                elif c=="'":
                    if token_start<col: tokens.append(Token(line[token_start:col], file, row, token_start + 1 + count_spaces))
                    token_start = col
                    while True:
                        col += 1
                        if col==len(line): Token(line[token_start:col], file, row, token_start + 1 + count_spaces).error("syntax", "character never closed (strings cannot continue across multiple lines) - "+line[token_start:col])
                        if line[col]=="'" and (line[col-1]!="\\" or col<2 or line[col-2]=="\\"): break
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
                        if c in "([": bracket_depth += 1; bracket_indent_stack.append(count_spaces)
                        if c in ")]": 
                            bracket_depth -= 1
                            if bracket_indent_stack: bracket_indent_stack.pop()
                        if c in "(){}[];&|.": break
                        c = line[col]
                        if c==":" and not line[token_start:col].endswith(":"): break
                        if c not in symbols or c in "(){}[];&|-": break
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
                printid("function")
                printid(os.path.abspath(file.path))
                print(row+1)
                print(1)
                print(3)
                # defined at
                printid(os.path.abspath(file.path))
                print(row+1)
                print(1)
                # message (may span multiple lines))
                printid(str(err))
            raise FatalException
        print(f"[{RED}✗{RESET}] {PURPLE}file read error{RESET} {err}")
        location = f"{file.path} line {row+1}"
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

async def download(url: str, filepath: str):
    if is_pyodide:
        from pyodide.http import pyfetch
        import base64, os
        cached = _js_cache_get(url)
        dirpath = os.path.dirname(filepath)
        if dirpath: os.makedirs(dirpath, exist_ok=True)
        if cached is not None:
            data = base64.b64decode(cached)
            with open(filepath, "wb") as f: f.write(data)
            return
        response = await pyfetch(url)
        if response.status != 200: raise RuntimeError( f"Failed to fetch {url}: HTTP {response.status}")
        data = await response.bytes()
        _js_cache_set(url, base64.b64encode(data).decode())
        with open(filepath, "wb") as f: f.write(data)
        return
    urllib.request.urlretrieve(url, filepath)
    return


async def download_with_progress(url: str, filepath: str, message: str):
    if is_pyodide:
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
        file, processed_tokens = _load(File(path), is_main_file, err_token)
        file_cache[path] = file
        await process(file, processed_tokens, 0)
        file_cache_complete.add(path)
    elif path=="builtins": pass
    elif path not in file_cache_complete:
        if err_token: err_token.error("import", "circular import detected for '"+path+"'")
        else: print("circular import detected for '"+path+"'")
    return file

POINTER_TYPE = ImplementedType("ptr", "char*", memory_size=8)
POINTER_TYPE.vars[POINTER_TYPE.rets[0]].immutable = False

smol_namespace = File("builtins")
builtin_token = Token("builtins", smol_namespace, 1, 1)
#UNKNOWN_SOURCE_VARIABLE = Variable("const __t_source_unknown", POINTER_TYPE)
CSTR_TYPE = ImplementedType("cstr", "const char*", memory_size=8, at=builtin_token)
CSTR_TYPE.doc.append("constant string")
BOOL_TYPE = ImplementedType("bool", "char", memory_size=1, at=builtin_token)
BOOL_TYPE.doc.append("boolean value")
BOOL_TYPE.doc.append("Can only be `true` or `false`.")
INT_TYPE = ImplementedType("int", "int64_t", memory_size=8, at=builtin_token)
INT_TYPE.doc.append("a signed integer value")
INT_TYPE.doc.append("Represents values in the range `2^-63 to 2^63-1`.")
FLOAT_TYPE = ImplementedType("float", "double", memory_size=8, at=builtin_token)
UINT_TYPE = ImplementedType("nat", "uint64_t", memory_size=8, at=builtin_token)
UINT_TYPE.doc.append("an unsigned integer value")
UINT_TYPE.doc.append("Represents values in the range `0 to 2^64-1`.")
UINT32_TYPE = ImplementedType("nat32", "uint32_t", memory_size=4, at=builtin_token)
UINT32_TYPE.doc.append("a 32-bit unsigned integer value")
UINT32_TYPE.doc.append("Represents values in the range `0 to 2^32-1`.")
UINT16_TYPE = ImplementedType("nat16", "uint16_t", memory_size=2, at=builtin_token)
UINT16_TYPE.doc.append("a 16-bit unsigned integer value")
UINT16_TYPE.doc.append("Represents values in the range `0 to 2^16-1`.")
UINT8_TYPE = ImplementedType("nat8", "uint8_t", memory_size=1, at=builtin_token)
UINT8_TYPE.doc.append("a 8-bit unsigned integer value")
UINT8_TYPE.doc.append("Represents values in the range `0 to 255`.")
CHAR_TYPE = ImplementedType("char", "char", memory_size=1, at=builtin_token)
CHAR_TYPE.doc.append("a character")
CHAR_TYPE.doc.append("Represents characters in the numeric range `0 to 255`.")

BLANK_TYPE = ImplementedType("blank", at=builtin_token)
BLANK_TYPE.doc.append("empty tuple")
BLANK_TYPE.doc.append("This is the type of non-existent variables, empty parantheses, and functions of no returns.")

BLANK_LITERAL = ImplementedType("blank literal", at=Token("blank", smol_namespace, 1, 1))
BLANK_LITERAL.is_literal_of = BLANK_LITERAL

ANY_TYPE = ImplementedType("any", at=builtin_token) #TODO: consider deliberately not having a builtin token
ANY_TYPE.doc.append("any type")
ANY_TYPE.doc.append("Represents a generic for buffers and pointers for type-independent code that can be matched to a concrete type later.")
NONE_OR_ANY = [None, ANY_TYPE]

smol_namespace.types["cstr"] = UnionType("cstr", at=builtin_token).append(CSTR_TYPE)
smol_namespace.types["int"] = UnionType("int", at=builtin_token).append(INT_TYPE)
smol_namespace.types["nat"] = UnionType("nat", at=builtin_token).append(UINT_TYPE)
smol_namespace.types["nat32"] = UnionType("nat32", at=builtin_token).append(UINT32_TYPE)
smol_namespace.types["nat16"] = UnionType("nat16", at=builtin_token).append(UINT16_TYPE)
smol_namespace.types["nat8"] = UnionType("nat8", at=builtin_token).append(UINT8_TYPE)
smol_namespace.types["float"] = UnionType("float", at=builtin_token).append(FLOAT_TYPE)
smol_namespace.types["bool"] = UnionType("bool", at=builtin_token).append(BOOL_TYPE)
smol_namespace.types["err"] = UnionType("err", at=builtin_token).append(ImplementedType("err", "int"))
smol_namespace.types["blank"] = UnionType("blank", at=builtin_token).append(BLANK_TYPE)
smol_namespace.types["char"] = UnionType("char", at=builtin_token).append(CHAR_TYPE)
smol_namespace.types["any"] = UnionType("any", at=builtin_token).append(ANY_TYPE)


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
UNSAFE_EFFECTS_TYPE = ImplementedType("unsafe_singletons")
UNSAFE_EFFECTS_TYPE.doc.append("remove singleton safety")
UNSAFE_EFFECTS_TYPE.doc.append("Removes all currently accumulated singleton information. Mainly useful for creating unsafe singletons for debug purposes.")
CALL_TYPE = ImplementedType("call")
CALL_TYPE.doc.append("calls a functor with arguments")
CALL_TYPE.doc.append("Uses the first argument functor as a function and calls that, using the rest of the arguments as inputs.")

DEREF_TYPE = ImplementedType("deref")
DEREF_TYPE.doc.append("dereference a pointer")
DEREF_TYPE.doc.append("Dereferences a pointer by unpacking it to local data.")
DEREF_TYPE.doc.append("This function is automatically overloaded for all pointer types.")
DEREF_TYPE.doc.append("Cannot do so fo `any ptr` data, as their type becomes unknown in their processing context.")
DEREF_TYPE.vars["ptr"] = Variable("ptr", POINTER_TYPE)
DEREF_TYPE.args.append("ptr")

ABSTRACT_TYPE = ImplementedType("abstract")
ABSTRACT_TYPE.doc.append("Abstracts a functor by removing all literal type references.")

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
CAUGHT_TYPE = ImplementedType("catch", "int64_t", memory_size=8)
CAUGHT_TYPE.doc.append("catch the error code intercepted by 'try'")
CAUGHT_TYPE.doc.append("Also catches the error codes produced by defers triggered by 'del'.")
CAUGHT_TYPE.doc.append("Fails if there is no error code, otherwise returns and cleans the last error code.")
FOR_COUNTER_TYPE = ImplementedType("for_counter")
FOR_COUNTER_TYPE.doc.append("retrieves the for loop's counter")
FOR_COUNTER_TYPE.doc.append("All 'for' loops admit a sequential order of execution that is stored in an underlying counter.")
FOR_COUNTER_TYPE.doc.append("That is used for 'get'-ing elements, though it can be ignored by some iterators. Nonetheless,")
FOR_COUNTER_TYPE.doc.append("you can retrieve it with this function to separately tracking how many times the loop has ran.")
FOR_COUNTER_TYPE.vars["counter"] = Variable("counter", UINT_TYPE)
FOR_COUNTER_TYPE.rets.append("counter")
# FAIL_TYPE.vars["message"] = CSTR_TYPE
# FAIL_TYPE.args.append("message")

RESOLVE_LITERAL_TYPE = ImplementedType("value")

SAME_CONTENTS_TYPE = ImplementedType("unsafe_attach_type")
SAME_CONTENTS_TYPE.vars["to"] = Variable("to", POINTER_TYPE)
SAME_CONTENTS_TYPE.vars["from"] = Variable("from", POINTER_TYPE)
SAME_CONTENTS_TYPE.rets.append("to")
SAME_CONTENTS_TYPE.args.extend(["to", "from"])
SAME_CONTENTS_TYPE.set_pointer_type(SAME_CONTENTS_TYPE.vars["from"], ANY_TYPE)
SAME_CONTENTS_TYPE.set_pointer_depedency(SAME_CONTENTS_TYPE.vars["to"], SAME_CONTENTS_TYPE.vars["from"])
SAME_CONTENTS_TYPE.doc.append("pointer references the same type as another")
SAME_CONTENTS_TYPE.doc.append("Forces the first pointer to reference the same type of object as another. The function returns the first one to enable chain notation.")

SAME_CONTENTS_TYPE_CSTR = ImplementedType("unsafe_attach_type")
SAME_CONTENTS_TYPE_CSTR.vars["to"] = Variable("to", POINTER_TYPE)
SAME_CONTENTS_TYPE_CSTR.vars["from"] = Variable("from", CSTR_TYPE)
SAME_CONTENTS_TYPE_CSTR.rets.append("to")
SAME_CONTENTS_TYPE_CSTR.args.extend(["to", "from"])
SAME_CONTENTS_TYPE_CSTR.set_pointer_type(SAME_CONTENTS_TYPE_CSTR.vars["to"], CHAR_TYPE)
SAME_CONTENTS_TYPE_CSTR.doc.append("pointer references the same type as another")
SAME_CONTENTS_TYPE_CSTR.doc.append("Forces the first pointer to reference a buffer of characters.")


fixed_namespace = File("compiler")
compiler_token = Token("compiler", fixed_namespace, 1, 1)
UNSAFE_COPY_TYPE = ImplementedType("unsafe_copy", at=compiler_token)
UNSAFE_DEREF_TYPE = ImplementedType("unsafe_deref", at=compiler_token)
VARNAME_TYPE = ImplementedType("varname", at=compiler_token)

ASSERT_SAME_TYPE = ImplementedType("assert_eq", at=compiler_token)
ASSERT_SAME_TYPE.vars["to"] = Variable("to", POINTER_TYPE)
ASSERT_SAME_TYPE.vars["from"] = Variable("from", POINTER_TYPE)
ASSERT_SAME_TYPE.args.extend(["to", "from"])
ASSERT_SAME_TYPE.set_pointer_type(ASSERT_SAME_TYPE.vars["from"], ANY_TYPE)
ASSERT_SAME_TYPE.set_pointer_depedency(ASSERT_SAME_TYPE.vars["to"], ASSERT_SAME_TYPE.vars["from"])
ASSERT_SAME_TYPE.implementation.extend([
    CODEWORD_IF,
    CODEWORD_LPAR,
    ASSERT_SAME_TYPE.vars["to"],
    CODEWORD_COMPARISON_NOT_EQUALS,
    ASSERT_SAME_TYPE.vars["from"],
    CODEWORD_RPAR,
    CODEWORD_LBRACKET,
    CODEWORD_TERRCODE,
    CODEWORD_COMPARISON_EQUALS,
    CodeWord("3"),
    CODEWORD_SEMICOLON,
    CODEWORD_GOTO,
    CODEWORD_TFAILURE,
    CODEWORD_SEMICOLON,
    CODEWORD_RBRACKET,
])
ASSERT_SAME_TYPE.spawned_error_codes.add(3)
ASSERT_SAME_TYPE.needs_failure_mode = compiler_token
ASSERT_SAME_TYPE.doc.append("pointer is equal to another")
ASSERT_SAME_TYPE.doc.append("Equivalent to assigning to the first argument the value of the second after checking that the two memories are the same.")
ASSERT_SAME_TYPE.doc.append("This reinstates compiler awareness between two memory regions, for example that would have been lost due to types passing through opaque functors or buffer contents.")
ASSERT_SAME_TYPE.doc.append("")
ASSERT_SAME_TYPE.doc.append("This is also safe, as the error occurs after the assignment; given that deferred resource releases can only be created by this function -and not passed as arguments- we end up properly releasing everything on failure.")

fixed_namespace.types["skip"] = UnionType("skip", at=compiler_token).append(FAIL_TYPE)
fixed_namespace.types["true"] = UnionType("true", at=compiler_token).append(TRUE_TYPE)
fixed_namespace.types["false"] = UnionType("false", at=compiler_token).append(FALSE_TYPE)
fixed_namespace.types["ptr"] = UnionType("ptr", at=compiler_token).append(POINTER_TYPE)
fixed_namespace.types["unsafe_attach_type"] = UnionType("unsafe_attach_type", at=compiler_token).append(SAME_CONTENTS_TYPE).append(SAME_CONTENTS_TYPE_CSTR)
fixed_namespace.types["catch"] = UnionType("catch", at=compiler_token).append(CAUGHT_TYPE)
fixed_namespace.types["for_counter"] = UnionType("for_counter", at=compiler_token).append(FOR_COUNTER_TYPE)
fixed_namespace.types["size"] = UnionType("size", at=compiler_token).append(SIZEOF_TYPE)
fixed_namespace.types["value"] = UnionType("value", at=compiler_token).append(RESOLVE_LITERAL_TYPE)
fixed_namespace.types["call"] = UnionType("call", at=compiler_token).append(CALL_TYPE)
fixed_namespace.types["abstract"] = UnionType("abstract", at=compiler_token).append(ABSTRACT_TYPE)
fixed_namespace.types["deref"] = UnionType("deref", at=compiler_token).append(DEREF_TYPE)
fixed_namespace.types["assert_eq"] = UnionType("assert_eq", at=compiler_token).append(ASSERT_SAME_TYPE)
fixed_namespace.types["unsafe_copy"] = UnionType("unsafe_copy", at=compiler_token).append(UNSAFE_COPY_TYPE)
fixed_namespace.types["unsafe_deref"] = UnionType("unsafe_deref", at=compiler_token).append(UNSAFE_DEREF_TYPE)
fixed_namespace.types["varname"] = UnionType("varname", at=compiler_token).append(VARNAME_TYPE)


smol_namespace.namespaces["compiler"] = fixed_namespace

debug_namespace = File("debug")
debug_token = Token("debug", debug_namespace, 1, 1)
debug_namespace.types["nocatch"] = UnionType("nocatch", at=compiler_token).append(NOCATCH_TYPE)
debug_namespace.types["print"] = UnionType("print", at=compiler_token).append(DEBUG_TYPE)
debug_namespace.types["branchless"] = UnionType("branchless", at=compiler_token).append(SUCCESS_TYPE)
debug_namespace.types["unsafe_singletons"] = UnionType("unsafe_singletons", at=compiler_token).append(UNSAFE_EFFECTS_TYPE)
smol_namespace.namespaces["debug"] = debug_namespace

file_cache["builtins"] = smol_namespace
UNSAFE_PTR_VARIABLE = Variable("unsafe_ptr", POINTER_TYPE, immutable=False, isprivate=False)
UNSAFE_SIZE_VARIABLE = Variable("unsafe_size", UINT_TYPE, immutable=False, isprivate=False)
UNSAFE_OFFSET_VARIABLE = Variable("unsafe_offset", UINT16_TYPE, immutable=False, isprivate=False)
UNSAFE_ALIGN_VARIABLE = Variable("unsafe_align", UINT16_TYPE, immutable=False, isprivate=False)

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
    linker: list[str] = list()
    for main_def in discovered_defs: 
        for k in main_def.linker: 
            if k not in linker: linker.append(k)
    
    visited_defs_for_error_codes: set[ImplementedType] = set()
    found_error_codes: set[int] = set()
    for main_def in main_defs: found_error_codes = found_error_codes.union(main_def.gather_spawned_error_codes(visited_defs_for_error_codes))

    # TODO: the following commeted out expression is wrong due to compiler:catch() handling in _call(...)
    effective_err_code_list = err_code_list#[element for element in enumerate(err_code_list)]# if pos in found_error_codes else "0" for pos, element in enumerate(err_code_list)]
    effective_err_code_list_size = len(effective_err_code_list)
    while effective_err_code_list_size and effective_err_code_list[effective_err_code_list_size-1]=="0":
        effective_err_code_list_size -= 1
    define_errors = ""
    set_errcodes = "static const char* __t_all_errcodes["+str(effective_err_code_list_size)+"] = {"
    for i, err_msg in enumerate(effective_err_code_list):
        if i>=effective_err_code_list_size: break
        if i: set_errcodes += ",\n"
        if err_msg!="0":
            err_var = global_cstr2var.get(err_msg, None)
            if err_var is not None and err_var in used_globs:
                used_globs.remove(err_var)
                define_errors += "#define "+err_var+" (__t_all_errcodes["+str(i)+"])\n"
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
    header += "typedef void (*__smoll_func_ptr_type)(void);\n"
    if entry_point: 
        header += "int __t_argc;\nchar** __t_argv;\n"
        generated_c_funcs.append(f"""int main(int argc, char** argv) {{__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;{entry_point}();return 0;}}""")
    body = "\n".join(c_decls)+"\n"+"\n\n".join(generated_c_funcs)
    src_path.write_text(header + globs + set_errcodes + define_errors + body, encoding="utf-8")
    print(f"[{YELLOW}+{RESET}] transpile    {src_path}")
    if chosen_compiler=="none": return
    gcc_cmd = {
        "gcc": [ "gcc", "-O3", str(src_path), "-o", str(exe_path), "-I."]+linker,
        "antcc": [ "./antcc", "-O2", str(src_path), "-o", str(exe_path), "-I."]+linker
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
parser.add_argument("--docs", action="store_true", help="Export to a markdown file.",)
parser.add_argument("--cleanup", action="store_true", help="Clean up generated .C files and executables.",)
parser.add_argument("--debug", action="store_true", help="Enable debug messages for all failure.",)
parser.add_argument("--back", action="store", help="Choose a backend compiler among auto, antcc, gcc, clang, none (the last option only creates a C file).",)
parser.add_argument("--vmkb", action="store", type=int, default=256, help="VM memory in kilobytes.",)
parser.add_argument("--vmrec", action="store", type=int, default=16, help="VM recursion budget.",)
args, extra_args = parser.parse_known_args()
debug_mode = args.debug
cleanup_mode = args.cleanup
docs_mode = args.docs
chosen_compiler = args.back or "auto"
is_lsp = args.lsp
is_pyodide = sys.platform == "emscripten"
vm_memory_kb = args.vmkb
vm_recursion_budget = args.vmrec
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
    if docs_mode:
        docs_path = src_path.with_suffix(".md")
        with open(docs_path, "w") as docs_file:
            # docs_file.write("# "+src_path.with_suffix("").name+" docs\n")
            # docs_file.write("This documentation is automatically generated by smoλ by running `./smoll "+str(src_path)+" --docs`\n")
            docs_file.write("<div class=\"toc\" markdown=\"1\">")
            for union_type in file.types.values():
                if "___" in union_type.name: continue
                name = union_type.name.replace("_", "\\_")
                docs_file.write("["+name+"](#"+name.lower()+") \n")
            docs_file.write("</div>\n\n")


            for union_type in file.types.values():
                if "___" in union_type.name: continue
                docs_file.write("# "+union_type.name.replace("_", "\\_")+"\n")
                for callee in sorted(list(set(union_type.variations)), key=lambda x:-id(x)):
                    if "____" in callee.name: continue
                    docs_file.write("### "+callee.name.replace("_", "\\_"))
                    if callee.doc: docs_file.write(" - "+strip_quotes(callee.doc[0])+"\n")
                    else: docs_file.write("\n")
                    if callee.at: docs_file.write("*Defined in: "+callee.at.file.path+" line "+str(callee.at.row)+"*\n")
                    else: docs_file.write("*Defined by the compiler*\n")
                    if len(callee.doc)>1: docs_file.write("\n"+"\n".join(strip_quotes(doc) for doc in callee.doc[1:])+"\n")
                    docs_file.write("\n```rust\n"+callee.signature()+"\n```\n")#+(" defined in "+at.file.path if callee.at else " from compiler definitions"))
                    spawned_error_codes = callee.gather_spawned_error_codes(set())
                    if len(spawned_error_codes): 
                        if callee.needs_failure_mode: docs_file.write("Potential errors:\n\n")
                        else: docs_file.write("No failing errors, but can catch these intercepted ones:\n\n")
                    for code in spawned_error_codes: docs_file.write(str(code)+". "+err_code_list[code][1:-1]+"\n")
                    docs_file.write("\n")
                    if callee.returned_defers: docs_file.write("\nReturned values defer use of the following functions:\n")
                    for defer in callee.returned_defers: docs_file.write("```rust\n"+code_summary(defer, callee)+"```\n")
                    singletons = [dep for dep in callee.dependent_implementations if dep.has_retrieved_singleton]
                    if singletons: docs_file.write("\nThe following singletons are initialized:\n")
                    for singleton in singletons: docs_file.write("```rust\n"+singleton.signature()+"\n```\n")
                    if callee.VM: docs_file.write("*Warning: Running this function during 'compt' or under a '--back vm' backend involves arbitrary code execution. Always be careful of your dependencies! The executed code is: `"+callee.VM[1:-1]+"`*\n")
    elif not is_lsp:
        main_type: UnionType|None = file.types.get("main", None)
        if not main_type: print(f"{RED}error{RESET}: missing main type"); errexit()
        main_type_variations = [variation for variation in main_type.variations if variation.at.file==file]
        if len(main_type_variations) > 1: print(f"{RED}error{RESET}: more than one main type in this file"); errexit()
        if main_type_variations[0].rets: print(f"{RED}error{RESET}: main type can only fail or return 'blank()'"); errexit()
        exe_path = src_path.with_suffix("")
        if chosen_compiler=="vm":
            print(f"[{YELLOW}+{RESET}] interpret    {src_path}")
            memory = MemoryEmulator(1024*vm_memory_kb)
            await main_type_variations[0].interpret([], memory, recursion_budget=vm_recursion_budget) # emulate 16kb memory
            for pos in memory.must_free:
                if pos in memory.alloc_sizes:
                    try: print(("non-freed memory at "+str(pos)+" size "+str(memory.alloc_sizes[pos])+": ").ljust(20)+memory.as_cstr(pos))
                    except: print(("non-freed memory at "+str(pos)+" size "+str(memory.alloc_sizes[pos])+": ").ljust(20)+str(memory.read_int64(pos)))
            for k,v in memory.foreign_objects.items(): 
                if v[1]: print("non-freed foreign object "+v[1])
        else:
            write_and_compile(str(exe_path), [main_type_variations[0]], main_type.variations[0].monomorphic_name)
            if not args.build and chosen_compiler!="none":
                extra_args_str = " ".join(extra_args)
                if extra_args_str: extra_args_str = " "+extra_args_str
                if not exe_path.is_file(): print(f"{RED}error{RESET}: executable {exe_path} not found"); errexit()
                print(f"[{YELLOW}+{RESET}] run          ./{exe_path}{extra_args_str}")
                try: 
                    result = subprocess.run("./"+str(exe_path)+extra_args_str, text=True, check=False, stdin=sys.stdin, stdout=sys.stdout, stderr=sys.stderr)
                    if cleanup_mode: 
                        os.remove(str(exe_path)+".c")
                        os.remove(str(exe_path))
                    if result.returncode != 0: os._exit(result.returncode)
                except KeyboardInterrupt: 
                    if cleanup_mode: 
                        os.remove(str(exe_path)+".c")
                        os.remove(str(exe_path))
                    os._exit(1)
            os._exit(0) # not in lsp or pyodide case, as it inteferes with the stdout pipe

if is_pyodide: main()
else: asyncio.run(main())