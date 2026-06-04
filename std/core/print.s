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
    doc "As a singleton for program safety, the console should usually be instantiated"
    doc "in the `main()` function and then passed to dependent calls, for example via an"
    doc "an effect for convenience. Standard library functions provide the CLI effect"
    doc "and you can propagate to this by prepending `effect mut console CLI` to function"
    doc "arguments. This is a zero-cost abstraction in that it does not transfer any data"
    doc "but only works alongside the safety of the compiler."
    doc "To quickly print internals for debugging, use `unsafe_console()` instead."
    return mut singleton()

def unsafe_console()
    doc "references the system console unsafely"
    doc "This is convenient for print debugging by writing `unsafe_console().print ...`"
    doc "without needing to evoke an effect to pass the normally singleton console."
    CLI = console()
    debug:unsafe_singletons()
    return CLI

def flush(effect mut console CLI)
    doc "flushes the print buffer on the console"
    {fflush(stdout);}

def nn(cstr|float|int|nat value)
    doc "no new line"
    doc "Given a value, creates a tuple of (value, \"\")."
    doc "This enables the pattern 'print nn value'"
    doc "to print without automatically adding a new line."
    return (value, "")

def print(effect mut console CLI, cstr value, cstr|blank endl)
    doc "prints a cstr"
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%s%s", value, endl);}

def print(effect mut console CLI, float value, cstr|blank endl)
    doc "prints a float"
    doc "To pre-specified 6 decimal digits."
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%.6f%s", value, endl);}

def print(effect mut console CLI, int value, cstr|blank endl)
    doc "prints an integer"
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%lld%s", value, endl);}

def print(effect mut console CLI, nat value, cstr|blank endl)
    doc "prints an unsigned integer"
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%llu%s", value, endl);}

def print(effect mut console CLI, bool value, cstr|blank endl)
    doc "prints a boolean"
    if endl is blank
        doc "Automatically ends the line too."
        endl = "\n"
    {if(value){printf("%s%s", "true", endl);}else{printf("%s%s", "false", endl);}}

def print(effect mut console CLI, compiler:true, cstr|blank endl)
    doc "prints a boolean"
    if endl is blank
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("true%s", endl);}
    
def print(effect mut console CLI, compiler:false, cstr|blank endl)
    doc "prints a boolean"
    if endl is blank
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("true%s", endl);}

def supports_ansi(console CLI)
    VM "[supports_ansi()]"
    {builtins:bool supports = __smo_ansi_supported();}
    return supports

def colors(mut console CLI)
    initialized = supports_ansi CLI
    defer
        if initialized {printf("\033[0m");}
    return singleton(CLI, initialized)
def set(colors colors, "red")        
    if colors.initialized {printf("\033[31m");}
def set(colors colors, "green")      
    if colors.initialized {printf("\033[32m");}
def set(colors colors, "yellow")     
    if colors.initialized {printf("\033[33m");}
def set(colors colors, "blue")       
    if colors.initialized {printf("\033[34m");}
def set(colors colors, "magenta")    
    if colors.initialized {printf("\033[35m");}
def set(colors colors, "cyan")       
    if colors.initialized {printf("\033[36m");}
def set(colors colors, "white")      
    if colors.initialized {printf("\033[37m");}
def set(colors colors, "black")      
    if colors.initialized {printf("\033[30m");}
def set(colors colors, "bright_red")    
    if colors.initialized {printf("\033[91m");}
def set(colors colors, "bright_green")  
    if colors.initialized {printf("\033[92m");}
def set(colors colors, "bright_yellow") 
    if colors.initialized {printf("\033[93m");}
def set(colors colors, "bright_blue")   
    if colors.initialized {printf("\033[94m");}
def set(colors colors, "bright_magenta")
    if colors.initialized {printf("\033[95m");}
def set(colors colors, "bright_cyan")   
    if colors.initialized {printf("\033[96m");}
def set(colors colors, "bright_white")  
    if colors.initialized {printf("\033[97m");}
def set(colors colors, "bg_red")    
    if colors.initialized {printf("\033[41m");}
def set(colors colors, "bg_green")  
    if colors.initialized {printf("\033[42m");}
def set(colors colors, "bg_yellow") 
    if colors.initialized {printf("\033[43m");}
def set(colors colors, "bg_blue")   
    if colors.initialized {printf("\033[44m");}
def set(colors colors, "bg_magenta")
    if colors.initialized {printf("\033[45m");}
def set(colors colors, "bg_cyan")   
    if colors.initialized {printf("\033[46m");}
def set(colors colors, "bg_white")  
    if colors.initialized {printf("\033[47m");}
def set(colors colors, "bg_black")  
    if colors.initialized {printf("\033[40m");}
def set(colors colors, "bold")         
    if colors.initialized {printf("\033[1m");}
def set(colors colors, "dim")          
    if colors.initialized {printf("\033[2m");}
def set(colors colors, "italic")       
    if colors.initialized {printf("\033[3m");}
def set(colors colors, "underline")    
    if colors.initialized {printf("\033[4m");}
def set(colors colors, "blink")        
    if colors.initialized {printf("\033[5m");}
def set(colors colors, "reverse")      
    if colors.initialized {printf("\033[7m");}
def set(colors colors, "strikethrough")
    if colors.initialized {printf("\033[9m");}
def set(colors colors, "reset")          
    if colors.initialized {printf("\033[0m");}
def set(colors colors, "reset_color")    
    if colors.initialized {printf("\033[39m");}
def set(colors colors, "reset_bg")       
    if colors.initialized {printf("\033[49m");}
def set(colors colors, "reset_bold")     
    if colors.initialized {printf("\033[22m");}
def set(colors colors, "reset_underline")
    if colors.initialized {printf("\033[24m");}
