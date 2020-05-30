//
// Created by 刘鹏 on 2020/5/30.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
int paly13()
{
    std::string strNumber;
    std::cin >> strNumber;
    std::string s(strNumber.rbegin(),strNumber.rend());
    std::cout << s << std::endl;
    return 0;
}

