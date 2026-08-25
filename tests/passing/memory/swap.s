import std.core

def swap(mut any ptr x, mut any ptr y)
    z = mut x
    x = y& # pattern for assigning pointer values instead of moving data 
    y = z&

def main()
    CLI = console()
    arr = mut [1,2,3]
    #arr2 = mut [1.0,2.0,3.0]
    p1 = mut arr[0]&
    p2 = mut arr[1]&
    v1 = compiler::deref p1
    v2 = compiler::deref p2 
    swap(p1,p2)
    p1 = v1 # = is overloaded to move data into pointers too
    p2 = v2
    print arr[0] # 2