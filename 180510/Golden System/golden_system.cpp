//
//  golden_system.hpp
//  algothrim
//
//  Created by yeyimilk on 5/11/18.
//  Email: zqwang1993@gmail.com
//

#ifndef GOLDEN_SYSTEM_CPP
#define GOLDEN_SYSTEM_CPP
#include <iostream>
#include <string>
#include <vector>
#include <assert.h>

using namespace  std;

class GoldenSystem{
public:
    char goldenSystem(std::string a, std::string b) {
        
        size_t length = a.length() > b.length() ? a.length() + 1 : b.length() + 1;
        vector<char> strA(length, '0');
        vector<char> strB(length, '0');
        
        fillVec(strA, a);
        fillVec(strB, b);
        
        handleVec(strA);
        handleVec(strB);
        
        size_t i = 0;
        while (i < length && strA[i] == strB[i]) {
            i++;
        }
        
        return i == length ? '=' : strA[i] > strB[i] ? '>' : '<';
    }
    
    void runTest(){
        std::string a = "1000";
        std::string b = "111";
        assert(goldenSystem(a, b) == '<');

        a = "00100";
        b = "11";
        assert(goldenSystem(a, b) == '=');

        a = "110";
        b = "101";
        assert(goldenSystem(a, b) == '>');
        
        a = "1100";
        b = "11";
        assert(goldenSystem(a, b) == '>');
    }
private:
    void fillVec(vector<char> & vec, const std::string & str) {
        size_t size = vec.size() - 1;
        size_t length = str.length();
        for (size_t i = 0; i < length; i++) {
            vec[size - i] = str[length - i - 1];
        }
    }
    
    void handleVec(vector<char>& vec) {
        size_t length = vec.size() - 1;
        for (size_t i = 0; i < length; i++) {
            int j = i;
            /*
             01011 --> 01100 --> 10000
             */
            while (j > 0 && vec[j] == '1' && vec[j + 1] == '1') {
                vec[j] = '0';
                vec[j + 1] = '0';
                vec[j - 1] = '1';
                j -= 2;
            }
        }
    }
};

int main() {
    GoldenSystem gs;
    // gs.runTest();
    string a, b;
    std::cin >> a;
    std::cin >> b;
    std::cout << gs.goldenSystem(a, b) << std::endl;
    return 0;
}

#endif


