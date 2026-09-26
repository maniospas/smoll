import std.core
import std.parsing
import std.io.file as file

def main(CLI, WHICHERR)
    CHARS = edit circular alloc 1024
    tokens = tokenize(file::open "README.md", nat16 4096)

    tokens.highlight(tokens.ids[2], "here")

    # for tok in tokens.ids
    #     print nn tokens.tokstr[tok.id]
    #     print nn " line "
    #     print nn tok.row
    #     print nn " col "
    #     print tok.col
    