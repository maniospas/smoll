import "std/core.s"

def greet(effect mut console CLI, "hello"|"hi" greeting, blank|"."|"!" punctuation)
    print nn compiler:literal greeting
    if punctuation is blank
        print ""
    else
        print compiler:literal punctuation

def main()
    CLI = console()
    colors = colors CLI
    print(colors yellow)
    greet(() hi () !) # prints 'hi!' while validating it as a pattern
