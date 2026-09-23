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

import std.core
import std.unsafe as unsafe
import "std/extern/mutex.h"

def lane(nat bytes)
    CHARS = edit arena alloc bytes*8+64
    remaining = mut bytes
    copy "("
    while try remaining=remaining-(8 test_smaller)
        copy "nat(),"
    if try remaining=remaining-(4 test_smaller)
        copy "nat32(),"
    if try remaining=remaining-(2 test_smaller)
        copy "nat16(),"
    if try remaining=remaining-(1 test_smaller)
        copy "nat8(),"
    if bytes!=0: CHARS.pos = CHARS.pos-1
    copy ")"
    return CHARS.buf 

def pipe_data(cstr value, nat max_stored_size)
    doc "blank pipe_data structure"
    doc "Ensures that 'pipe_data ptr' has a unique type and allocates at least a cstr's"
    doc "(a pointer's) + sizeof(mutex_t) worth of storage so that tag checking and"
    doc "mutex checking are always valid. Mutex size is assumed to be less than 40 bytes"
    doc "across all systems. The pipe stores state information that is used for various"
    doc "access operations."
    #{builtins::compiler::last_error noerror = 0;}
    #unsafe_console().print compiler::value compiler::size noerror
    #unsafe_console().print max_stored_size
    return class (value, assigned readers=mut 0, assigned writers=mut 0, max_stored_size, assigned unsafe_mutex=macro<lane> type 40)

def pipe(pipe_data& unsafe_data)
    doc "a pip for thread data transfer"
    return class unsafe_data

def unsafe_pipe_lock(pipe obj)
    {builtins::nat mutex_size = sizeof(mutex_t);}
    if mutex_size>48: fail "mutex too large to fit on allocated lane of 64 bytes"
    mutex_ptr = obj.unsafe_data.unsafe_mutex
    {mutex_lock((mutex_t*)mutex_ptr);}

def unsafe_pipe_unlock(pipe obj)
    {builtins::nat mutex_size = sizeof(mutex_t);}
    if mutex_size>48: fail "mutex too large to fit on allocated lane of 64 bytes"
    mutex_ptr = obj.unsafe_data.unsafe_mutex
    {mutex_unlock((mutex_t*)mutex_ptr);}

def unsafe_pipe_own(pipe obj, "reader"|"writer" role)
    unsafe_pipe_lock obj
    #errors = compiler::deref obj.data.errors
    if role is "writer"
        readers = compiler::deref obj.unsafe_data.readers
        writers = 1+compiler::deref obj.unsafe_data.writers
        (unsafe_mut obj.unsafe_data.writers) = writers
    if role is "reader"
        readers = 1+compiler::deref obj.unsafe_data.readers
        writers = compiler::deref obj.unsafe_data.writers
        (unsafe_mut obj.unsafe_data.readers) = readers
    unsafe_pipe_unlock obj
    return (obj, readers, writers)

def unsafe_pipe_disown(pipe obj, "reader"|"writer" role)
    unsafe_pipe_lock obj
    if role is "reader": (unsafe_mut obj.unsafe_data.readers) = compiler::deref(obj.unsafe_data.readers)-1
    if role is "writer": (unsafe_mut obj.unsafe_data.writers) = compiler::deref(obj.unsafe_data.writers)-1
    unsafe_pipe_unlock obj

def open(pipe obj, "reader" role)
    doc "gain ownership of a pipe for reading only"
    doc "This fails if elsewhere there was ownership for writing"
    status = unsafe_pipe_own(obj, role)
    if status.writers!=0: fail "cannot read pipe while it's being written"
    defer: try unsafe_pipe_disown(obj, role)
    return class const obj

def open(pipe _obj, "writer" role)
    doc "gain ownership of a pipe for writing"
    doc "This blocks other threads from accessing its data."
    status = unsafe_pipe_own(_obj, role)
    if status.readers!=0: fail "cannot write pipe while it's being read"
    if status.writers>1: fail "cannot write to pipe from multiple sources"
    defer: try unsafe_pipe_disown(_obj, role)
    return class assigned obj = unsafe_mut _obj
    
# def with(pipe obj, "wait_and_block")
#     doc "gain ownership of a pipe_data"
#     doc "This blocks other threads from accessing its data."
#     unsafe_pipe_lock obj
#     defer: try unsafe_pipe_unlock obj
#     return class(obj)

def unsafe_spawn(pipe->blank func, pipe input)
    {builtins::compiler::ptr _unsafe_ptr = thread_create((thread_func_t)func, (void*)input__unsafe_data);}
    unsafe_ptr = unsafe_mut _unsafe_ptr
    return class unsafe_ptr

