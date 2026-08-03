import "std/core.s"
import "std/graphics.s"
import "std/io.s"

def main()
    WINDOW = edit window(800.0, 600.0, "test", "std/ArianaVioleta-dz2K.ttf")
    CHARS = edit arena alloc 1024
    CLI = edit console()
    i = mut 0
    while not dir::is_file "./README.md" blank()
    f = edit file::open "./README.md"
    line = file::line f
    print line

    dir::create_dir "./test"
    writter = edit file::write "./test/test.txt"
    writter.file::print "test"
    del writter

    while is_open()
        frame = draw()
        text(line, 10.0, 10.0, 64.0, color(255,255,255))
        circ(20.0, 20.0, 20.0 solid color(255,0,0))
        del frame
