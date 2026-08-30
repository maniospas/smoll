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

def accumulator()
    sums = mut 0.0
    square_sums = mut 0.0
    count = mut 0
    return class(sums, square_sums, count)

def append(edit accumulator accum, float value)
    accum.sums = accum.sums+value
    accum.square_sums = accum.square_sums+value*value
    accum.count = accum.count+1

def mean(accumulator accum)
    return accum.sums/float accum.count

def std(accumulator accum)
    m = mean accum
    return sqrt(accum.square_sums/float(accum.count)-m*m)
    

def pearson(vec x, vec y)
    doc "pearson correlation between the values of two vectors"
    if len(x) != len y fail "vectors must have the same length"
    if len(x) < 2 fail "at least two values required"
    n = len x
    sx = mut 0.0
    sy = mut 0.0
    sxx = mut 0.0
    syy = mut 0.0
    sxy = mut 0.0
    for i in range of n
        try xi = x[i unsafe_assume_inbounds]
        try yi = y[i unsafe_assume_inbounds]
        sx = sx + xi
        sy = sy + yi
        sxx = sxx + xi*xi
        syy = syy + yi*yi
        sxy = sxy + xi*yi
    fn = float n
    numerator = (fn*sxy) - (sx*sy)
    denominator = sqrt((fn*sxx-sx*sx)*(fn*syy-sy*sy))
    if denominator == 0.0 fail "undefined for constant vectors"
    return numerator/denominator
