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
    doc "library, but this requires no extra linkage."
    {builtins::float t = __smo_time_eta();}
    return t
