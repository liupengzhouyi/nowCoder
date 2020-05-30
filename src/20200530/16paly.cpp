//
// Created by 刘鹏 on 5/30/2020.
//
#include <iostream>
#include <vector>
#include <map>
#include <string>

// 求int型正整数在内存中存储时1的个数
int paly16()
{
    int count = 1;
    int time;
    std::cin >> time;
    std::string sum = "";
    while (time != 1) {
        if (time % 2 == 1) {
            sum = '1' + sum;
            count++;
            time = (time - 1) / 2;
        } else {
            sum = '0' + sum;
            time = time / 2;
        }
    }
    sum = '1' + sum;
    std::cout << count << std::endl;
    return 0;
}




