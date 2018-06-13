#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "";
    cin >> str;
    int result = 0;
    if (str.length() < 3) {
        std::cout << "NO" << std::endl;
        return 0;
    }
    for (int i = 0; i < 3; i++) {
        result += str[i] == '.' ? 0 : str[i] == 'A' ? 1 : str[i] == 'B' ? 2 : 4;
    }
    if (result == 7) {
        std::cout << "Yes" << std::endl;
        return 0;
    }
    
    for (int i = 3; i < str.length(); i++) {
        char tmp = str[i - 3];
        int pre = tmp == '.' ? 0 : tmp == 'A' ? 1 : tmp == 'B' ? 2 : 4;
        tmp = str[i];
        int current = tmp == '.' ? 0 : tmp == 'A' ? 1 : tmp == 'B' ? 2 : 4;
        result = result - pre + current;
        if (result == 7) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}