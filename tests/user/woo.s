import "std/core.s"
import "std/io.s"

rec wooo(effect mut console CLI) 
    if false return blank()
    process:breakpoint()
    print "wooo"
    wooo()

def main()
    CLI = console()
    try wooo()
    print "the end"
    