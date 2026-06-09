import "std/core.s"

def Person(nat id, str name, str surname)
  return class(name,surname)

def print(effect edit console CLI, Person p)
  print "-------------------"
  print ("name      ", "") 
  print p.name
  print ("surnname  ", "") 
  print p.surname
  print "-------------------"

def test(effect edit console CLI)
  people = edit Person[].alloc 4
  buf = edit arena char[].alloc KB 4
  people[0] = Person(0, buf.copy "it's a me", buf.copy "mario")
  print people[0]
  dat = people.name.dat # only the data segments of strings
  return (buf, dat)

def main()
  CLI = edit console()
  t = test()
  print str(t.buf.buf, t.dat[0])
