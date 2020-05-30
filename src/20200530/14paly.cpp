//
// Created by 刘鹏 on 2020/5/30.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

int paly15()
{
    std::string newStr;
    getline(std::cin, newStr);
    std::stringstream ss(newStr);
    std::string res="", tmp;
    while (ss>>tmp) {
        if (res == "")
            res = tmp;
        else
            res = tmp + " " + res;
    }
    std::cout << res;
    /*std::string temp;
    std::string out = "";
    for (int i = newStr.length(); i >= 0; i--) {
        if (newStr[i] != ' ') {
            temp = newStr[i] + temp;
        } else {
            out = out + temp + " ";
            temp = "";
        }
    }
    out = out + temp;
    std::cout << out.length() << std::endl;*/
    return 0;
}

