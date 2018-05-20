class Trie(object):
    def __init__(self):
        self.trie = [ [-1, -1, False] ]

    def insert(self, num):
        digits = map(int, '{:032b}'.format(num))

        p = 0
        for digit in digits:
            q = self.trie[p][digit]
            if q == -1:
                self.trie.append([-1, -1, False])
                self.trie[p][digit] = len(self.trie) - 1
            q = self.trie[p][digit]

            p = q
        self.trie[p][2] = True

    def query(self, limit):
        digits = map(int, '{:032b}'.format(limit))
        ge = True

        p = 0
        res = [-1 for i in xrange(32)]
        for i in xrange(32):
            (l, r, _) = self.trie[p]
            if r != -1:
                res[i] = 0
                p = r
            else:
                res[i] = 1
                if res > digits:
                    res[i] = 0
                p = l
        ans = int(''.join(map(str, res)), 2)

        assert ans <= limit

        return ans

def make_binary_trie(nums):
    trie = Trie()
    for num in nums:
        trie.insert(num)
    return trie

def solve(nums, queries):
    trie = make_binary_trie(nums)

    res = []
    for query in queries:
        assert query <= (10 ** 9)
        res.append(trie.query(query))
    return res

def test(nums, queries):
    res = solve(nums, queries)
    print res
    maxi = max(queries)

    ans = [-1 for i in xrange(maxi + 1)]
    for i in xrange(maxi + 1):
        ans[i] = max([i ^ num for num in nums])
        if i:
            ans[i] = max(ans[i], ans[i - 1])

    for i, query in enumerate(queries):
        assert ans[query] == max(res[i] ^ num for num in nums)


from random import randint
if __name__ == '__main__':
    nums = [1, 2, 3]
    queries = [2]
    test(nums, queries)

    nums = [randint(1, 100) for i in xrange(3)]
    queries = [randint(1, 1000) for i in xrange(3)]
    print nums, queries
    test(nums, queries)

    nums = [randint(1, 10 ** 5) for i in xrange(3)]
    queries = [randint(1, 10 ** 4) for i in xrange(4)]
    test(nums, queries)


