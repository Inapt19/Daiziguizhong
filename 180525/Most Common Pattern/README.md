# 每日一题 180525

## 最多模式

Kuro, Shiro和Katie三个人在玩一个名叫“最多模式”的游戏。

游戏规则如下：

1. 三个人分别依次随机写出一个长度为m的字符串（1 <= m <= 10^5）
2. 给定一个整数n（0 <= n <= 10^9），三个人分别对字符串进行恰好n次操作
3. 在操作完成后，三个人的字符串中，谁的“相同模式”最多，谁就获胜。如果最终结果不能决出优胜者，则游戏为平局。

字符串只包含大小写字母，每一次操作只且只能修改字符串中的一个字母。例如"aa" -> "ab"。但是不允许不修改。

“相同模式”代表字符串中的相同子串，例如"abcabc"的相同模式"abc"的数量为2。"oooxooo"中"o"的相同模式为6，"x"的相同模式数为1，字符串的“最多相同模式”为6。

输出为游戏的优胜者的名字（Kuro, Shiro或Katie，对应着第一、第二和第三个字符串），如果为平局，输出"Draw"。

## 输入输出样例

```
> INPUT
3
Kuroo
Shiro
Katie

> OUTPUT
Kuro
```

```
> INPUT
7
treasurehunt
threefriends
hiCodeforces

> OUTPUT
Shiro
```

```
> INPUT
15
foPaErcvJ
mZaxowpbt
mkuOlaHRE

> OUTPUT
Draw
```

## 样例解释

样例1中，Kuro的字符串可以变化为"ooooo"，相同模式数为5，所以是优胜者。

样例3中，所有人都可以将字符串的最大相同模式数变为9，所以是平局。

## 原题链接

http://codeforces.com/contest/979/problem/B


## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中微信群

内部测试期间，先加以下微信为好友，之后会把你拉入群中

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)

