#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

int main()
{
    std::string newStr;
    getline(std::cin, newStr);
    std::string temp;
    std::string out = "";
    for (int i = newStr.length(); i >= 0; i--) {
        if (newStr[i] != ' ') {
            temp = newStr[i] + temp;
        } else {
            out = out + temp + " ";
            temp = "";
        }
    }
    out = out + temp;
    std::cout << out << std::endl;
    return 0;
}

