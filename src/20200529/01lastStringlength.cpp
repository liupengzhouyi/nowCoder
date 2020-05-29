//
// Created by 刘鹏 on 2020/5/29.
//
#include<iostream>
#include<string>


int lastWordLength() {
    int tempLength = 0;
    std::string temp;
    getline(std::cin, temp);
    reverse(temp.begin(), temp.end());
    for(int i=0; i<temp.length(); i++) {
        if (temp[i] == ' ' || i == temp.length()) {
            tempLength = i;
            break;
        }
    }
    std::cout << tempLength << std::endl;
    return 0;
}
