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
import std.extern

def console()
    doc "references the system console"
    doc "As a singleton, the console should usually be instantiated"
    doc "in the `main()` function and then passed to dependent calls, for example via an"
    doc "an effect for convenience. Standard library print functions provide the CLI effect"
    doc "and you can propagate to this by prepending `on CLI` to function"
    doc "arguments. Two equivalent examples:"
    doc "```python"
    doc "import std.core"
    doc "def main()"
    doc "    CLI = console()"
    doc "    print \"hello world!\" # automatically pass CLI as argument"
    doc "```"
    doc "```python"
    doc "import std.core"
    doc "def main(CLI) # recommended pattern"
    doc "    print \"hello world!\""
    doc "```"
    doc "The last example is the recommended way of creating main functions. It works"
    doc "because CLI is a name alias for the console and also an effect for print functions."
    doc "The CLI argument does not have a variable name, which makes it adopt the name of the"
    doc "last type word, if possible. Finally, the arguments of main are automatically contructed,"
    doc "if it is possible to do so with a function without arguments - like `console()`."
    doc "As a last remark, the console is a zero-cost abstraction in that it does"
    doc "not transfer any data, but relies on singleton safety to synchronize io across threads."
    doc "Quickly print internals for debugging with `console(type \"unsage\")`."
    # this trick of going through a mut, allows edit console to be an available action
    handler = mut singleton()
    return const handler

def CLI = console

def console("unsafe")
    doc "references the system console unsafely"
    doc "This is convenient for print debugging by writing `console(type \"unsafe\").print ...`"
    doc "without needing to pass the console singleton."
    CLI = edit console()
    debug::unsafe_singletons()
    return CLI

def print(on CLI, "flush")
    doc "flushes the print buffer on the console"
    {fflush(stdout);}

def nn(cstr|float|int|nat value)
    doc "no new line"
    doc "Given a value, creates a tuple of (value, \"\")."
    doc "This enables the pattern 'print nn value'"
    doc "to print without automatically adding a new line."
    return (value, "")

def print(on CLI, cstr value, cstr|blank endl)
    doc "prints a cstr"
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%s%s", value, endl);}

def print(on CLI, float value, cstr|blank endl)
    doc "prints a float"
    doc "To pre-specified 6 decimal digits."
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%.6f%s", value, endl);}

def print(on CLI, int value, cstr|blank endl)
    doc "prints an integer"
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%lld%s", value, endl);}

def print(on CLI, nat value, cstr|blank endl)
    doc "prints an unsigned integer"
    if endl is blank 
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("%llu%s", value, endl);}

def print(on CLI, bool value, cstr|blank endl)
    doc "prints a boolean"
    if endl is blank
        doc "Automatically ends the line too."
        endl = "\n"
    {if(value){printf("%s%s", "true", endl);}else{printf("%s%s", "false", endl);}}

def print(on CLI, compiler::true, cstr|blank endl)
    doc "prints a boolean"
    if endl is blank
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("true%s", endl);}
    
def print(on CLI, compiler::false, cstr|blank endl)
    doc "prints a boolean"
    if endl is blank
        doc "Automatically ends the line too."
        endl = "\n"
    {printf("false%s", endl);}

def supports_ansi(console CLI)
    VM "[supports_ansi()]"
    {builtins::bool supports = __smo_ansi_supported();}
    return supports

def colors(console CLI)
    doc "ansi colorization controls for the console"
    doc "Using this rather than direct ansi codes has three"
    doc "advantages:"
    doc "- a reset code is deferred to be emmited even"
    doc "in case of errors, so that a color does"
    doc "not persist in the console"
    doc "- it automatically"
    doc "checks if the console supports colors and, if not,"
    doc "throttles ansi code to not be printed and weird"
    doc "out the the output"
    doc "- it uses color names for colorizing the console"
    doc ""
    doc "The main main usage pattern is to initialize this"
    doc "and then set colors similarly to the example:"
    doc "```python"
    doc "import std.core"
    doc "def main(CLI)"
    doc "    colors = colors CLI"
    doc "    set(colors italic)"
    doc "    set(colors green)"
    doc "    print \"hello world!\""
    doc "```"
    doc "It is recommended to not pass this between functions,"
    doc "but instead construct the color handler from the console."
    initialized = supports_ansi CLI
    defer
        if initialized: {printf("\033[0m");}
    return class(CLI, initialized)
