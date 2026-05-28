import "std/core.s"
import "std/map.s"

def strstrmap(nat size)
    return strmap alloc(mut str[], size)

def test(edit strbufpos buf)
    map = ref mut strmap str[].alloc 128
    map["hello"] = buf.copy str "hello world!"
    map["manio"] = buf.copy str "it's a me, manio."
    it = bufpos map.keys
    while try key=next it
        print key
    return map

def test2()
    buf = bufpos char[].alloc KB 4
    map = test(buf)
    return (map, buf)

def print(const strstrmap map)
    print map["hello"]
    print map["manio"]

def main()
    print test2().map
