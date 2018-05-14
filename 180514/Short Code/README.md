## Description

这里我们定义一种压缩操作，一个字符串可以使用它的任意前辍或其本身来表示。例如helloword可以被压缩成"h"、"he"、"hello"或者"helloworld"本身。

现在有N个不重复的字符串（N <= 10^5），我们要将这些不重复的字符串压缩，使压缩后的字符串不重复且总长度最小。

输入原串的总长度不超过10^5，且只有英文小写字母。输出一个数字，表示压缩后的字符串的最小总长度。

## Sample Input

```
3
codeforces
codehorses
code
```

## Sample Output

```
6
```

## Sample Explaination

* codeforces -> c
* codehorses -> co
* code -> cod

## 原题链接

http://codeforces.com/contest/965/problem/E

## 请我喝一杯可乐

![](http://wizmann-pic.qiniudn.com/18-5-14/73128583.jpg)
