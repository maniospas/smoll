import "std/core.s"
import "std/io.s":process as process

def main()
    CLI = edit console()
    process:system(str "ls")