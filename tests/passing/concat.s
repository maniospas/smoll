import "std/core.s"
import "std/mini.s" as mini


def concat(mini:str[] buff)
  mem = arena ref char[].alloc KB 4
  iter = range len buff
  start = mem.pos
  while try i=next iter
    mem.copy mini:unpack(buff[i])
    mem.copy " "
  return str(mem.buf,start to mem.pos)

def main()
  CLI = console()
  buff = (mut mini:str[]).alloc 6
  debug:print buff
  buff[0] = mini:str "hi"
  buff[1] = mini:str "my"
  buff[2] = mini:str "name"
  buff[3] = mini:str "is"
  buff[4] = mini:str "manios"
  buff[5] = mini:str concat(buff)
  full_iter = range len buff
  while try j=next full_iter
    print (j," ")
    print mini:unpack buff[j]