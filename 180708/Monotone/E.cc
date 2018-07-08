#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <deque>

using namespace std;

#define print(x) cout << x << endl
#define input(x) cin >> x

int n, m, k;
vector<int> ns;

int main() {
    while (input(n >> m >> k)) {
        ns = vector<int>(n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &ns[i]);
        }
        
        int ans = 0;
        deque<int> asc, des;
        int pos = -1;
        
        for (int i = 0; i < n; i++) {
            while (!asc.empty() && ns[asc.back()] >= ns[i]) {
                asc.pop_back();
            }
            asc.push_back(i);
            
            while (!des.empty() && ns[des.back()] <= ns[i]) {
                des.pop_back();
            }
            des.push_back(i);
            
            while (!des.empty() && !asc.empty() && ns[des.front()] - ns[asc.front()] > k) {
                if (asc.front() < des.front()) {
                    pos = asc.front();
                    asc.pop_front();
                } else {
                    pos = des.front();
                    des.pop_front();
                }
            }
            
            if (!des.empty() && !asc.empty() 
                    && ns[des.front()] - ns[asc.front()] <= k
                    && ns[des.front()] - ns[asc.front()] >= m) {
                ans = max(ans, i - pos);
            }
        }
        print(ans);
    }
    return 0;
}
