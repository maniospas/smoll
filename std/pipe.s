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

def arena(nat size, "incorruptible")
    unsafe_arena = mut arena alloc size
    return class unsafe_arena

def alloc(edit arena<nat, "incorruptible"> arn, nat bytes)
    return alloc arn.unsafe_arena

def pipe_data(cstr value)
    doc "blank pipe_data structure"
    doc "Ensures that 'pipe_data ptr' has a unique type and allocates at least a cstr's"
    doc "(a pointer's) + sizeof(mutex_t) worth of storage so that tag checking and"
    doc "mutex checking are always valid."
    return class value

def pipe(pipe_data& data)
    return class data

def mutex_size()
    {builtins::nat mutex_size = sizeof(mutex_t);}
    return mutex_size

def unsafe_pipe_data_lock(pipe_data& obj)
    mutex_ptr = obj.unsafe::add(pipe_data::size)
    {mutex_lock((mutex_t*)mutex_ptr);}

def unsafe_pipe_data_unlock(pipe_data& obj)
    mutex_ptr = obj.unsafe::add(pipe_data::size)
    {mutex_unlock((mutex_t*)mutex_ptr);}

def with(pipe obj)
    doc "gain ownership of a pipe_data"
    doc "This blocks other threads from accessing its data."
    unsafe_pipe_data_lock obj.data
    defer
        unsafe_pipe_data_unlock obj.data
    return class(obj)

def unsafe_system_thread(any& unsafe_ptr)
    return class unsafe_ptr

def unsafe_spawn(pipe->blank func, pipe input)
    {builtins::compiler::ptr _unsafe_ptr = thread_create((thread_func_t)func, (void*)input__data);}
    unsafe_ptr = unsafe_mut _unsafe_ptr
    return unsafe_system_thread unsafe_ptr

def join(edit unsafe_system_thread thread)
    if exists thread.unsafe_ptr
        {thread_join(thread__unsafe_ptr);}

def cpu(nat cores)
    return singleton cores

def growing_thread_pool(edit cpu cpu)
    threads = mut arena unsafe_system_thread[].alloc cpu.cores
    joined = mut false
    defer
        if not joined
            for i in range of len threads.buf
                try join threads.buf[i]
        joined = true
    unsafe_return class(cpu, threads, joined)

def thread(effect edit growing_thread_pool THREADS, pipe->blank func, pipe input)
    spawned = edit unsafe_spawn(func, input)
    (at alloc THREADS.threads) = spawned
    return spawned

def unsafe_pipe_data_match(with obj, cstr name, any& type)
    # unsafe_console().print exists obj.obj.data
    # unsafe_console().print compiler::deref obj.obj.data.value
    #unsafe_console().print name
    found = compiler::deref obj.obj.data.value
    if found!=name: fail "does not match"
    return unsafe_mut obj.obj.data.unsafe::add(cstr::size+mutex_size()).compiler::unsafe_attach_type(type)

def unsafe_pipe_data_defer_free(mut pipe_data& obj)
    defer
        unsafe::free obj
    return obj

def unsafe_pipe_data_mutex_init(mut pipe_data& obj)
    mutex_ptr_construct = obj.unsafe::add(cstr::size)
    {mutex_init((mutex_t*)mutex_ptr_construct);}
    defer
        mutex_ptr = obj.unsafe::add(cstr::size)
        {mutex_destroy((mutex_t*)mutex_ptr);}
    return obj

def pipe_data_alloc(edit arena<nat, "incorruptible"> arena, nat size) 
    allocated = mut arena.alloc size
    return allocated.buf[allocated.pos]&

def shared(cstr surface, cstr obj)
    if 0==len str obj: fail "empty input name"
    if obj.contains char ",": fail "structural types cannot be shared"
    if obj.contains char "->": fail "functors cannot be shared"
    if not surface is blank
        if surface.contains char ",": fail "shared surface cannot be a structural type"
    CHARS = edit arena char[].alloc 1024
    if surface is blank
        # disabled for now due to leak
        copy "pipe unsafe_pipe_data_mutex_init unsafe_pipe_data_defer_free unsafe_mut unsafe::alloc"
    else
        copy "pipe unsafe_pipe_data_mutex_init unsafe_mut "
        copy surface
        copy ".pipe_data_alloc"
    copy "(cstr::size + mutex_size() + compiler::value compiler::size "
    copy obj
    copy ").compiler::unsafe_copy ("
    copy "pipe_data compiler::value "
    copy obj
    copy "::tag,"
    copy obj
    copy ").compiler::unsafe_attach_type(pipe_data[].unsafe_ptr)"
    #unsafe_console().print str CHARS.buf
    return CHARS.buf

def match(cstr obj, cstr type_name)
    if type_name.contains char "->": fail "functors cannot be matched"
    CHARS = edit arena char[].alloc 1024
    copy "unsafe_pipe_data_match("
    copy obj
    copy ","
    copy type_name
    copy "::tag," # tag is the monomorphic name
    copy type_name
    copy "[].unsafe_ptr)"
    return CHARS.buf
