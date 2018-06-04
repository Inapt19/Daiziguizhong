本题是一道坑题。

需要关注的点有：

* 饮料瓶的状态不会影响它开瓶的能力，且开瓶次数是没有限制的
* 相同品牌的瓶子能开启的瓶子是不一样的       
题目中的描述是“已知第i个瓶子的品牌为ai,且其能打开bi品牌的瓶子”，也就是说，一个编号为i的瓶子可以打开所以bi品牌的瓶子。而其它品牌同样为ai的瓶子不一定能有打开bi品牌瓶子的能力。（这个非常反直觉）

想明白了这两点，我们就可以知道本题是一道水题。我们只需要贪心的让每一个瓶子打开其所能打开的所有瓶子，就可以获得最后的答案了。

代码如下：

```python
n = int(raw_input())
st = set()
bottles = [0 for i in xrange(n)]
for i in xrange(n):
    (a, b) = map(int, raw_input().split())
    st.add((i, b))
    bottles[i] = a
     
res = set()
for i in xrange(n):
    for j in xrange(n):
        x, y = bottles[i], bottles[j]
        if i == j:
            continue
        if (i, y) in st:
            res.add(j)
print n - len(res)
```

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中算法讨论微信群

微信群算法讨论，娱乐比赛开黑等你加入。

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)
