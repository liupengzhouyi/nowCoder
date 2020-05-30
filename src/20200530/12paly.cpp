//
// Created by 刘鹏 on 2020/5/30.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
int paly12()
{
    int number;
    std::cin >> number;
    std::string strNumber;
    strNumber = std::to_string(number);
    std::string s(strNumber.rbegin(),strNumber.rend());
    std::cout << s << std::endl;
    return 0;
}

