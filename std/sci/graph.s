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
local import std.sci.math
local import std.sci.vec
local import std.sci.mat
local import std.sci.coo

def ppr(float alpha, nat|blank max_iters, float|blank tol)
    doc "personalized PageRank"
    doc "Equivalent to a random walk with restart scheme."
    doc "As a graph filter, this has the same diffusion parameter at each iteration."
    if tol is blank and max_iters is blank
        doc "This version stopes at 1.E-9 numerical tolerance for convergence, or after 100 iterations."
        tol = 0.00000001
        max_iters = 100
    if max_iters is blank
        doc "This version automatically determines the number of iterations to be either 100 if non-zero"
        doc "tolerance is provided, or a probabilistic scheme where most random walks are considered based"
        doc "on the diffusion parameter alpha."
        if tol!=0.0 max_iters = 100
        else max_iters = nat(2.0/(1.0-alpha)+0.5)
    if tol is blank
        doc "This version sets numerical tolerance to zero, meaning tht only the number of iterations"
        doc "is considered as a convergence criterion."
        tol = 0.0
    return (alpha, max_iters, tol)

def ppr()
    doc "personalized PageRank"
    doc "Equivalent to a random walk with restart scheme. Runs for 20 iterations with diffusion alpha 0.9."
    return ppr 0.9

def get(ppr ppr, nat i)
    doc "next graph filer parameter"
    doc "Parameters obtained this way do not correspond to the filter polynomial coefficients"
    doc "but rather on factorization coefficient."
    if i>=ppr.max_iters fail "computational budget reached"
    return ppr.alpha

def filter(ppr config, matrix m, vec p0)
    doc "run a grap filer"
    doc "This requires the graph filter, a (normalized) adjacency matrix, and a personalization vector."
    doc "The filter runs until convergence or until its iteration schema's end is reached."
    p0norm = reduce(p0 abs)
    FLOATS = mut arena ref float[].alloc(5*len p0 unsafe_first () unsafe_leaky)
    normalized_p0 = p0*((1.0-config.alpha)/p0norm)
    prev_p = mut copy normalized_p0
    p = mut copy normalized_p0
    empty = mut vec len p
    for alpha in config
        # this loops requires exactly one allocation
        iter = compiler::for_counter()
        prev_p = p
        p = mut self(m*p)*alpha
        p = self(p)+normalized_p0
        p = self(p)/reduce(p abs)
        if config.tol!=0.0
            err = reduce(prev_p sub p abs)
            if err<config.tol*float len p break
        empty = prev_p
        prev_p = p
        FLOATS.pos = empty.pos
    p = self(p)*p0norm
    return (p,err,iter)

def normalize(effect edit float_allocator FLOATS, edit coo _m)
    doc "summetric matrix normalization"
    doc "Symmetrically normalizes matrix edge weights by dividing with the geometric"
    doc "mean of its degrees."
    m = edit _m
    degrees = sum(m row).pow 0.5
    for entry_ptr& in m
        entry = compiler::deref entry_ptr
        denom = degrees[entry.row]*degrees[entry.col]
        entry_ptr.value = entry.value/denom
    return _m
