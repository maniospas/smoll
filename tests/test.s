import "std/core.s"

rec wooo(effect range recursion_safety, nat i)
    next recursion_safety
    if false return blank() # do not return anything
    return wooo(i+1)

def main()
    recursion_safety = range(1000)
    try wooo 0
    if try error = compiler:catch()
        print cstr error
