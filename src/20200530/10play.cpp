//
// Created by 刘鹏 on 2020/5/30.
//
#include <iostream>
#include <vector>
#include <map>
#include <string>
int paly10()
{
    int number;
    std::cin >> number;
    std::string strNumber;
    strNumber = std::to_string(number);
    std::string newStr;
    newStr = newStr + strNumber[strNumber.length() - 1];
    for (int i = strNumber.length()-1; i >= 0; i--)
    {
        bool key = true;
        for (int j = 0; j < newStr.length(); j++)
        {
            if (strNumber[i] == newStr[j])
            {
                key = false;
                continue;
            }

        }
        if (key) {
            newStr = newStr + strNumber[i];
        }
    }
    std::cout << std::stoi(newStr) << std::endl;
    return 0;
}



