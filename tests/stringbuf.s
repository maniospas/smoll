import "std/core.s"

def String = str|cstr

def Person(str name, str surname)
  return class(name,surname)

def print(Person p)
  print p.name
  print p.surname

def test()
  buf = list ref mut char[]
  p = Person(buf.copy "me", buf.copy "mario")
  people = alloc mut Person[]
  people[0] = p
  print people[0]

def main()
  test()