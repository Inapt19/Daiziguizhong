> 因为题目中数字的最大值为10**5，所以规定常数MAXI = 10 ** 5。

由于GCD(x, v) % k == 0，所以x和v都需要包含因子k。      
所以对于a[]中的每一个数，我们都做一次分解，并按照其因子归类。这样所需要的空间为O(sqrt(MAXI) * N)。

然后对于xor最大的数，我们可以使用[昨天][1]题目的涉及到的解法，使用Trie树在O(log(MAXI))的时间内求得最终的答案。

> 做我的题就是好，天天都能连(lian，一声）上。

这里再说一种巧妙的解法。因为我们知道了数组a[]中，包含因子k的数字。又由于x + v <= s，所以可以使用二分法快速定位可能的a[i]值。      
同时又由于a + b >= a ^ b （为什么？）。所以我们从a[i]位置上，从大往小遍历，并维护v值，直到 x + a[i] < x ^ v，就可以不进行后续的判断了。

代码详见文件夹下的main.cc文件。

[1]: https://github.com/Inapt19/Daiziguizhong/blob/master/180521/Max%20Xor%20With%20Limit/README.md

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中微信群

内部测试期间，先加以下微信为好友，之后会把你拉入群中

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)


