//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
using namespace std;
int paly48()
{
    int a;
    while(cin>>a)
    {
        int count=0;
        while(a)
        {
            a = a&(a-1);
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
