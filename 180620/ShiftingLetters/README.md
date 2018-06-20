给定一个字符串 `S`, 一个数组 `shifts`

对字符串 `S` 里的字符进行字符表转换，也即是对字符 `+1`，例如 `a->b`, `t->u` 以及 `z->a`。

假设 `shifts[i] = x`, 则是要对头 `i + 1` 个字符进行 `x` 次转换操作。

返回转换后的字符串 `S`

**例子:**

```
输入: S = "abc", shifts = [3,5,9]
输出: "rpl"

解释: 
初始值 "abc".
1. 对 S 前 1 个字符转化 3 次后，得 "dbc"
2. 对 S 前 2 个字符转化 5 次后，得 "igc"
3. 对 S 前 2 个字符转化 9 次后，得 "rpl"
最终返回 "rpl"
```

**Note:**

1. 1 <= S.length = shifts.length <= 20000
2. 0 <= shifts[i] <= 10 ^ 9

#### 原题链接

[Shifting Letters](https://leetcode.com/problems/shifting-letters/description/)