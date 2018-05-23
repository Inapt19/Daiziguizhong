我们先手写几组样例，以两位数的“无零数”为例：

```
11
12
...
19
21
22
...
29
31
...
98
99
```

由于我们只能使用1~9，所以每一位只能有9个数。所以很自然的想到了9进制。而且想到可以映射数字将9进制的0~8映射到我们需要的1~9。

两位数的“无零数”，使用9进制来表示就是：{00, 01, 02 .. 87, 88}。而对于三位数，则要从000开始。

所以解法比较简单，首先我们要判断所要表示的数是几位。一位数是9个，两位数是81个，三位数是279个，以此类推。     
之后我们计算该数是第几个K位数，并用9进制表示出来。      
最后我们再将字符做映射，输出答案即可。

代码详见main.py。

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中微信群

内部测试期间，先加以下微信为好友，之后会把你拉入群中

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)

