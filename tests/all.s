import "std/core.s"
import "std/io.s" as io

def main()
    path = "./tests/passing/"
    bp = bufpos alloc KB 4
    bp.copy "./smoll "
    bp.copy path
    test_dir = io::dir::read path
    while try entry = bp.bufpos().io::dir::entry test_dir
        if not entry.ends_with ".s" continue
        command = extend_left entry
        print command
        del mut io::process::process command # spawn and forcefully end
