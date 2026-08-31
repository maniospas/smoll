import std.core
import std.test
import compiler as cp

def unit(str name, nat combat)
    status = mut 0
    return class(name, combat, status)

def unit_arena(nat size) 
    return arena unit[].alloc size

def party(str name, edit unit_arena unit_arena)
    units = mut unit_arena.slice 2
    progress = mut 0
    return class (name, units, progress)

def main()
    CLI = edit console()
    units = edit unit_arena 32
    parties = edit party[].alloc 4
    parties[0] = party(str "myparty", units)

    myparty = mut parties[0]
    myparty.progress = myparty.progress+1
    myparty.units = units.slice 4
    assert(4==len myparty.units, "overwrote mutable buffer")
    
    u = myparty.units
    myparty.units[0] = unit(str "mario", 4)
    assert(myparty.units[0].name=="mario", "overwrote element in mutable buffer")