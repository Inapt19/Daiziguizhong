我们先考虑这样一种情况，对于数3和12，它们的乘积是36，一个完全平方数。

那么在以上情况中，12中的因子4是不起作用的。所以我们对于输入数据，先将其平方质因子都去掉，只保留其它的因子。

这样一来，对于“净化”后的数，如果两个数相等，说明它们之间相乘是完全平方数。（这里需要额外考虑0的情况）

由于n最大只有5000，所以我们可以用O(n^2)的算法枚举所有的子数组，并且维护子数组中，被“净化”后的值的unique count。

维护unique count可以使用`set<int>`，但是本题卡了STL。所以我们变换一下思路，对于n个数，被净化后最多也只有5000种取值。我们把这些数离散化一下，用bitset<5000>来判重，就可以避免额外的时间复杂度了。

代码实现非常简单，详见文件夹内的代码文件。

## 原题链接

http://codeforces.com/contest/980/problem/D

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)

## 待字闺中微信群

内部测试期间，先加以下微信为好友，之后会把你拉入群中

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)