def join(edit unsafe_spawn thread)
    if exists thread.unsafe_ptr
        {thread_join(thread__unsafe_ptr);}

def cpu(nat cores)
    doc "an abstraction for the cpu"
    doc "For now, the number of cores need to be manually inputted."
    return singleton cores

def growing_thread_pool(on edit cpu CPU, nat shared_storage)
    doc "a thread pool"
    doc "This consumes all CPU cores, and can spawn up to"
    doc "that many threads. Completed threads cannot be"
    doc "recovered, but new ones can be added until the"
    doc "pool is full. This can be used to spawn several"
    doc "workers at program start."
    unsafe_threads = mut arena unsafe_spawn[].alloc CPU.cores
    unsafe_arena = edit arena alloc shared_storage
    joined = mut false
    defer
        if not joined
            for i in range of len unsafe_threads.buf
                try join unsafe_threads.buf[i]
        joined = true
    unsafe_return class(CPU, unsafe_threads, unsafe_arena, joined)

def thread(on edit growing_thread_pool THREADS, pipe->blank func, pipe input)
    spawned = edit unsafe_spawn(func, input)
    (at alloc THREADS.unsafe_threads) = spawned
    return spawned

def unsafe_pipe_data_match(open<pipe, "reader"> obj, cstr name, any& type)
    found = compiler::deref obj.obj.unsafe_data.value
    if found!=name: fail "type does not match pipe contents"
    return obj.obj.unsafe_data.unsafe::add(pipe_data::size).compiler::unsafe_attach_type(type)

def unsafe_pipe_data_match(open<pipe, "writer"> obj, cstr name, any& type)
    found = compiler::deref obj.obj.unsafe_data.value
    if found!=name: fail "type does not match pipe contents"
    return unsafe_mut obj.obj.unsafe_data.unsafe::add(pipe_data::size).compiler::unsafe_attach_type(type)

def unsafe_pipe_data_mutex_init(mut pipe_data& obj)
    mutex_ptr_construct = obj.unsafe::add(cstr::size)
    {mutex_init((mutex_t*)mutex_ptr_construct);}
    defer
        mutex_ptr = obj.unsafe::add(cstr::size)
        {mutex_destroy((mutex_t*)mutex_ptr);}
    return obj

def pipe_data_alloc(on edit growing_thread_pool THREADS, nat size) 
    return at THREADS.unsafe_arena.alloc size

def shared(cstr|blank surface, cstr obj)
    if surface is blank: surface = "THREADS"
    if 0==len str obj: fail "empty input name"
    if obj.contains char ",": fail "structural types cannot be shared"
    if obj.contains char "->": fail "functors cannot be shared"
    if surface.contains char ",": fail "shared surface cannot be a structural type"
    CHARS = edit arena char[].alloc 4096
    copy "pipe unsafe_pipe_data_mutex_init unsafe_mut "
    copy surface
    copy ".pipe_data_alloc"
    copy "(pipe_data::size+compiler::value compiler::size "
    copy obj
    copy ").compiler::unsafe_copy("
    copy "pipe_data(compiler::value "
    copy obj
    copy "::tag,compiler::value compiler::size "
    copy obj
    copy "),"
    copy obj
    copy ").compiler::unsafe_attach_type(pipe_data[].unsafe_ptr)"
    #unsafe_console().print str CHARS.buf
    return CHARS.buf

def match(cstr pipe, cstr type_name)
    if type_name.contains char "->": fail "functors cannot be matched"
    CHARS = edit arena char[].alloc 4096
    copy "unsafe_pipe_data_match("
    copy pipe
    copy ","
    copy type_name
    copy "::tag," # tag is the monomorphic name
    copy type_name
    copy "[].unsafe_ptr)"
    return CHARS.buf

# def prepare_writer_overwrite(open<pipe, "writer"> opened_pipe, nat size, cstr name)
#     found = compiler::deref opened_pipe.obj.unsafe_data.max_stored_size
#     if size>found: fail "type does not fit the pipe's size"
#     _name = opened_pipe.obj.unsafe_data.value
#     (unsafe_mut _name) = name
#     return unsafe_mut opened_pipe.obj.unsafe_data.unsafe::add(pipe_data::size)

# def unsafe_replace(cstr opened_pipe, cstr pipe_data)
#     CHARS = edit arena char[].alloc 4096
#     copy "prepare_writer_overwrite("
#     copy opened_pipe
#     copy ",compiler::value compiler::size "
#     copy opened_pipe
#     copy ",compiler::value "
#     copy pipe_data
#     copy "::tag).compiler::unsafe_copy("
#     copy pipe_data
#     copy ")"
#     #unsafe_console().print str CHARS.buf
#     return CHARS.buf
    