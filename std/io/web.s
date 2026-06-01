local import "std/core.s"
local import "std/io/process.s" as process

def url(str path)
    doc "a string url"
    doc "Packs a string into a url so that it can be unambiguously passed through web requests."
    return class path

def url(cstr path)
    doc "a string url"
    doc "Packs a string into a url so that it can be unambiguously passed through web requests."
    return url str path

local def raw_get(url url, str path)
    VM "download(memory.as_str($url__path__unsafe_ptr+$url__path__dat__pos, $url__path__dat__length), memory.as_str($path__unsafe_ptr+$path__dat__pos, $path__dat__length))"
    prefix = "curl -s -X GET \""
    postfix = "\" -o "
    buf = bufpos char[].alloc len(url.path)+len(path)+len(str prefix)+len(str postfix)+1
    buf.copy prefix
    buf.copy url.path
    buf.copy postfix
    buf.copy path
    process:system str buf

def get(url url, str|cstr|blank path)
    doc "GET with system curl"
    doc "This creates a GET request using the system's curl."
    doc "This implementation is ideal for obtaining individual"
    doc "files without additional dependencies. Retrieved data"
    doc "are saved to a specified file path, overwriting it."
    doc "For ease of use, the path is returned."
    if path is blank
        doc "This version downloads to a '.tmp' file."
        path = ".tmp"
    raw_get(url, str path)
    return str path
