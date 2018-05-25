本题中的“模式”其实就是单个字母。例如在“abcabc”中，虽然我们可以说模式“abc”出现了两次，但是我们也可以说模式“a”（或“b”和“c”）出现了两次。

所以本题就可以转化为：如何操作可以让字符串中重复字母最多。

如果不考虑细节，我们可以直接找到原字符串str中出现最多的字符c，然后将剩下的字符全部转成该字符。

但是问题就在细节上，如果n + Count(c) > length(str)，那么我们就面临一个问题，就是多出来的修改次数应该如何处理。

例如"ab"字符串，n=2。如果我们直接将"ab"转化成"aa"，那么多出来的一次转换就只能将"aa"再转成"ab"。但是如果我们使用这种转换策略"ab"->"ac"->"aa"。就可以解决富余次数的问题。

最后再特判一下"aaa", n=1这类情况，就可以解决这个问题了。

本题虽然看起来比较简单，但是暗坑很多，做的时候一定小心。

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中微信群

内部测试期间，先加以下微信为好友，之后会把你拉入群中

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)
