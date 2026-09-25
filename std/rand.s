# Written in 2018 by David Blackman and Sebastiano Vigna (vigna@acm.org)
# 
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
# IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */
# 
# Edited in 2025-2026 by Emmanouil Krasanakis (maniospas@hotmail.com) 
# to include smoll's standard library:
# - converted to smoll implementation
# - added automatic seeding and ported the implementation
# The same license is applied to changes. The original is credited because
# that is the main contribution to producing "good enough" random numbers.

local import std.core

local def rotl(nat x, nat k)
    doc "rotate and shift operation needed for xoshiro sequences"
    {builtins::nat left = x << k;}
    {builtins::nat compk = 64 - k;}
    {builtins::nat right = x >> compk;}
    {builtins::nat z = left | right;}
    return z

def splitmix64(mut nat x)
    doc "next random number"
    doc "Computes the next number of a splitmix64 random sequence using the mutable "
    doc "unsigned `nat` as state to be updated. This is NOT cryptographically "
    doc "secure and also has small period of 2^64 so usage is not recommended for "
    doc "long-running sequences. It is, however, faster than computing a Xoshiro256"
    doc "next state, if there is use for extreme speed. The result is a number between"
    doc "0 and 2^64-1. Since this sequence is curated for speed anyway, it can be acceptable"
    doc "to create small randomization biases by obtaining the modulo of a result. Example:"
    doc "```python"
    doc "import std.core"
    doc "import std.rand"
    doc "def main(CLI)"
    doc "    randstate = mut 42               # replicable seed"
    doc "    print splitmix64(randstate) % 10 # prints 5"
    doc "    print splitmix64(randstate) % 10 # prints 9"
    doc "```"
    {x = x+0x9E3779B97F4A7C15ULL;}
    {builtins::nat z = x;}
    {builtins::nat rot = z >> 30;}
    {z = z^rot;}
    {z = z * 0xBF58476D1CE4E5B9ULL;}
    {rot = z >> 27;}
    {z = z^rot;}
    {z = z * 0x94D049BB133111EBULL;}
    {rot = z >> 31;}
    {z = z ^ rot;}
    return mut z

def splitmix64("time")
    doc "time seed"
    doc "Computes the seed of a splitmix64 sequence using the clock"
    doc "as the source of entropy. This should only be the start of a sequence."
    doc "Example:"
    doc "```python"
    doc "import std.core"
    doc "import std.rand"
    doc "def main(CLI)"
    doc "    randstate = mut splitmix64 type \"time\" # initial seed"
    doc "    print splitmix64(randstate) % 10       # random number"
    doc "    print splitmix64(randstate) % 10       # another random number"
    doc "```"
    VM "[time.time_ns()]"
    #{builtins::compiler::ptr ts = alloca(sizeof(struct timespec));}
    {struct timespec tss;}
    {builtins::compiler::ptr ts = (char*)&tss;}
    {clock_gettime(CLOCK_REALTIME, (struct timespec*)ts);}
    {builtins::nat seed = (unsigned long long)((struct timespec*)ts)->tv_sec * (unsigned long long)1000000000 + ((struct timespec*)ts)->tv_nsec;}
    return seed

