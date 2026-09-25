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
    doc "accumulate statistics to produce mean and std values"
    doc "This does not consume any memory, and is stable while"
    doc "streaming data. The maximum number of observations that"
    doc "can be recorded without buffer overflows destroyng correctness"
    doc "are `2^64-1`. Example:"
    doc "```python"
    doc "import std.core"
    doc "import std.sci.stats"
    doc "def main(CLI)"
    doc "    accum = accumulator()"
    doc "    accum.append 0.1"
    doc "    accum.append 0.2"
    doc "    accum.append 0.3"
    doc "    print nn \"mean:\""
    doc "    print mean accum"
    doc "    print nn \"std:\""
    doc "    print std accum"
    doc "```"
    return class(
        assigned mean_value=mut 0.0, 
        assigned m2=mut 0.0, 
        assigned count=mut 0)

def append(edit accumulator accum, float value)
    doc "append a value to a statics accumulator"
    accum.count = accum.count+1
    delta = value-accum.mean_value
    accum.mean_value = accum.mean_value+delta/(float accum.count unsafe_assume_nonzero)
    delta2 = value-accum.mean_value
    accum.m2 = accum.m2+delta*delta2

def mean(accumulator accum)
    doc "the mean value obtained"
    doc "This is obtained from a zero-memory statistics accumulator."
    return accum.mean_value

def std(accumulator accum)
    doc "the standard deviation"
    doc "This is obtained from a zero-memory statistics accumulator."
    return sqrt(accum.m2/float(accum.count))

def std(accumulator accum, "sample")
    doc "the sample standard deviation"
    doc "This is obtained from a zero-memory statistics accumulator."
    doc "It is the sample standard deviation, whose average is statistically"
    doc "unbiased."
    return sqrt(accum.m2/float(accum.count-1))

def pearson(vec x, vec y)
    doc "pearson correlation between the values of two vectors"
    if len(x) != len y: fail "vectors must have the same length"
    if len(x) < 2: fail "at least two values required"
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
    if denominator == 0.0: fail "undefined for constant vectors"
    return numerator/denominator
