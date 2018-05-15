N = 128
FIB = [1, 1]
MAXI = 10 ** 18

for i in xrange(N):
    FIB.append(FIB[-1] + FIB[-2])

def lower_bound(nums, v):
    n = len(nums)
    l, r = 0, n - 1
    while l <= r:
        m = (l + r) >> 1
        if nums[m] < v:
            l = m + 1
        else:
            r = m - 1
    return l

d = {}

def fib_repr(n):
    if n in d:
        return d[n]

    p = lower_bound(FIB, n)
    if FIB[p] == n:
        d[n] = 1 << p
        return 1 << p
    p -= 1

    u = 1 << p
    v = fib_repr(n - FIB[p])

    d[n] = u | v
    return u | v

def test(n):
    u = fib_repr(n)
    assert '11' not in '{:b}'.format(u)

    v = 0
    for i in xrange(N):
        if u & (1 << i):
            v += FIB[i]
    assert n == v


for i in xrange(1, 256):
    test(i)

import random

for i in xrange(1000):
    test(random.randint(1, 10 ** 18))

import sys

n = int(raw_input())
for i in xrange(n):
    u = int(raw_input())
    print '{:b}'.format(fib_repr(u))

