import std.core
import std.test

def Person(nat id, str name, str surname)
  return class(name,surname)

def print(on CLI, Person p)
  print "-------------------"
  print ("name      ", "") 
  print p.name
  print ("surnname  ", "") 
  print p.surname
  print "-------------------"

def test(on CLI)
  people = edit Person[].alloc 4
  buf = edit arena char[].alloc KB 4
  people[0] = Person(0, buf.copy "it's a me", buf.copy "mario")
  print people[0]
  dat = people.name.dat # only the data segments of strings
  assert(people.name[0]=="it's a me", "moved string to buffer")
  return (buf, dat)

def main(on CLI)
  t = test()
  assert(str(t.buf.buf, t.dat[0])=="it's a me", "string reconstructed from its data and buffer")
