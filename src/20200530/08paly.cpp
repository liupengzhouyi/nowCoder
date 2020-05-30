//
// Created by 刘鹏 on 2020/5/30.
//
#include <iostream>
#include <string>

void paly08() {
    long number;
    std::cin >> number;
    if (number == 1) {
        std::cout << 1 << " ";
        return ;
    }
    if (number == 2) {
        std::cout << 2 << " ";
        return ;
    }
    if (number == 3) {
        std::cout << 3 << " ";
        return ;
    }
    for (long i = 2; i <= number;) {
        if (number % i == 0) {
            std::cout << i << " ";
            number = number / i;
            i = 2;
        } else {
            i = i + 1;
        }
    }


    /*long number;
    std::cin >> number;
    if (number == 2) {
        std::cout << 2 << " ";
        return 0;
    }
    if (number == 3) {
        std::cout << 3 << " ";
        return 0;
    }
    long myp[3000];
    int mypInde = 0;
    long nums[900000];
    int index = 0;
    for (long i = 2; i < number/2+1; i++) {
        for (long j = 2; j <= i; j++) {
            if (j == i) {
                // std::cout << i << ".." << std::endl;
                nums[index] = i;
                index = index + 1;
            }
            if (i % j == 0) {
                break;
            }
        }
    }
    *//*for (int i=0; i < index; i++) {
        std::cout << nums[i] << ", ";
    }
    std::cout << std::endl;*//*

    while (number != 1) {
        for (long i = 0; i < index; i++) {
            if (number % nums[i] == 0) {
                // std::cout << nums[i] << "-";
                number = number / nums[i];
                myp[mypInde] = nums[i];
                mypInde = mypInde + 1;
            }
        }
    }

    for (int i = 0; i < mypInde; i++) {
        for (int j = i + 1; j < mypInde; j++) {
            if (myp[i] > myp[j]) {
                long temp = myp[i];
                myp[i] = myp[j];
                myp[j] = temp;
            }
        }
    }
    for (int i = 0; i < mypInde; i++) {
        std::cout << myp[i] << " ";
    }*/
}

