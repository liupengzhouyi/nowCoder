//
// Created by 刘鹏 on 2020/6/2.
//

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int paly64()
{
    string str;
    while(getline(cin,str))
    {
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}