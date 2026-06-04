import "std/core.s"
import "std/io.s"

def main()
    CLI = console()
    print process:os_name()
    for arg in process:args()
        if arg=="--hello" print "hello world!"
    print "ended"