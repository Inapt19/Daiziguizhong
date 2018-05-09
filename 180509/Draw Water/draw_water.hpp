//
//  draw_water.hpp
//  algorithm

#pragma once
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
        size_t n = time.size() - 1; // 如果个人等待时间也算的就不减 1
        unsigned int result = 0;
        for (unsigned int it : time) {
            result += it * n--;
        }

        return result;
    }
    
    void runTest(){
        vector<unsigned int> time = {1};
        assert(0 == drawWater(time));
        
        time = {2, 1};
        assert(1 == drawWater(time));
        
        time = {3, 1, 2, 3};
        assert(10 == drawWater(time));
        
        time = {0};
        assert(0 == drawWater(time));
    }
};
