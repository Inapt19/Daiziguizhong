每日一题  180516

我们有一个函数f(xs) = k，表示给定一个整数（int32）数组，把里面的数字任意分组，使得：

* 每个组里面有且仅有一个数
* 如果组里面的数的个数多于一个，那么组内的数两两相乘都是完全平方数。

k表示可以分成的最少组数。

现在我们给出一个长度为n的整数（int32）数组，求这个数组的所有连续子数组xs中，使得f(xs) = k的子数组各有多少个。易知k的取值为1~n。

## 样例输入
```
2
5 5
```

## 样例输出
```
3 0
```

## 样例解释

子数组有[5],[5],[5 5]三个，这三个组都最少要分为1组。所以输出`3 0`。

## 提示

本题有点小难，所以这题把坑说一下：

1. 小心数组里有0的情况
2. 这题会卡set/map，尽量使用更简单的数据结构。

## 原题链接

http://codeforces.com/contest/980/problem/D

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)

## 待字闺中微信群

内部测试期间，先加以下微信为好友，之后会把你拉入群中

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)
