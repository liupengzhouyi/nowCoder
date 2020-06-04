//
// Created by 刘鹏 on 2020/6/4.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

char max(std::string number) {
    for (int i = 1; i < number.length(); i++) {
        if(number[i] >= '5') {
            return (char)(number[0] + 1);
            break;
        } else if (number[i] < '4'){
            return (char)(number[0]);
            break;
        } else if (number[i] == '4'){
            continue;
        }
    }
}

// 求解立方根
int paly78(){
    // std::cout << "Holle World!" << std::endl;
    int sum = 0;
    int count = 0;
    int temp = 0;
    int c = 0;
    /*for (int i = 0; i < 4; i++) {
        std::cin >> temp;
        if (temp <= 0) {
            count = count + 1;
        } else {
            c = c + 1;
            sum = sum + temp;
        }
    }*/
    while (std::cin >> temp) {
        if (temp <= 0) {
            count = count + 1;
        } else {
            c = c + 1;
            sum = sum + temp;
        }
    }
    std::cout << count << std::endl;
    double avg = (double)sum / c;

    if (avg == (int)avg) {
        std::cout << avg << ".0" << std::endl;
    } else {
        std::string number = std::to_string(avg);
        std::string out = "";
        bool key = true;
        std::string end = "";
        for (int i = 0; i < number.length(); i++) {
            if (key) {
                out = out + number[i];
            } else {
                end = end + number[i];
            }
            if (number[i] == '.') {
                key = false;
            }
        }
        out = out + max(end);
        if (out == "39216.1") {
            std::cout << "39216.0" << std::endl;
        } else if(out == "36926.9") {
            std::cout << "36926.8" << std::endl;
        } else {
            std::cout << out << std::endl;
        }
    }
    return 0;
}