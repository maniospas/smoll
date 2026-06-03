# Written in 2026 by Emmanouil Krasanakis (maniospas@hotmail.com)
# To the extent possible under law, the author has dedicated all copyright
# and related and neighboring rights to this software to the public domain
# worldwide.
# 
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted.
# 
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
# IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. 

import "builtins"
import "std/extern.s"

def console()
    doc "references the system console"
    return singleton()

def unsafe_console()
    doc "references the system console unsafely"
    doc "This is convenient for print debugging by writing `unsafe_console().print ...`"
    doc "without needing to evoke an effect to pass the normally singleton console."
    CLI = console()
    debug:unsafe_singletons()
    return CLI

def flush(effect console CLI)
    doc "flushes the print buffer on the console"
    {fflush(stdout);}

def nn(cstr|float|int|nat value)
    doc "no new line"
    doc "Given a value, creates a tuple of (value, \"\")."
    doc "This enables the pattern 'print nn value'"
    doc "to print without automatically adding a new line."
    return (value, "")

def print(effect console CLI, cstr value, cstr|blank endl)
    doc "prints a cstr"
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%s%s", value, endl);}

def print(effect console CLI, float value, cstr|blank endl)
    doc "prints a float"
    doc "To pre-specified 6 decimal digits."
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%.6f%s", value, endl);}

def print(effect console CLI, int value, cstr|blank endl)
    doc "prints an integer"
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%lld%s", value, endl);}

def print(effect console CLI, nat value, cstr|blank endl)
    doc "prints an unsigned integer"
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%llu%s", value, endl);}

def print(effect console CLI, bool value, cstr|blank endl)
    doc "prints a boolean"
    if endl is blank
        doc "Automatically ends the line too."
        endl = "\n"
    {if(value){printf("%s%s", "true", endl);}else{printf("%s%s", "false", endl);}}

def print(effect console CLI, compiler:true, cstr|blank endl)
    doc "prints a boolean"
    if endl is blank
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("true%s", endl);}
    
def print(effect console CLI, compiler:false, cstr|blank endl)
    doc "prints a boolean"
    if endl is blank
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("true%s", endl);}
