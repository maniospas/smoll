import std.core

def greeting(on edit char_allocator\new CHARS, nat depth) -> str
    CHARS = CHARS
    if depth<=1: return str "hello world!"
    return str greeting(depth-1)+"\nhello world!"

def main(CLI)
    CHARS = edit bucket()
    print greeting 5
