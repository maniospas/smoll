local import "std/core.s"
local import "std/io/process.s" as process

local def raw_get(effect console CLI, str url, str path)
    VM "download(memory.as_str($url__unsafe_ptr+$url__dat__pos, $url__dat__length), memory.as_str($path__unsafe_ptr+$path__dat__pos, $path__dat__length))"
    prefix = "curl -s -X GET \""
    postfix = "\" -o "
    buf = arena char[].alloc len(url)+len(path)+len(str prefix)+len(str postfix)+1
    buf.copy prefix
    buf.copy url
    buf.copy postfix
    buf.copy path
    process:system str buf

def get(effect console CLI, str|cstr url, str|cstr|blank path)
    doc "GET with system curl"
    doc "This creates a GET request using the system's curl."
    doc "This implementation is ideal for obtaining individual"
    doc "files without additional dependencies. Retrieved data"
    doc "are saved to a specified file path, overwriting it."
    doc "For ease of use, the path is returned."
    if path is blank
        doc "This version downloads to a '.tmp' file."
        path = ".tmp"
    raw_get(str url, str path)
    return str path