def xoshiro256(nat seed, "plus")
    doc "Xoshiro256plus random numbers"
    doc "Its implementation originates from https://prng.di.unimi.it/"
    doc "Random numbers produced with this are NOT cryptographically secure."
    doc "This is a class for storing the progress of random number generators "
    doc "on four nat state fields. Its period is 2^256-1."
    doc "The difference between Xoshiro256plus and Xoshiro256plusplus is that this"
    doc "one loses out on some theoretical guarantees for a some computational speedup"
    doc "gains. Thus, only the `rand()` function that creates uniform random floats"
    doc "in the inerval [0,1) is implemented here, as an implementation for large"
    doc "natural numbers would be problematic. When such numbers are needed, the"
    doc "speedup might be worth it. Otherwise, do default to Xoshiro256plusplus,"
    doc "which also implements random `nat` generation and is easier to pass around"
    doc "via its RAND type alias (see its documentation). Example:"
    doc "```python"
    doc "import std.core"
    doc "import std.rand"
    doc "def roll(on edit xoshiro256<\"plus\"> RAND)"
    doc "    return nat 1+nat 6.0*rand()"
    doc "def main(CLI)"
    doc "    RAND = mut xoshiro256(42 plus)"
    doc "    print nn \"rolling a d6: \""
    doc "    print roll()  # always the same"
    doc "```"
    modifying_seed = mut seed
    s0 = mut splitmix64 modifying_seed
    s1 = mut splitmix64 modifying_seed
    s2 = mut splitmix64 modifying_seed
    s3 = mut splitmix64 modifying_seed
    return class(s0,s1,s2,s3)

def xoshiro256(nat seed, "plusplus")
    doc "Xoshiro256plusplus random numbers"
    doc "Its implementation originates from https://prng.di.unimi.it/"
    doc "Random numbers produced with this are NOT cryptographically secure."
    doc "This is a class for storing the progress of random number generators "
    doc "on four nat state fields. The version is seed-initalized. Its period is 2^256-1."
    doc "A non-seeded overload defaults to time-based seeds."
    doc "However, you can create seeded sequences with this function too, like below."
    doc "In the example, the RAND effect is automatically passed to `rand()`,"
    doc "though you can create your own local random sequences and pass those as explicit arguments"
    doc "too. Example:"
    doc "```python"
    doc "import std.core"
    doc "import std.rand"
    doc "def roll(on edit xoshiro256<\"plusplus\"> RAND)"
    doc "    return rand of(1 upto 6)"
    doc "def main(CLI)"
    doc "    RAND = edit xoshiro256 type \"plusplus\""
    doc "    print nn \"rolling a d6: \""
    doc "    print roll()"
    doc "```"
    modifying_seed = mut seed
    s0 = mut splitmix64 modifying_seed
    s1 = mut splitmix64 modifying_seed
    s2 = mut splitmix64 modifying_seed
    s3 = mut splitmix64 modifying_seed
    return class(s0,s1,s2,s3)

def xoshiro256("plus")
    doc "Xoshiro256plus random numbers"
    doc "This version initializes the state with a time-based seed."
    doc "Example:"
    doc "```python"
    doc "import std.core"
    doc "import std.rand"
    doc "def roll(on edit xoshiro256<\"plus\"> RAND)"
    doc "    return nat 1+nat 6.0*rand()"
    doc "def main(CLI)"
    doc "    RAND = edit xoshiro256 type \"plus\""
    doc "    print nn \"rolling a d6: \""
    doc "    print roll()"
    doc "```"
    return xoshiro256(splitmix64 type "time" plus)


def xoshiro256("plusplus")
    doc "Xoshiro256plusplus random numbers"
    doc "This version initializes the state with a time-based seed. Importantly, a RAND"
    doc "type is an alias for this type, so that you can easily grant random number"
    doc "generalization capabilities to your declared functions and main. Example:"
    doc "Example:"
    doc "```python"
    doc "import std.core"
    doc "import std.rand"
    doc "def roll(on edit RAND)"
    doc "    return rand of(1 upt 6)"
    doc "def main(CLI, edit RAND)"
    doc "    print nn \"rolling a d6: \""
    doc "    print roll()"
    doc "```"
    
    return xoshiro256(splitmix64 type "time" plusplus)

