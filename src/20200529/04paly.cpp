//
// Created by 刘鹏 on 2020/5/30.
//
#include<iostream>
#include<string>

void paly04() {
    std::string string1, string2;

    std::cin >> string1;
    if (string1.length() < 8)
    {
        std::cout << string1;
        for (int i=0;i<8-string1.length();i++)
        {
            std::cout << '0';
        }
        std::cout << std::endl;
    }
    if (string1.length() == 8) {
        std::cout << string1 << std::endl;
    }
    if (string1.length() > 8) {
        while (string1.length() >=8) {
            std::string temp;
            temp = string1.substr(0,8);
            string1 = string1.substr(8, string1.length());
            std::cout << temp << std::endl;
        }
        if (string1.length() < 8 && string1.length() != 0)
        {
            std::cout << string1;
            for (int i=0;i<8-string1.length();i++)
            {
                std::cout << '0';
            }
            std::cout << std::endl;
        }
        if (string1.length() == 8) {
            std::cout << string1 << std::endl;
        }
    }

    std::cin >> string2;
    string1 = string2;
    if (string1.length() < 8)
    {
        std::cout << string1;
        for (int i=0;i<8-string1.length();i++)
        {
            std::cout << '0';
        }
        std::cout << std::endl;
    }
    if (string1.length() == 8) {
        std::cout << string1 << std::endl;
    }
    if (string1.length() > 8) {
        while (string1.length() >=8) {
            std::string temp;
            temp = string1.substr(0,8);
            string1 = string1.substr(8, string1.length());
            std::cout << temp << std::endl;
        }
        if (string1.length() < 8 && string1.length() != 0)
        {
            std::cout << string1;
            for (int i=0;i<8-string1.length();i++)
            {
                std::cout << '0';
            }
            std::cout << std::endl;
        }
        if (string1.length() == 8) {
            std::cout << string1 << std::endl;
        }
    }

}
