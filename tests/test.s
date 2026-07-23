import "std/core.s"
def ^ = compiler::deref

def user(str name, nat _x, nat y)
    values = mut nat[]
    x = mut _x
    return class(name,x,y,values)

def parse(edit user[] users)
    user = mut users[0]&
    user.x = 1

def main()
    CLI = edit console()
    users = edit user[].alloc 4
    parse users
    print users[0].x