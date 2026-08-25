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

def pipe(cstr value)
    doc "blank pipe structure"
    doc "Ensures that 'pipe ptr' has a unique type and allocates at least a cstr's"
    doc "(a pointer's) + sizeof(mutex_t) worth of storage so that tag checking and"
    doc "mutex checking are always valid."
    return class value

def mutex_size()
    {builtins::nat mutex_size = sizeof(mutex_t);}
    return mutex_size

def unsafe_pipe_lock(pipe ptr obj)
    mutex_ptr = obj.unsafe::add(pipe::size)
    {mutex_lock((mutex_t*)mutex_ptr);}

def unsafe_pipe_unlock(pipe ptr obj)
    mutex_ptr = obj.unsafe::add(pipe::size)
    {mutex_unlock((mutex_t*)mutex_ptr);}

def with(pipe ptr obj)
    doc "gain ownership of a pipe"
    doc "This blocks other threads from accessing its data."
    unsafe_pipe_lock obj
    defer
        unsafe_pipe_unlock obj
    return class(obj)

local def pipe_ptr(pipe ptr value)
    return compiler::args()

def system_thread(any ptr unsafe_ptr)
    return class unsafe_ptr

def unsafe_spawn(pipe_ptr->blank func, pipe ptr input)
    {builtins::compiler::ptr _unsafe_ptr = thread_create((thread_func_t)func, (void*)input);}
    unsafe_ptr = edit _unsafe_ptr
    return system_thread unsafe_ptr

def join(edit system_thread thread)
    if exists thread.unsafe_ptr
        {thread_join(thread__unsafe_ptr);}

def cpu(nat cores)
    return singleton cores

def growing_thread_pool(edit cpu cpu)
    threads = mut arena system_thread[].alloc cpu.cores
    joined = mut false
    defer
        if not joined for i in range of len threads.buf try join threads.buf[i]
        joined = true
    unsafe_return class(cpu, threads, joined)

def thread(effect edit growing_thread_pool THREADS, pipe_ptr->blank func, pipe ptr input)
    spawned = edit unsafe_spawn(func, input)
    (at alloc THREADS.threads) = spawned
    return spawned

def unsafe_pipe_match(with obj, cstr name, any ptr type)
    found = compiler::deref obj.obj.value
    if found!=name fail "does not match"
    return unsafe_mut obj.obj.unsafe::add(pipe::size+mutex_size()).compiler::unsafe_attach_type(type)

def unsafe_pipe_defer_free(mut pipe ptr obj)
    defer
        unsafe::free obj
    return obj

def unsafe_pipe_mutax_init(mut pipe ptr obj)
    mutex_ptr_construct = obj.unsafe::add(pipe::size)
    {mutex_init((mutex_t*)mutex_ptr_construct);}
    defer
        mutex_ptr = obj.unsafe::add(pipe::size)
        {mutex_destroy((mutex_t*)mutex_ptr);}
    return obj

def pipe_alloc(edit arena<char::tag> arena, nat size) 
    allocated = mut arena.alloc size
    return allocated.buf[allocated.pos]&

def shared(cstr|blank surface, cstr obj)
    if 0==len str obj fail "empty input name"
    if obj.contains char "," fail "cannot tag a structural type"
    if not surface is blank
        if surface.contains char "," fail "tag surface cannot be structural type"
    CHARS = edit arena char[].alloc 1024
    if surface is blank
        copy "unsafe_pipe_mutax_init unsafe_pipe_defer_free unsafe_mut unsafe::alloc"
    else
        copy "unsafe_pipe_mutax_init unsafe_mut "
        copy surface
        copy ".pipe_alloc"
    copy "(cstr::size + mutex_size() + compiler::size "
    copy obj
    copy ").compiler::unsafe_copy ("
    copy "pipe compiler::value type "
    copy obj
    copy "::tag,"
    copy obj
    copy ").compiler::unsafe_attach_type(pipe[].unsafe_ptr)"
    #unsafe_console().print str CHARS.buf
    return CHARS.buf

def match(cstr obj, cstr type_name)
    CHARS = edit arena char[].alloc 1024
    copy "unsafe_pipe_match("
    copy obj
    copy ","
    copy type_name
    copy "::tag," # tag is the monomorphic name
    copy type_name
    copy "[].unsafe_ptr)"
    return CHARS.buf
