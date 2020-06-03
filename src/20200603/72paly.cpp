//
// Created by 刘鹏 on 2020/6/3.
//
//检测到数字，则在数字前添加“*”，随即检测后几位，如果检测到字母或其他，则添加“*”
#include<iostream>
#include<string>
using namespace std;
int paly72()
{
    string a;
    while (cin >> a)
    {
        for (int i = 0; i < a.size(); i++)
        {
            int stop = 0;
            if (isdigit(a[i]))
            {
                a.insert(i,"*");
                i++;
            }
            while (isdigit(a[i]))
            {
                stop = i + 1;
                i++;
            }
            if (stop)
                a.insert(stop, "*");
        }
        cout << a << endl;
    }
    return 0;
}
