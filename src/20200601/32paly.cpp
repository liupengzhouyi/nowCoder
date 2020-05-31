//
// Created by 刘鹏 on 2020/6/1.
//
#include <iostream>
using namespace std;


int paly32()
{
    int n;
    while (cin>>n)
    {
        int beg=1;
        for(int i=1;i<=n;i++)
        {
            cout<<beg;
            int tmp = beg;
            for(int j=i+1;j<=n;j++)
            {
                tmp+=j;
                cout<<" "<<tmp;
            }
            cout<<endl;
            beg+=i;
        }
    }
    return 0;
}
