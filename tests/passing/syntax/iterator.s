import "std/core.s"

def print(effect edit console CLI, cstr[] sentences)
    for sentence in sentences
        print sentence

def main()
    CLI = edit console()
    for i in range of 10
        print i

    print ["hello world!", "... and goodbye for now."]
