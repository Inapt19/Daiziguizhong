//
//  algothrim
//
//  Created by yeyimilk on 5/12/18.
//  Email: zqwang1993@gmail.com
//
#ifndef SINGLE_USE_STONES_CPP
#define SINGLE_USE_STONES_CPP

#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class SingleUseStones{
public:
    int maxFrogsCanPass(const vector<unsigned int> & stones, unsigned int riverWidth, unsigned int stepLength){
        if (riverWidth <= stepLength || riverWidth == 0 || stepLength == 0) {
            return -1; // regard as invalid parameters;
        }
        int min = 0;
        int currentSum = 0;
        for (int i = 0; i < stepLength; i++) {
            currentSum += stones[i];
        }
        min = currentSum;
        riverWidth -= 1;
        for (int i = stepLength; i < riverWidth; i++) {
            currentSum = currentSum + stones[i] - stones[i-stepLength];
            min = min < currentSum ? min : currentSum;
        }
        return min;
    }
    
    void runTest(){
        vector<unsigned int> stones = {0, 0, 1, 0, 2, 0, 0, 1, 0};
        assert(3 == maxFrogsCanPass(stones, 10, 5));

        stones = {1, 1, 1, 1, 2, 1, 1, 1, 1};
        assert(3 == maxFrogsCanPass(stones, 10, 3));
        
        stones = {5};
        assert(5 == maxFrogsCanPass(stones, 2, 1));
        
        stones = {0, 0, 6, 2, 7, 1, 6, 4, 0};
        assert(8 == maxFrogsCanPass(stones, 10, 4));
        
        stones = {10, 10, 10, 10, 10, 10, 10, 10, 10};
        assert(40 == maxFrogsCanPass(stones, 10, 4));
        
        stones = {16, 0, 10, 11, 12, 13, 0, 5, 4, 14, 6, 15, 4, 9, 1, 20, 19, 14, 1, 7, 14, 11, 10, 20, 6, 9, 12, 8, 3, 19, 20, 4, 17, 17, 8, 11, 14, 18, 5, 20, 17, 0, 3, 18, 14, 12, 11, 12, 5, 5, 11, 7, 9, 17, 4, 8, 4, 10, 0, 0, 12, 9, 15, 3, 15, 14, 19, 12, 6, 8, 17, 19, 4, 18, 19, 3, 8, 3, 9, 1, 6, 15, 4, 16, 1, 18, 13, 16, 3, 5, 20, 11, 10, 9, 9, 17, 20, 15, 12};
        assert(312 == maxFrogsCanPass(stones, 100, 34));
        
        stones = {0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0};
        assert(5 == maxFrogsCanPass(stones, 100, 15));
    }
};

int main() {
    
    SingleUseStones st;
    unsigned int riverWidth, stepLength;
    cin >> riverWidth;
    cin >> stepLength;
    
    vector<unsigned int> stones;
    for (int i = 0; i < riverWidth - 1; i++) {
        int tmp;
        cin >> tmp;
        stones.push_back(tmp);
    }
    
    std::cout << st.maxFrogsCanPass(stones, riverWidth, stepLength) << std::endl;
    
    return 0;
}

#endif

