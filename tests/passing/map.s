import "std/core.s"
import "std/map.s"

def main()
    map = strmap alloc(mut str[], 128)
    map["hello"] = str "hello world!"
    map["manio"] = str "it's a me, manio."
    print map["hello"]
    print map["manio"]
    
    it = bufpos map.keys
    while try key=next it
        print key
