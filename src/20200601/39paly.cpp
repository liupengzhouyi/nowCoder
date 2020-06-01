//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
#include<string>
using namespace std;
int paly39()
{
    string str;
    int num;
    while (cin >> str >> num)
    {
        int temp = num-1;
        while (temp >= 0 && str[temp] < 0)
            temp--;
        if ((num - temp) % 2 == 0)
            num--;
        cout << str.substr(0, num) << endl;
    }
    return 0;
}