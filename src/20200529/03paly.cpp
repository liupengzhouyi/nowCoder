//
// Created by 刘鹏 on 2020/5/29.
//
#include<iostream>
#include<string>

void paly03() {
    int time;
    int numbers[1002];
    while (std::cin >> time)
    {
        for (int i = 0; i < 1002; i++) {
            numbers[i] = -1;
        }
        while (time--) {
            int index;
            std::cin >> index;
            numbers[index] = 1;
        }
        for (int i = 0; i < 1002; i++) {
            if (numbers[i] != -1) {
                std::cout << i << std::endl;
            }
        }
    }
}
