import "std/core.s"


def concat(msg[] buff)
  mem = bufpos mut alloc KB 4
  iter = range len buff
  start = mem.pos
  while try i=next iter
    mem.copy str(buff[i])
    mem.copy " "
  return str(mem.buf,start,mem.pos)

def main()
  buff = (mut msg[]).alloc 6
  debug_type buff
  buff[0] = msg "hi"
  buff[1] = msg "my"
  buff[2] = msg "name"
  buff[3] = msg "is"
  buff[4] = msg "manios"
  buff[5] = msg concat(buff)
  full_iter = range len buff
  while try j=next full_iter
    print (j," ")
    print str buff[j]