//
// Created by 刘鹏 on 2020/5/30.
//

#include<iostream>
#include<string>
#include<map>
void paly() {
    int time;
    std::cin >> time;
    std::map<int, int> myMap;
    while (time--)
    {
        int numberI, numberII;
        std::cin >> numberI >> numberII;
        std::map<int, int>::iterator iter;
        iter = myMap.find(numberI);
        if(iter == myMap.end())
        {
            myMap.insert(std::pair<int, int>(numberI, numberII));
        }
        else
        {
            numberII = numberII + iter->second;
            myMap.erase(iter);
            myMap.insert(std::pair<int, int>(numberI, numberII));
        }
    }
    std::map<int, int>::iterator iter;
    for (iter = myMap.begin(); iter != myMap.end(); iter++)
        std::cout << iter->first << " " << iter->second << std::endl;
}