//
// Created by 刘鹏 on 2020/6/3.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

double sss(int number) {
    return number * number * number;
}

double sss(double number) {
    return number * number * number;
}

// 求解立方根
int paly77(){

    double numberI;
    std::cin >> numberI;
    if (numberI < 0) {
        numberI = 0 - numberI;
    }
    int a = 0, b = (int)numberI;
    while (sss(a) < numberI) {
        if (sss(a + 1) < numberI) {
            if (sss(a + 10) < numberI) {
                if (sss(a + 100) < numberI) {
                    a = a + 100;
                } else {
                    a = a + 10;
                }
            } else {
                a = a + 1;
            }
        } else {
            a = a + 1;
        }
        //std::cout << '-' << a << std::endl;
    }
    while (sss(b) > numberI) {
        if (sss(b - 1) > numberI) {
            if (sss(b - 10) > numberI) {
                if (sss(b - 100) > numberI) {
                    b = b - 100;
                } else {
                    b = b - 10;
                }
            } else {
                b = b - 1;
            }
        } else {
            b = b - 1;
        }
        //std::cout << "--" << b << std::endl;
    }
    //std::cout << a << " " << b << std::endl;
    for (double i = b; i <= a; i = i + 0.1) {
        if (sss(i) <= numberI && sss(i + 0.1) >= numberI) {
            if (i == (int)i) {
                std::cout << i << ".0" << std::endl;
            } else{
                if (sss(i + 0.05) >= numberI) {
                    std::cout << i << std::endl;
                } else {
                    std::cout << i+0.1 << std::endl;
                }
            }

            break;
        }
    }
    return 0;
}