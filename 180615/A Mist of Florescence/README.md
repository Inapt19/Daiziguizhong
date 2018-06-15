# 每日一题 180615

A Mist of Florescence

森林可以看做一个n * m的二维数组，数组中的每个数都对应着一个格子。森林里有A、B、C、D四种花，每朵花都长在一个格子里，一个格子有且只有一朵花。

如果两个格子共有一条边的话，这两个格子被视作相邻的。相邻的同一种花可以看做“一丛花”。

现在给定在森林中，ABCD四种花的“花丛”数目，让你给出一种可行解。

## 输入

四个整数，分别代表a, b, c, d，即花丛的数目。

## 输出

第一行是两个整数n, m。代表森林的长和宽。1 <= n, m <= 50。

接下来是一个n * m的字符矩阵，代表森林中每个格子中各种着哪种花。

## 示例

```
> input

5 3 2 1

> output

4 7
DDDDDDD
DABACAD
DBABACD
DDDDDDD
```

![](http://codeforces.com/predownloaded/ba/48/ba48b131922fa242edffd37b1eb411f72779e8e3.png)

## 原题链接

http://codeforces.com/contest/989/problem/C
