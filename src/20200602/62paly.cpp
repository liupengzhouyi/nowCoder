//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
#include<string>
using namespace std;

int paly62()
{
    string str1,str2;
    while(cin>>str1>>str2)
    {
        int i;
        for(i=0;i<str1.size();i++)
        {
            if(str2.find(str1[i])==-1)
            {
                cout<<"false"<<endl;
                break;
            }
        }

        if(i==str1.size())    //++i和i++在循环里没有区别，最后i都等于str1.size()
            cout<<"true"<<endl;
    }
    return 0;
}
