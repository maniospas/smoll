import "std/core.s"
import "std/mini.s" as mini

def concat(mini:str[] buff)
    mem = bufpos alloc KB 4
    iter = range len buff
    start = mem.pos
    while try i=next iter
        mem.copy(mini:unpack buff[i])
        mem.copy " "
    return str(mem.buf,start,mem.pos)

def main()
    buff = (mut mini:str[]).alloc 6
    debug:print buff # print the buffer type during compilation
    buff[0] = mini:str "hi"
    buff[1] = mini:str "my"
    buff[2] = mini:str "name"
    buff[3] = mini:str "is"
    buff[4] = mini:str "manios"
    buff[5] = mini:str concat buff
    it = range len buff
    while try i=next it
        print (i," ")
        print mini:unpack buff[i]