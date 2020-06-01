//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
using namespace std;

bool prime_num(int n)
{
    bool flag=true;
    for(int i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int paly46()
{
    int n;
    while(cin>>n)
    {
        for(int i=n/2;i>=2;i--)
            if(prime_num(i) && prime_num(n-i))
            {
                cout<<i<<endl;
                cout<<n-i<<endl;
                break;
            }
    }
    return 0;
}