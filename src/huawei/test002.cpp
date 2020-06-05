//
// Created by 刘鹏 on 2020/6/5.
//

#include <iostream>
#include <string>


int main002() {
    std::string str;
    getline(std::cin,str);
    std::string newStr = "";
    int list[5] = {0};
    int index = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ',') {
            index = 0;
            /*for (int j = 0; j < 5; j++) {
                std::cout << list[j] << " ";
            }
            std::cout << std::endl;*/
        } else {
            if (str[i] == '1') {
                list[index] = list[index] + 1;
            }
            index = index + 1;
        }
    }
    /*for (int j = 0; j < 5; j++) {
        std::cout << list[j] << " ";
    }
    std::cout << std::endl;*/
    bool key = false;
    int min = list[0];
    for (int i = 0; i < 5; i++) {
        if (list[i] == 0) {
            std::cout << "0" << std::endl;
            key = true;
            break;
        }
        if (list[i] < min) {
            min = list[i];
        }
    }
    if (key == false) {
        std::cout << min << std::endl;
    }
    return 0;
}
