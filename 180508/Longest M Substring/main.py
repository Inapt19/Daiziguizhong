#coding=utf-8

INF = 10 ** 10

def solve(s, k, strict=False):
    l, m = 0, 0
    pre, after = None, None

    if k > len(s):
        return -1

    for i in xrange(k):
        l += s[i] == 'L'
        m += s[i] == 'M'

    res = INF
    after = s[k] if k < len(s) else None

    for i in xrange(k, len(s) + 1):
        if strict:
            if 'M' in [pre, after]:
                continue
        res = min(res, l)

        l -= s[i - k] == 'L'
        m -= s[i - k] == 'M'
        l += s[i] == 'L' if i < len(s) else 0
        m += s[i] == 'M' if i < len(s) else 0

        pre, after = s[i - k], s[i] if i < len(s) else -1
    return -1 if res == INF else res

assert solve("MLLM", 3, False) == 2
assert solve("LLLM", 4) == 3
assert solve("MLLM", 4) == 2
assert solve("MLLM", 4, False) == 2
assert solve("MLLM", 4, True) == 2
assert solve("MLLM", 3, True) == -1

assert solve("MLMMLLM", 3, False) == 1
assert solve("MLMMLLM", 3, True) == -1

assert solve("MLLMLLM", 3, False) == 2
assert solve("MLLMLLM", 3, True) == -1
assert solve("MMM", 3) == 0
assert solve("MMM", 3, True) == 0
assert solve("LLL", 2, True) == 2
assert solve("LLL", 2, False) == 2
