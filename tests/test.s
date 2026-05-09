repo "https://raw.githubusercontent.com/maniospas/smoll/refs/heads/main/std/" as "std/"

import "std/core.s"
import "std/io.s"::file as file

def main()
    file = file::read "README.md"
    buf = bufpos alloc KB 4
    while try line = buf.file::line file
        print line
    #args = io::process::args()
    #print args[0]
    #print io::process::osname()
