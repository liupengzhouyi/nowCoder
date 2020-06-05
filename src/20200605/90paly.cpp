//
// Created by 刘鹏 on 2020/6/5.
//
#include<iostream>
#include<string>
using namespace std;
int paly90()
{
    string line;
    while(getline(cin,line))
    {
        int alpha = 0, space = 0, digit = 0,other = 0;
        for(auto i:line)
            if(isalpha(i))
                alpha++;
            else if (isdigit(i))
                digit++;
            else if(i==' ')
                space++;
            else
                other++;
        cout<<alpha<<endl<<space<<endl<<digit<<endl<<other<<endl;
    }
    return 0;
}

