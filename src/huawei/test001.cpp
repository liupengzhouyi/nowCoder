#include <iostream>
#include <string>




int main001() {
    std::string str;
    std::string strList[10000];
    int numberI, numberII;
    getline(std::cin,str);
    std::string newStr = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '\t') {
            newStr = newStr + ' ';
        } else {
            newStr = newStr + str[i];
        }
    }
    str = newStr;
    newStr = "";
    bool key = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            key = true;
        }
        if (key == true) {
            newStr = newStr + str[i];
        }
    }
    str = newStr;
    newStr = "";
    key = false;
    for (int i = str.length()-1; i >= 0; i--) {
        if (str[i] != ' ') {
            key = true;
        }
        if (key == true) {
            newStr = str[i] + newStr;
        }
    }
    str = newStr;
    newStr = "";
    // std::cout << str << std::endl;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            newStr = newStr + str[i];
        }
        if (str[i] == ' ' && str[i+1] == ' ') {
            continue;
        }
        if (str[i] == ' ' && str[i+1] != ' ') {
            newStr = newStr + str[i];
        }
    }
    str = newStr;
    // std::cout << str << std::endl;
    std::cin >>numberI;
    std::cin >> numberII;
    if (numberI >= numberII) {
        std::cout << "EMPTY" << std::endl;
    } else {
        int index = 0;
        std::string temp = "";
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' '){
                strList[index] = temp;
                temp = "";
                index = index + 1;
            } else {
                temp = temp + str[i];
            }
        }
        strList[index] = temp;
        if (index == 0) {
            std::cout << "EMPTY" << std::endl;
        } else {
            if (numberI < 0 || numberII < 0) {
                std::cout << "EMPTY" << std::endl;
            } else {
                if (numberII > index || numberI >= index) {
                    std::cout << "EMPTY" << std::endl;
                } else {
                    if (numberI == numberII) {
                        std::cout << "EMPTY" << std::endl;
                    } else {
                        std::string out = "";
                        for (int i = 0; i < numberI; i++) {
                            out = out + strList[i] + " ";
                            // std::cout << strList[i] << " ";
                        }
                        for (int i = numberII; i >= numberI; i--) {
                            out = out + strList[i] + " ";
                            // std::cout << strList[i] << " ";
                        }
                        for (int i = numberII + 1; i <= index; i++) {
                            out = out + strList[i] + " ";
                            // std::cout << strList[i] << " ";
                        }
                        // std::cout << std::endl;
                        for (int i = 0; i < out.length() - 1; i++) {
                            std::cout <<out[i];
                        }
                        std::cout << std::endl;
                    }
                }
            }
        }
    }

    return 0;
}