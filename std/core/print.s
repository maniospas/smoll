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

def print(cstr value, cstr|blank endl)
    if endl is blank 
        endl = "\n"
    {printf("%s%s", value, endl);}

def print(float value, cstr|blank endl)
    if endl is blank 
        endl = "\n"
    {printf("%.6f%s", value, endl);}

def print(int value, cstr|blank endl)
    if endl is blank 
        endl = "\n"
    {printf("%lld%s", value, endl);}

def print(nat value, cstr|blank endl)
    if endl is blank 
        endl = "\n"
    {printf("%llu%s", value, endl);}

def print(bool value, cstr|blank endl)
    if endl is blank
        endl = "\n"
    {printf("%s%s", value?"true":"false", endl);}

def print(compiler::true)
    print("true")
    
def print(compiler::false)
    print("false")
