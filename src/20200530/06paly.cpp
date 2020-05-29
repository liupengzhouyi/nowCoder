//
// Created by 刘鹏 on 2020/5/30.
//

#include <iostream>
#include <algorithm>
#include <vector>
int paly06()
{
    double number;
    double temp;
    std::cin >> number;
    temp = int(number) / 1;
    number = number - temp;
    if (number >= 0.5) {
        temp = temp + 1;
    }
    std::cout << temp << std::endl;
    return 0;

}

