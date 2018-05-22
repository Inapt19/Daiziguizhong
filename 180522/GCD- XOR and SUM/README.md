## 每日一题 180522

GCD, XOR 与 SUM

我们有一个数组a[]，现在定义一种查询Q(a[], x, k, s) = v。

* v是a[]中的一个元素
* v满足GCD(x, v) % k == 0
* x + v <= s
* 如果v存在，返回x XOR v 最大的v。否则返回-1。

## 输入格式：

第一行是一个整数n，代表后续有n个操作。

接下来的n行，每一行的第一个有一个整数t。

* 当t == 1时，接下来有一个整数u。代表向a[]中插入整数u。
* 当t == 2时，接下来有三个整数x, k, s。代表查询Q的三个参数。

## 输出格式：

在t == 2时，输出最大的v，如果不存在，输出-1。

## 样例

```
> INPUT
5
1 1
1 2
2 1 1 3
2 1 1 2
2 1 1 1

> OUTPUT
2
1
-1

```

解释：

* 第一步：a[] = {1}
* 第二步：a[] = {1, 2}
* 第三步：Q({1, 2}, 1, 1, 3) = 2
* 第四步：Q({1, 2}, 1, 1, 2) = 1
* 第五步：Q({1, 2}, 1, 1, 1)不存在这样的v，所以输出-1

## 原题链接

http://codeforces.com/contest/979/problem/D

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中微信群

内部测试期间，先加以下微信为好友，之后会把你拉入群中

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)


