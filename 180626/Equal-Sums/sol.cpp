#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define PB push_back
#define fst first
#define sec second
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define ms(a,x) memset(a,x,sizeof(a))
typedef long long LL;
#define pi pair < int ,int >
#define MP make_pair
#define de(x) cout<<#x<<"="<<x<<endl;
#define dd(x) cout<<#x<<"="<<x<<" ";
#define rep(i, a, b) for(int i=(a); i<(b); i++)


using namespace std;
const double eps = 1E-8;
const int dx4[4]={1,0,0,-1};
const int dy4[4]={0,-1,1,0};
const int inf = 0x3f3f3f3f;
const int N=2E5+7;

template<typename tp> inline void read(tp &x) {
  x = 0; char c = getchar(); bool f = 0;
  for(; c < '0' || c > '9'; f |= (c == '-'), c = getchar());
  for(; c >= '0' && c <= '9'; x = (x << 3) + (x << 1) + c - '0', c = getchar());
  if(f) x = -x;
}

//-------变量------//

map<int, pair<int,int> >res;
vector<int>a;
int n,k,num;

//-------函数------//

int main() {
	//freopen("data.txt", "r", stdin);
	//freopen("ans.txt", "w", stdout);
	scanf("%d",&k);
	num = 0;
	for (int i = 1; i <= k; i++) {
		a.clear();
		scanf("%d",&n);
		int temp = 0;
		for (int j = 1; j <= n; j++) {
			int x;
			scanf("%d",&x);
			temp += x;
			a.push_back(x);
		}
		for (int kk = 0; kk < (int)a.size(); kk++) {
			int ff = temp - a[kk];
			if (i != 1) {
				map<int, pair<int,int> >::iterator it = res.lower_bound(ff);
				if (it != res.end()) {
					if (it->second.fst != i && it->first == ff) {
						printf("YES\n%d %d\n%d %d\n",i,kk+1,it->second.fst,it->second.sec);
						return 0;
					}
				}
			}
			res[ff] = make_pair(i, kk+1);
		}
	}
	printf("NO\n");
	return 0;
}
