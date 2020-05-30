//
// Created by 刘鹏 on 2020/5/30.
//
#include <iostream>
#include <vector>
#include <map>
#include <string>
int paly11()
{
    std::string str;
    getline(std::cin,str);
    int sum = 0;
    int list[130] = {0};
    for (int i = 0; i < str.length(); i++) {
        if ((int) (str[i]) <= 127 && (int) (str[i]) >= 0) {
            list[(int) (str[i])] = 1;
        }
    }
    for (int i=0;i<130;i++) {
        if (list[i] == 1)
            sum = sum + 1;
    }
    std::cout << sum << std::endl;
    return 0;
}


