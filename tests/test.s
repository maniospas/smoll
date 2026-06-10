import "std/core.s"

def pair(nat, nat)
def least(nat[] numbers, pair->bool order)
    ret = mut numbers[0]
    for number in numbers
        if call order(number,ret) ret = number
    return ret

def min(nat x, nat y)
    if x<y return true
    return false

def main()
    CLI = edit console()
    print least([5,4,1,3,2], type min)
