import std.core
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

def main()
    CLI = edit console()
    units = edit unit_arena 32
    parties = edit party[].alloc 4
    parties[0] = party(str "myparty", units)

    myparty = edit parties[0]
    myparty.progress = myparty.progress+1
    myparty.units = units.slice 4
    
    u = myparty.units
    myparty.units[0] = unit(str "mario", 4)
    print myparty.units[0].name