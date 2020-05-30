//
// Created by 刘鹏 on 5/30/2020.
//
#include <iostream>
#include <vector>
#include <map>
#include <string>

int whoSom(std::string str1, std::string str2) {
    int number1[200], number2[200];
    int length1 = str1.length();
    int length2 = str2.length();
    for (int i = 0; i < length1; i++) {
        number1[i] = (int) str1[i];
    }
    for (int i = 0; i < length2; i++) {
        number2[i] = (int) str2[i];
    }
    if (length1 < length2) {
        for (int i = 0; i < length1; i++) {
            if (number1[i] < number2[i]) {
                return 1;
            } else if (number1[i] > number2[i]) {
                return 2;
            } else {
                continue;
            }
        }
        return 1;
    } else if (length1 > length2) {
        for (int i = 0; i < length2; i++) {
            if (number1[i] < number2[i]) {
                return 1;
            } else if (number1[i] > number2[i]) {
                return 2;
            } else {
                continue;
            }
        }
        return 2;
    } else {
        for (int i = 0; i < length1; i++) {
            if (number1[i] < number2[i]) {
                return 1;
            } else if (number1[i] > number2[i]) {
                return 2;
            } else {
                continue;
            }
        }
        return 1;
    }
}


int paly15()
{
    int time;
    std::cin >> time;
    std::string strs[1000];
    for (int i = 0; i < time; i++) {
        std::cin >> strs[i];
    }
    for (int i = 0; i < time; i++) {
        for (int j = i + 1; j < time; j++) {
            if (whoSom(strs[i], strs[j]) == 2) {
                std::string temp = strs[i];
                strs[i] = strs[j];
                strs[j] = temp;
            }
        }
    }
    for (int i = 0; i < time; i++) {
        std::cout << strs[i] << std::endl;
    }
    return 0;
}