def set(edit colors colors, "red")
    if colors.initialized: {printf("\033[31m");}
def set(edit colors colors, "green")      
    if colors.initialized: {printf("\033[32m");}
def set(edit colors colors, "yellow")     
    if colors.initialized: {printf("\033[33m");}
def set(edit colors colors, "blue")       
    if colors.initialized: {printf("\033[34m");}
def set(edit colors colors, "magenta")    
    if colors.initialized: {printf("\033[35m");}
def set(edit colors colors, "cyan")       
    if colors.initialized: {printf("\033[36m");}
def set(edit colors colors, "white")      
    if colors.initialized: {printf("\033[37m");}
def set(edit colors colors, "black")      
    if colors.initialized: {printf("\033[30m");}
def set(edit colors colors, "bright_red")    
    if colors.initialized: {printf("\033[91m");}
def set(edit colors colors, "bright_green")  
    if colors.initialized: {printf("\033[92m");}
def set(edit colors colors, "bright_yellow") 
    if colors.initialized: {printf("\033[93m");}
def set(edit colors colors, "bright_blue")   
    if colors.initialized: {printf("\033[94m");}
def set(edit colors colors, "bright_magenta")
    if colors.initialized: {printf("\033[95m");}
def set(edit colors colors, "bright_cyan")   
    if colors.initialized: {printf("\033[96m");}
def set(edit colors colors, "bright_white")  
    if colors.initialized: {printf("\033[97m");}
def set(edit colors colors, "bg_red")    
    if colors.initialized: {printf("\033[41m");}
def set(edit colors colors, "bg_green")  
    if colors.initialized: {printf("\033[42m");}
def set(edit colors colors, "bg_yellow") 
    if colors.initialized: {printf("\033[43m");}
def set(edit colors colors, "bg_blue")   
    if colors.initialized: {printf("\033[44m");}
def set(edit colors colors, "bg_magenta")
    if colors.initialized: {printf("\033[45m");}
def set(edit colors colors, "bg_cyan")   
    if colors.initialized: {printf("\033[46m");}
def set(edit colors colors, "bg_white")  
    if colors.initialized: {printf("\033[47m");}
def set(edit colors colors, "bg_black")  
    if colors.initialized: {printf("\033[40m");}
def set(edit colors colors, "bold")         
    if colors.initialized: {printf("\033[1m");}
def set(edit colors colors, "dim")          
    if colors.initialized: {printf("\033[2m");}
def set(edit colors colors, "italic")       
    if colors.initialized: {printf("\033[3m");}
def set(edit colors colors, "underline")    
    if colors.initialized: {printf("\033[4m");}
def set(edit colors colors, "blink")        
    if colors.initialized: {printf("\033[5m");}
def set(edit colors colors, "reverse")      
    if colors.initialized: {printf("\033[7m");}
def set(edit colors colors, "strikethrough")
    if colors.initialized: {printf("\033[9m");}
def set(edit colors colors, "reset")          
    if colors.initialized: {printf("\033[0m");}
def set(edit colors colors, "reset_color") 
    if colors.initialized: {printf("\033[39m");}
def set(edit colors colors, "reset_bg")       
    if colors.initialized: {printf("\033[49m");}
def set(edit colors colors, "reset_bold")     
    if colors.initialized: {printf("\033[22m");}
def set(edit colors colors, "reset_underline")
    if colors.initialized: {printf("\033[24m");}
