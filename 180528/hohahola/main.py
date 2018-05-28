MAXI = 10 ** 10

class Solution(object):
    def __init__(self, n, x, y, z):
        self.n = n
        self.x = x
        self.y = y
        self.z = z

    def calc(self, u):
        if self.z >= self.y:
            return self.n * self.z >= u * self.x
        else:
            v = min(self.n, u)
            return (self.n - v) * z >= v * (self.x - self.y) + (u - v) * self.x

    def solve(self):
        l, r = 0, MAXI
        res = 0
        while l <= r:
            m = (l + r) >> 1
            if self.calc(m):
                l = m + 1
            else:
                r = m - 1
        return r

if __name__ == '__main__':
    (n, x, y, z) = map(int, raw_input().split())

    print Solution(n, x, y, z).solve()
