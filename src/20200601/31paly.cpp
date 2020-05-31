//
// Created by 刘鹏 on 2020/6/1.
//
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int paly31()
{
    string s;
    while(cin >> s)
    {
        sort(s.begin(), s.end());

        cout <<s << endl;
    }

    return 0;
}
