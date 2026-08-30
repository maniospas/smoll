import std.core
import std.test
import compiler as cp

def unit(str name, nat combat)
    status = mut 0
    return class(name, combat, status)

def unit_arena(nat size) 
    return arena unit[].alloc size

def party(str name, edit unit_arena unit_arena)
    units = mut unit_arena.slice 4
    progress = mut 0
    return class (name, units, progress)

def test()
    units1 = edit unit_arena 32
    units2 = edit unit_arena 32
    parties = edit party[].alloc 4
    parties[0] = party(str "myparty", units1)
    parties[0].units[0] = unit(str "name1", 0)
    parties[1]&.units = units2.slice 4
    parties[1].units[0] = unit(str "name2", 0)

    myparty = mut parties[0]
    myparty.progress = myparty.progress+1
    if false
        myparty.units = units2.slice 4 # TODO: THIS KIND OF BRANCHING IS NOT PROPERLY ACCOUNTED FOR IF WE DID NOT RETURN units2 (DEFERRING UNITS2 ALONGSIDE MYPARTY IS WRONG)
    return (myparty, parties, units1, units2)

def main()
    CLI = edit console()
    r = test()
    assert(r.myparty.units[0].name=="name1", "original object returned")
    assert(r.parties[1].units[0].name=="name2", "overwritten buffer returned")
