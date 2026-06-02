import "std/core.s"
import "std/io.s":process as process

def main()
    CLI = console()
    process:system(str "ls")