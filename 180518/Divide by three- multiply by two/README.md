# 每日一题 180518

除三乘二

现在有两种运算符f(x)、g(x)：

* f(x) = x / 3 if x % 3 == 0 else nan
* g(x) = x * 2

（nan 意为 not a number，即值不存在）

现在给定n个整数，让你重新排列这些整数[a1, a2 ... an]，并在相邻的两数中间插入f(x)或g(x)，使得：

a<sub>2</sub> = u<sub>1</sub>(a<sub>1</sub>)     
a<sub>3</sub> = u<sub>2</sub>(a<sub>2</sub>)    
...     
a<sub>n</sub> = u<sub>n - 1</sub>(a<sub>n - 1</sub>)    

u<sub>i</sub>(x)为f(x)或g(x)。

输入格式：

* 第一行为整数n （2 <= n <= 100)
* 第二行为n个整数，1 <= ai <= 3 * 1e18
* 输入数据保证答案一定存在

样例输入：

```
> INPUT
6
4 8 6 3 12 9

> OUTPUT
9 3 6 12 4 8 
```

解释：

1. f(9) = 3
2. g(3) = 6
3. g(6) = 12
4. f(12) = 4
5. g(4) = 8


## 原题链接

http://codeforces.com/contest/977/problem/D

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中微信群

内部测试期间，先加以下微信为好友，之后会把你拉入群中

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)
