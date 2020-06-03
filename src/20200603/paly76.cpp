//
// Created by 刘鹏 on 2020/6/3.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

int paly76(){

    int numberI, numberII;
    std::cin >> numberI >> numberII;
    int a = numberII;
    int b = numberI;
    while (numberI % numberII != 0) {
        int temp = numberI % numberII;
        numberI = numberII;
        numberII = temp;
    }
    std::cout << (a * b)/numberII << std::endl;
    return 0;
}