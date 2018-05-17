这道题我们很容易想到贪心。比如数组的第一个数是10，k=3。那么我们一定会分一个组为[8, 9, 10]。这样保证第一个数的组号最小，从而保证最后结果的字典序最小。

那下来考虑边界情况。仍以k=3为例，第一个数是0，此时我们不能武断的将[0, 1, 2]分为一组，而是只将[0]分为一组，其它的值待定。因为如果数组是[0, 3, 4]的话，我们可以分组[0], [2, 3, 4]，最后的数组为[0, 2, 2]。否则，我们只能分成[0, 3, 3]，这并不是最优解。

所以贪心策略如下：

遍历原数组，当遍历到位置i时，向前看k个数。找到 **最小的** **未被标明组号** 的t位置 (i - k + 1 <= t <= i)，将nums[t ... i]的组号设为t。

最后输出结果数组即可。

代码详见文件夹。

## 原题链接

http://codeforces.com/contest/980/problem/C

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中微信群

内部测试期间，先加以下微信为好友，之后会把你拉入群中

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)
