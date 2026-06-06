
import "std/core.s"
import "std/sci.s" # for pow

def std_data()
    sum = mut 0.0
    sqr_sum = mut 0.0
    num = mut 0
    return class(sum, sqr_sum, num)

def register(edit std_data data, float value)
    data.sum = data.sum + value
    data.sqr_sum = data.sqr_sum + value*value
    data.num = data.num + 1

def std(std_data data)
    sqr_mean = data.sqr_sum/float data.num
    mean = data.sum/float data.num
    return pow(sqr_mean-mean*mean, 0.5)

def main()
    CLI = console() 
    data = std_data()
    data.register 1.0
    data.register 1.0
    data.register 2.3
    print std data