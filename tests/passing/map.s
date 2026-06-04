import "std/core.s"
import "std/map.s"

def strstrmap(nat size)
    return strmap alloc(mut str[], size)

def test(effect mut console CLI, edit char_arena buf)
    map = ref mut strmap str[].alloc 128
    map["hello"] = buf.copy str "hello world!"
    map["manio"] = buf.copy str "it's a me, manio."
    it = (map.keys, mut 0)
    while try key=next it
        print key
    return map

def test2(effect mut console CLI)
    buf = arena char[].alloc KB 4
    map = test(buf)
    return (map, buf)

def print(effect mut console CLI, const strstrmap map)
    print map["hello"]
    print map["manio"]

def main()
    CLI = console()
    print test2().map
