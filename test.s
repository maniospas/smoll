import "std/core.s"

def test1()
    return singleton()

def test2()
    print "test2"
    test1()

def test3()
    print "test3"
    test1()

def test4()
    test3()
    
def main()
    test2()
    test4()
    