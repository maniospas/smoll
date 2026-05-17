import "std/core.s"
import "std/map.s"

def strstrmap(nat size)
    unsafe_return strmap alloc(mut str[], size)

def test()
    map = mut strmap alloc(mut str[], 128)
    buf = bufpos alloc KB 4
    map["hello"] = buf.copy str "hello world!"
    map["manio"] = buf.copy str "it's a me, manio."
    it = bufpos map.keys
    while try key=next it
        print key
    unsafe_return (map,buf) # TODO: make returns safe in this scenario by asking for associated returns together

def print(const strstrmap map)
    print map["hello"]
    print map["manio"]

def main()
    print test().map
