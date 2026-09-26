local import std.core
local import std.map
local import std.io.file as file

def token(nat32 id, nat32 tokpos, nat16 fileid, nat16 row, nat16 col, nat16 length): return class compiler::args()

def tokenize(on edit char_circular CHARS, mut file::open f, nat16 max_tokens)
    tokstr = edit str[].alloc nat max_tokens
    tokens = edit bucket().strmap(nat[], len tokstr)
    ids = edit arena token[].alloc nat max_tokens
    numids = mut 0
    row = mut 0
    while try line = strip(file::line f, char "\n" end)
        row = row+1
        pos = mut 0
        while try next_pos = line.find(" ", range of(pos to len line))
            segment = line.slice of (pos to next_pos)
            prev_pos = pos
            pos = next_pos + 1
            if 0==len segment: continue
            if not try foundid = mut tokens[segment]
                foundid = numids
                tokens[segment place assigned placeholder=mut str""] = foundid
                tokstr[foundid] = placeholder
                numids = numids+1
            (at alloc ids) = token(nat32 foundid, nat32 len ids, nat16 1, nat16 row, nat16 prev_pos+1, nat16 len segment)
    return class(tokstr, tokens, ids, numids)

local def eq(nat16 x, nat16 y)
    return nat(x)==nat(y)

def highlight(on CLI, tokenize tokens, token tok, str|cstr|blank message)
    colors = colors CLI
    pos    = nat tok.tokpos
    start  = mut pos
    while start>0 
    and tokens.ids[start-1].row==tok.row 
    and tokens.ids[start-1].fileid==tok.fileid
        start = start-1
    finish = mut pos+1
    while finish<len tokens.ids 
    and tokens.ids[finish].row==tok.row 
    and tokens.ids[finish].fileid==tok.fileid
        finish = finish+1
    col = mut 1
    for i in range of(start to finish)
        t = tokens.ids[i]
        while col < nat t.col
            print nn " "
            col = col+1
        text = tokens.tokstr[nat t.id]
        print nn text
        col = col + nat t.length
    print ""
    for col in range of nat(tok.col)-1: print nn " "
    set(colors red)
    for ui in range of nat(tok.length)-1: print nn "^"
    if not message is blank
        print nn "| "
        print message
    else: print ""