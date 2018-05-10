#include <vector>
#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;

class DrawWater {
public:
    /*
     1 <= n <= 1000
     1 <= a[i] <= 1000
     易知 int 不会溢出
     */
    unsigned int drawWater(vector<unsigned int> &time){
        sort(time.begin(), time.end());
        size_t n = time.size();
        unsigned int result = 0;
        for (unsigned int it : time) {
            result += it * n--;
        }

        return result;
    }
    
    void runTest(){
        vector<unsigned int> time = {1};
        assert(1 == drawWater(time));
        
        time = {1,2};
        assert(4 == drawWater(time));
        
        time = {1, 2, 3};
        assert(10 == drawWater(time));
        
        time = {0};
        assert(0 == drawWater(time));
    }
};

int main() {
    int n;
    vector<unsigned int> ns;
    
    cin >> n;
    ns.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> ns[i];
    }
    cout << DrawWater().drawWater(ns) << endl;
    return 0;
}
