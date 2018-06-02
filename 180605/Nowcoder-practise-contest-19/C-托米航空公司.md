# C: 托米航空公司

链接：https://www.nowcoder.com/acm/contest/111/C          
来源：牛客网

托米家的飞机每排有M个座位，有N排座位。因此座椅形成了M × N的网格（忽略过道）,公司为每次航班都出售K张票。

座位必须遵守以下规则：座位被占用时，座位正前方和**一个座位**后方的**一个座位**以及当前座位左边的**一个座位**和右边的**一个座位**必须是空的。

如果这一趟的某个座位是占用的，而另一趟的座位是空的，则这两趟飞机座位安排是不同的。

现在给定N, M，你需要从这些座位中选出K个合法的座位。求可能的座位安排的总数，由于这个数字可能非常大，我们只求它对420047取模的结果。

## 输入描述:

输入的第一行包含一个整数T (T <= 10)，表示指定测试用例的数量。

每个测试用例由包含三个整数M，N和K的一行组成。

N*M<=80, K<=4

## 输出描述:

对于每个测试用例输出一行，表示答案对420047取模的结果。

## 示例

```
> INPUT
3
2 3 2
2 4 4
2 5 1
> OUTPUT
8
2
10
```

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中算法讨论微信群

微信群算法讨论，娱乐比赛开黑等你加入。

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)

