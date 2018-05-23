def brute_force(n):
    i = 0
    j = 0
    while i < n:
        j += 1
        if not '0' in str(j):
            i += 1
    return j

def solve(n):
    u = 9
    cnt = 0
    while n > u:
        n -= u
        u *= 9
        cnt += 1
    n -= 1
    v = str(solve9(n))
    cnt -= len(v)
    v = '0' * (cnt + 1) + v
    v = map(lambda c: int(c) + 1, str(v))
    return int(''.join(map(str, v)))
    

def solve9(n):
    res = ''
    m = n
    while n:
        res = str(n % 9) + res
        n /= 9
    res = '0' + res
    assert int(res, 9) == m
    return int(res)

assert solve(10) == 11
assert solve(1) == 1
for i in xrange(1, 100):
    assert brute_force(i) == solve(i)


n = int(raw_input())
for i in xrange(n):
    u = int(raw_input())
    print solve(u)
