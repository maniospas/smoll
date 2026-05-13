import "std/core.s"
import "std/map.s"

def main()
    map = strmap alloc(mut str[], 128)
    map["hello"] = str "hello world!"
    print map["hello"]
