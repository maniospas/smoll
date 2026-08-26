import std.core
import std.mini as mini


def concat(mini::str[] buff)
  mem = mut arena ref char[].alloc KB 4
  start = mem.pos
  for element in buff
    mem.copy mini::unpack element
    mem.copy " "
  return str(mem.buf,start to mem.pos)

def main()
  CLI = edit console()
  buff = mut mini::str[].alloc 6
  debug::print buff
  buff[0] = mini::str "hi"
  buff[1] = mini::str "my"
  buff[2] = mini::str "name"
  buff[3] = mini::str "is"
  buff[4] = mini::str "manios"
  buff[5] = mini::str concat(buff)
  for j in range of len buff
    print (j," ")
    print mini::unpack buff[j]
  