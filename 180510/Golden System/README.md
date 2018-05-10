每日一题 180510

黄金系统 

q = (sqrt(5) + 1) / 2，在黄金系统下面a[0]a[1]...a[n]等于 sum([a[i] * q^(n - i)...]) ，其中 a[i] 是0或者1。

现在给出两个黄金系统下面的数字，请比较他们的大小。

Input

单组测试数据。
第一行有一个字符串A。
第二行有一个字符串B。
按照a0到an的顺序输入。
他们都是非空串，可能有前导0，并且只有0和1组成，长度不超过100000。

Output

如果A>B，输出>；
如果A=B，输出=；
如果A<B，输出<；

Input示例

00100
11

Output示例

=

原题链接：
* http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1491
* http://codeforces.com/contest/458/problem/A
