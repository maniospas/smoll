# Written in 2026 by Emmanouil Krasanakis (maniospas@hotmail.com)
# To the extent possible under law, the author has dedicated all copyright
# and related and neighboring rights to this software to the public domain
# worldwide.
# 
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted.
# 
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
# IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

local import std.core

def sleep(float secs, blank|"skip_on_negative" confirmation_policy)
    doc "sleeps for a provided number of seconds"
    doc "Other sleep functions may exist in the standard library,"
    doc "but this requires no extra linkage."
    if secs<0.0
        if confirmation_policty is blank: fail "can only sleep for non-negative seconds" 
        else: return ()
    {__smo_exact_sleep(secs);}

def time()
    doc "number of seconds since the program start"
    doc "Other time measurement functions may exist in the standard"
    doc "library, for example in std.graphs, but this requires no extra linkage."
    {builtins::float t = __smo_time_eta();}
    return t
