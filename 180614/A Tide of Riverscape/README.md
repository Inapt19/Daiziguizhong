# 每日一题 180614

## A Tide of Riverscape

给定一个长度为n的字符串s，s中包含"0"、"1"和"."。然后给定一个正整数k。

现在允许你把"."替换成0或1当中的一个。使得字符串**不是**一个k循环字符串。k循环字符串的字义是，对于0 <= i < i + k < n，总有s[i] == s[i + k]。

## 输入格式

第一行是两个整数n, k。(1 <= k <= n < 2000)

然后是一个长度为n的字符串s。

## 输出格式

如果我们能构造出一个不是k循环的字符串，输出这个字符串。

否则输出"No"。

## 示例

```
> INPUT
10 7
1.0.1.0.1.

> OUTPUT
1000100010
```

```
> INPUT
10 9
1........1

> OUTPUT
No
```

## 原题链接

http://codeforces.com/contest/989/problem/B