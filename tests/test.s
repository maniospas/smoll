import "std/core.s"
def ^ = compiler::deref

def user(str name, nat x, nat y)
    values = mut nat[]
    return class(name,x,y,values)

def parse(edit user[] users)
    user = mut users[0]&&
    (unsafe_mut user.x) = 0

def main()
    CLI = edit console()
    users = edit user[].alloc 4
    parse users