def rand(on edit xoshiro256<"plus"> RAND)
    doc "next random number"
    doc "Computes the next random number of a xoshiro256plus random sequence."
    {builtins::nat result = RAND__s0 + RAND__s3;}
    {builtins::nat t = RAND__s1 << 17;}
    {RAND__s2 = RAND__s2^RAND__s0;}
    {RAND__s3 = RAND__s3^RAND__s1;}
    {RAND__s1 = RAND__s1^RAND__s2;}
    {RAND__s0 = RAND__s0^RAND__s3;}
    {RAND__s2 = RAND__s2^t;}
    RAND.s3 = rotl(RAND.s3, 45)
    {builtins::float denom = 0x0020000000000000ULL;}
    {builtins::float nom = result >> 11;}
    {builtins::float value = nom / denom;}
    return value

def rand(on edit xoshiro256<"plusplus"> RAND)
    doc "next random number"
    doc "Computes the next random number of a xoshiro256plusplus random sequence."
    {builtins::nat sum = RAND__s0 + RAND__s3;}
    result = rotl(sum, 23)
    {result = result + RAND__s0;}
    {builtins::nat t = RAND__s1 << 17;}
    {RAND__s2 = RAND__s2^RAND__s0;}
    {RAND__s3 = RAND__s3^RAND__s1;}
    {RAND__s1 = RAND__s1^RAND__s2;}
    {RAND__s0 = RAND__s0^RAND__s3;}
    {RAND__s2 = RAND__s2^t;}
    RAND.s3 = rotl(RAND.s3, 45)
    {builtins::float denom = 0x0020000000000000ULL;}
    {builtins::float nom = result >> 11;}
    {builtins::float value = nom / denom;}
    return value

def rand(on edit xoshiro256<"plusplus"> RAND, "nat")
    doc "next random natural number"
    doc "Computes the next 64-bit natural number of a xoshiro256plusplus random sequence."
    {builtins::nat sum = RAND__s0 + RAND__s3;}
    result = rotl(sum, 23)
    {result = result + RAND__s0;}
    {builtins::nat t = RAND__s1 << 17;}
    {RAND__s2 = RAND__s2^RAND__s0;}
    {RAND__s3 = RAND__s3^RAND__s1;}
    {RAND__s1 = RAND__s1^RAND__s2;}
    {RAND__s0 = RAND__s0^RAND__s3;}
    {RAND__s2 = RAND__s2^t;}
    RAND.s3 = rotl(RAND.s3, 45)
    return result

def rand(on edit xoshiro256<"plusplus"> RAND, nat from, nat to)
    doc "next bounded random natural number"
    doc "Returns a uniformly distributed natural number in [from, to)."
    doc "Uses multiply-high rejection sampling to avoid modulo bias."
    doc "Prefer usage of the `of` function to construct semantically"
    doc "explicit bounds, such as:"
    doc "- `rand of 5` for a choice among 0,1,2,3,4"
    doc "- `rand of(2 to 5)` for a choice among 2,3,4"
    doc "- `rand of(2 upto 5)` for a choice among 2,3,4,5"
    if to==from: return to
    max = to-from
    x = mut rand type "nat"
    {__uint128_t product = (__uint128_t)x * (__uint128_t)max;}
    {builtins::nat low = product;}
    if low < max
        {builtins::nat threshold = -max % max;}
        while low < threshold
            x = rand type "nat"
            {product = (__uint128_t)x * (__uint128_t)max;}
            {low = product;}
    {builtins::nat result = (product >> 64);}
    return from+result

def RAND() 
    doc "default random number generator"
    doc "Default RAND effect initialization for Xoshiro256plusplus with time-based seed. Its period is 2^256-1."
    doc "Leverage the lack of arguments to instantiate a global random"
    doc "sequence automatically in the main function. It supports both"
    doc "random floats and nats. See the `xoshiro256` overloads for details. Example:"
    doc "```python"
    doc "import std.core"
    doc "import std.rand"
    doc "def roll(on edit RAND)"
    doc "    return rand of(1 upto 6) # similar to range notatation"
    doc "def main(CLI, edit RAND)"
    doc "    print nn \"rolling a d6: \""
    doc "    print roll()"
    doc "```"
    return xoshiro256 type "plusplus"