import "std/core.s"
import "std/pipe.s"
def @ = compiler::varname
def ^ = compiler::deref

def dat()
    data = edit str[].alloc 4
    value = mut 0
    return class(data, value)

def listofdat()
    data = edit dat[].alloc 4
    return class(data)

def accessible(effect edit console CLI, listofdat obj)
    print obj.data[0].data[0]

def main()
    CLI = edit console()
    obj = mut listofdat()
    obj.data[0] = dat()
    obj.data[0]&&.value = 0
    obj.data[0].data[0] = str "test"
    accessible obj