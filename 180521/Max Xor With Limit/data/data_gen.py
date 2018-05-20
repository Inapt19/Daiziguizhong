from random import randint

MAXI = 10 ** 9

n = randint(1, 10000)
ns = [randint(0, MAXI) for i in xrange(n)]

m = randint(1, 10000)
qs = [randint(0, MAXI) for i in xrange(m)]

print n
print '\n'.join(map(str, ns))

print m
print '\n'.join(map(str, qs))
