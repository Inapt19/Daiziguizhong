字符串相似度。
给定两个字符串 `A`, `B`, 通过交换 `K` 次 `A` 中的字符位置，使其等于 `B` ，则 `A` , `B` 字符串的相似度为 `K`。

给定`A`, `B`，返回最小的相似度 `K`

#### 例子
**例 1：**

```
输入: A = "ab", B = "ba"
输出: 1
```

**例 2：**

```
输入: A = "abac", B = "baca"
输出: 2
```

**Note**

1. `1 <= A.length == B.length <= 20`
2. `A` 和 `B` 的字符集 `{'a', 'b', 'c', 'd', 'e', 'f'}`


#### 原题地址

[854. K-Similar Strings](https://leetcode.com/problems/k-similar-strings/description/)

P.S
codeforces 挂求了，只能继续用 leetcode 题目了