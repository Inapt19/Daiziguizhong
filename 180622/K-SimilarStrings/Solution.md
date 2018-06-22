> 不是我开炮，一看到这题是awice出的，我就知道这题是道烂题。

题面很唬人，但是看到数据n = 20。就知道这题可以暴搜来搞。中间加点剪枝，肯定T不了。

代码如下：

```
class Solution(object):
    def kSimilarity(self, A, B):
        self.ans = 10 ** 10
        self.dfs(0, list(A), list(B), 0)
        return self.ans

    def dfs(self, cur, A, B, step):
        if cur == len(A):
            self.ans = min(self.ans, step)
            return

        if step >= self.ans:
            return

        if A[cur] == B[cur]:
            self.dfs(cur + 1, A, B, step)
            return

        c1, c2 = A[cur], B[cur]
        for i in xrange(cur + 1, len(A)):
            if A[i] == c2 and A[i] != B[i]:
                A[cur], A[i] = A[i], A[cur]
                self.dfs(cur + 1, A, B, step + 1)
                A[cur], A[i] = A[i], A[cur]
```

还有一个思路是，字符串置换其实是可以成环的。而且我们要使得环最多，因为每一个长度为m的环，我们只需要置换m - 1次。

但是没想出来怎么做。求好解法来打脸。
