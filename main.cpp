#include <iostream>
#include <algorithm>

int main() {
    int sum = 0;
    std::string str;
    std::string c;
    std::cin >> str;
    std::cin >> c;
    if (c[0] >= 97 && c[0] <=122) {
        c[0] = c[0] - 32;
    }
    for (int i=0;i<str.length();i++) {
        if (str[i] >= 97 && str[i] <=122) {
            str[i] = char(str[i] - 32);
        }
        if (str[i] == c[0]) {
            sum ++;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
