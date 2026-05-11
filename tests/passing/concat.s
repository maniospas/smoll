import "std/core.s"

def concat(str[] buff)
  mem = bufpos mut alloc KB 4
  iter = range len buff
  start = mem.pos
  while try i=next iter
    mem.copy(buff[i])
    mem.copy " "
  return str(mem.buf,start,mem.pos)

def main()
  buff = (mut str[]).alloc 6
  buff[0] = str "hi"
  buff[1] = str "my"
  buff[2] = str "name"
  buff[3] = str "is"
  buff[4] = str "manios"
  buff[5] = concat(buff)

  full_iter = range len buff
  while try j=next full_iter
    print (j," ")
    print buff[j]