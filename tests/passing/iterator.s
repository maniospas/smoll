import "std/core.s"

def print(cstr[] sentences)
    for sentence in sentences
        print sentence

def main()
    for i in range 10
        print i

    print ["hello world!", "... and goodbye for now."]
