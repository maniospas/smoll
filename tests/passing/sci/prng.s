import std.core
import std.test
import std.rand
import std.sci.math::abs
import std.sci.math::sqrt

def test_float(on CLI, on edit RAND)
    n = 100000
    sum = mut 0.0
    min = mut 1.0
    max = mut 0.0

    for i in range of n
        x = rand()
        assert(x >= 0.0 and x < 1.0, "rand is in [0,1)" failure_only)
        sum = sum + x
        if x < min
            min = x
        if x > max
            max = x

    assert(abs((sum / float n)-0.5)<0.01, "float mean to be expected near 0.5")
    assert(min<0.01, "min expected to be near 0")
    assert(max>0.99, "max expected to be near 1")


def test_bounded(on CLI, on edit RAND)
    n = 100000
    counts = mut [0, 0, 0, 0, 0, 0]
    for i in range of n
        x = rand of 6
        counts[x] = counts[x] + 1
    expected = 100000/6
    CHARS = new()
    for count in counts
        assert(absdiff(expected,count)<expected/50, copy(compiler::for_counter()+1)+" digit out of 6 almost uniformly distributed")


def test_low_bit(on CLI, on edit RAND)
    n = 100000
    zeros = mut 0
    for i in range of n
        if nat(bits(rand type "nat").band bits 1) == 0
            zeros = zeros + 1
    assert(absdiff(zeros,n/2)<n/300, "last bit almost uniformly distributed")


def test_correlation(on CLI, on edit RAND)
    n = 100000
    prev = mut rand()
    sx = mut 0.0
    sy = mut 0.0
    xy = mut 0.0
    x2 = mut 0.0
    y2 = mut 0.0
    for i in range of n
        next = rand()
        sx = sx + prev
        sy = sy + next
        xy = xy + prev*next
        x2 = x2 + prev*prev
        y2 = y2 + next*next
        prev = next

    fn = float n
    mx = sx/fn
    my = sy/fn
    corr = (xy/fn-mx*my)/sqrt((x2/fn-mx*mx)*(y2/fn-my*my))
    assert(corr<0.01, "serial correlaction expected near 0")


def test_bounds(on CLI, on edit RAND)
    assert(0==rand of 1, "rand of 1 always returns 0")
    for i in range of 10000
        x = rand of 6
        assert(x < 6, "rand of 6 is in [0,6)" failure_only)


def main(CLI, edit RAND)
    test_float()
    test_bounded()
    test_low_bit()
    test_correlation()
    test_bounds()
