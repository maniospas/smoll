import "std/core.s"
import "std/map.s"

def strstr()
    return strmap str[]

def create_map()
    CHARS = edit arena char[].alloc KB 4
    map = edit strmap str[].alloc 128
    map["hello"] = copy "hello world!"
    map["manio"] = copy "it's a me, manio."
    return (map, CHARS)

def test2(strstr s)
    return s

def test()
    map = create_map().map
    ret = test2 map
    return ret # should complain
    
def main()
    CLI = edit console()
    map = test()
    print map["hello"]
    print map["manio"]