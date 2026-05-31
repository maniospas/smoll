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
# - added automatic seeding
# The same license is applied to changes.

local import "std/core.s"

local def rotl(nat x, nat k)
    {builtins:nat left = x << k;}
    {builtins:nat compk = 64 - k;}
    {builtins:nat right = x >> compk;}
    {builtins:nat z = left | right;}
    return z

def splitmix64(mut nat x)
    doc "next random number"
    doc "Computes the next random number of a splitmix64 sequence using the mutable "
    doc "unsigned int argument as state to be updated. This is NOT cryptographically "
    doc "secure and also has small period of 2^64 so usage is not recommended for "
    doc "long-running sequences. It is, however, faster than computing a next Rand "
    doc "state with next. If you do not provide a seed, a number obtained from the "
    doc "current time is provided. That can only be the start of a sequence, and "
    doc "marked as a leaking resource to prevent time-based randomization (which is "
    doc "not random)."
    {x = x+0x9E3779B97F4A7C15ULL;}
    {builtins:nat z = x;}
    {builtins:nat rot = z >> 30;}
    {z = z^rot;}
    {z = z * 0xBF58476D1CE4E5B9ULL;}
    {rot = z >> 27;}
    {z = z^rot;}
    {z = z * 0x94D049BB133111EBULL;}
    {rot = z >> 31;}
    {z = z ^ rot;}
    return mut z

def splitmix64()
    doc "time seed"
    doc "Computes the seed of a splitmix64 sequence using the clock"
    doc "as the source of entropy."
    VM "[time.time_ns()]"
    {builtins:compiler:ptr ts = alloca(sizeof(struct timespec));}
    {clock_gettime(CLOCK_REALTIME, (struct timespec*)ts);}
    {builtins:nat seed = (unsigned long long)((struct timespec*)ts)->tv_sec * (unsigned long long)1000000000 + ((struct timespec*)ts)->tv_nsec;}
    return seed

def Rand(nat seed)
    doc "random number generator"
    doc "Xoshiro256plus random numbers from https://prng.di.unimi.it/"
    doc "These and are NOT cryptographically secure."
    doc "This a structural type for storing the progress of random number generators "
    doc "on four u64 state fields. The version is seed-initalized. Its period is 2^256-1."
    if seed is blank
        seed = splitmix64()
    modifying_seed = mut seed
    s0 = mut splitmix64(modifying_seed)
    s1 = mut splitmix64(modifying_seed)
    s2 = mut splitmix64(modifying_seed)
    s3 = mut splitmix64(modifying_seed)
    return class(s0,s1,s2,s3)

def Rand()
    doc "random number generator"
    doc "Xoshiro256plus random numbers from https://prng.di.unimi.it/"
    doc "These and are NOT cryptographically secure."
    doc "This a structural type for storing the progress of random number generators "
    doc "on four u64 state fields. This version defaults to a time-based seed. Its period is 2^256-1."
    return Rand splitmix64()

def next(mut Rand self)
    doc "Computes the next random number of a Rand sequence."
    {builtins:nat result = self__s0 + self__s3;}
    {builtins:nat t = self__s1 << 17;}
    {self__s2 = self__s2^self__s0;}
    {self__s3 = self__s3^self__s1;}
    {self__s1 = self__s1^self__s2;}
    {self__s0 = self__s0^self__s3;}
    {self__s2 = self__s2^t;}
    self.s3 = rotl(self.s3, 45)
    {builtins:float denom = 0x0020000000000000ULL;}
    {builtins:float nom = result >> 11;}
    {builtins:float value = nom / denom;}
    return value

