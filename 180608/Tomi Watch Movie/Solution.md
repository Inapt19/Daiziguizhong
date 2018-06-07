由于本题N的数量较小，所以可以考虑使用状态压缩DP来解。

初始状态可以用全0表示，含义是所有座位都是空的。

然后我们枚举n轮，代表我们有n个人。每轮枚举k种情况，代表k种不同的电影票。每次状态转移，维护一个以分数表示的概率值。

在我的实现里，枚举的过程是用了BFS。这种实现方法比较简单。

分数表示的维护要注意除0的情况。

总的来说，只要状态转移写对了，就大概能过了。

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中算法讨论微信群

微信群算法讨论，娱乐比赛开黑等你加入。

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)
