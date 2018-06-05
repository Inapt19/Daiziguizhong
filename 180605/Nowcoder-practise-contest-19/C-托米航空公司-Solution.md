本题的难度不是很大。因为总的座位数只有80，而总的乘客数只有4。

所以只需要暴力DFS求解就可以了。

有一个简单的剪枝，即某一个乘客与前几个乘客的座位产生了冲突，就可以不继续往下尝试了。

代码见最下。

## 请我喝一杯可乐

![](https://raw.githubusercontent.com/Inapt19/Resource/master/bonus_QR.jpg)
![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_bonus_qr.jpg)

## 待字闺中算法讨论微信群

微信群算法讨论，娱乐比赛开黑等你加入。

![](https://raw.githubusercontent.com/Inapt19/Resource/master/wechat_QR.jpg)

## 附代码

```cpp
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
#define print(x) cout << x << endl
#define input(x) cin >> x
 
const int MOD = 420047;
 
bool check(int n, int m, int a, int b) {
    int y1 = a / n;
    int x1 = a % n;
 
    int y2 = b / n;
    int x2 = b % n;
 
    if (y1 == y2 && abs(x1 - x2) <= 1) {
        return false;
    }
 
    if (x1 == x2 && abs(y1 - y2) <= 1) {
        return false;
    }
 
    return true;
}
 
bool check(int n, int m, const vector<int>& points) {
    int cnt = points.size();
    for (int i = 0; i < cnt; i++) {
        for (int j = i + 1; j < cnt; j++) {
            if (!check(n, m, points[i], points[j])) {
                return false;
            }
        }
    }
    return true;
}
 
int dfs(int n, int m, int pre, int k, vector<int>& points) {
    if (points.size() == k) {
        return check(n, m, points);
    }
 
    int res = 0;
    for (int i = pre + 1; i < n * m; i++) {
        if (pre != -1 && !check(n, m, pre, i)) {
            continue;
        }
        points.push_back(i);
        res += dfs(n, m, i, k, points);
        points.pop_back();
    }
    return res % MOD;
}
 
int main() {
    int T;
    input(T);
    while (T--) {
        int n, m, k;
        input(n >> m >> k);
 
        int tot = n * m;
        vector<int> points;
        int cnt = dfs(n, m, -1, k, points);
        print(cnt % MOD);
    }
    return 0;
}
```
