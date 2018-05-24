def solve(n):
    res = ''
    while n:
        res += str(n % 9)
        n /= 9
    return int(res[::-1])

def newInteger(n):
    u = 9 ** 10
    res = ''
    while u:
        res += str(n / u)
        n %= u
        u /= 9
    return int(res)

n = int(raw_input())

for i in xrange(n):
    u = int(raw_input())
    assert solve(u) == newInteger(u)
    print solve(u)
