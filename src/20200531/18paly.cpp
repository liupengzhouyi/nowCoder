//
// Created by 刘鹏 on 2020/5/31.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

int paly18(){
    std::string password;
    while (std::cin >> password) {
        if (password.length() < 8) {
            std::cout << "NG" << std::endl;
        } else {
            int keys[4] = {0};
            for (int i = 0; i < password.length(); i++) {
                if (password[i] >= 'a' && password[i] <= 'z') {
                    keys[0] = 1;
                } else if (password[i] >= 'A' && password[i] <= 'Z') {
                    keys[1] = 1;
                } else if (password[i] >= '0' && password[i] <= '9') {
                    keys[2] = 1;
                } else {
                    keys[3] = 1;
                }
            }
            int key = 0;
            for (int i = 0; i < 4; i++) {
                key = key + keys[i];
            }
            if (key >= 3) {
                int m = 0;
                for (int i = 2; i < password.length() - 3; i++) {
                    for (int j = i + 3; j < password.length(); j++) {
                        if (password[i - 2] == password[j - 2]) {
                            if (password[i-1] == password[j - 1]) {
                                if (password[i] == password[j]) {
                                    m = 1;
                                    break;
                                }
                            }
                        }
                    }
                }
                if (m == 1) {
                    std::cout << "NG" << std::endl;
                } else {
                    std::cout << "OK" << std::endl;
                }
            } else {
                std::cout << "NG" << std::endl;
            }
        }
    }

    return 0;
}