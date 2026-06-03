import "std/core.s"

def print(effect mut console CLI, cstr[] sentences)
    for sentence in sentences
        print sentence

def main()
    CLI = console()
    for i in range 10
        print i

    print ["hello world!", "... and goodbye for now."]
