import "std/core.s"
import "std/map.s"

def strstrmap(nat size)
    return strmap alloc(str[], size)

def test(effect edit console CLI, edit char_arena buf)
    map = edit strmap str[].alloc 128
    map["hello"] = buf.copy str "hello world!"
    map["manio"] = buf.copy str "it's a me, manio."
    
    it = mut(map.keys, 0)
    while try key=next it
        print key
    return map

def test2(effect edit console CLI)
    buf = edit arena char[].alloc KB 4
    map = test(buf)
    return (map, buf)

def print(effect edit console CLI, const strstrmap map)
    print map["hello"]
    print map["manio"]

def main()
    CLI = edit console()
    print test2().map
