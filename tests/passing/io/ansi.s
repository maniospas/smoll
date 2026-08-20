import "std/core.s"

def greet(effect edit console CLI, "hello"|"hi" greeting, blank|"."|"!" punctuation)
    print nn compiler::value greeting
    if punctuation is blank
        print ""
    else
        print compiler::value punctuation

def main()
    CLI = edit console()
    color = colors CLI
    set(color yellow)
    greet(() hi () !) # prints 'hi!' while validating it as a pattern
