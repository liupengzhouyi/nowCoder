//
// Created by 刘鹏 on 2020/6/1.
//
#include <iostream>
#include <string>
//#include <iomanip>
//#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>
#include <vector>    //vector 动态数组
using namespace std;

int paly34()    //兔子
{

    int N;   //month
    while (cin >> N)
    {
        vector<int> rab;
        rab.push_back(1);
        rab.push_back(1);

        if (N <= 2)
        {
            cout << rab[N - 1]<<endl; continue;
        }

        for (int i = 2; i < N ; i++)
            rab.push_back( rab[i-1]+rab[i-2]);
        cout << rab[N - 1] << endl;

    }

    return 0;
}

