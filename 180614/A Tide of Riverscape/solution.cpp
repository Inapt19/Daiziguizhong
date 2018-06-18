//
//  main.cpp
//  algothrim
//
//  Created by yeyimilk on 4/15/18.
//  Copyright © 2018 Lip Wang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

std::string aTideOfRiverscape(std::string str, int n, int k) {
    if (str.length() <= k) {
        return "No";
    }
    int last = n - k;
    bool hasAnswer = false;
    for (int i = 0; i < last; i++) {
        if (str[i] != str[i + k]) {
            hasAnswer = true;
            if (str[i] == '.') {
                str[i] = str[i + k] == '0' ? '1' : '0';
            }
            else if (str[i + k] == '.') {
                str[i + k] = str[i] == '0' ? '1' : '0';
            }
            break;
        }
        else {
            if (str[i] == '.') {
                str[i] = '0';
                str[i + k] = '1';
                hasAnswer = true;
                break;
            }
        }
    }
    if (hasAnswer) {
        for (int i = 0; i < n; i++) {
            str[i] = str[i] == '.' ? '0' : str[i];
        }
    }
    else {
        str = "No";
    }
    return str;
}

int main() {
    int n, k;
    std::string str;
    std::cin >> n >> k >> str;
    std::cout << aTideOfRiverscape(str, n, k) << std::endl;
    return 0;
}
