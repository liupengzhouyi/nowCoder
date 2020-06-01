//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
#include<algorithm>
using namespace std;
bool per(int x)
{
    int sum=0;
    int q=sqrt(x);
    for(int i=2;i<=q;++i)
    {
        if(x%i==0)
        {
            if(x/i==i) sum+=i;
            else sum+=i+x/i;
        }
    }
    sum+=1;
    if(sum==x) return true;
    else return false;
}
int paly42()
{
    int n;
    while(cin>>n)
    {
        int count=0;
        if(n>0 && n<=500000)
        {
            for(int i=6;i<=n;++i)
                if(per(i)) count++;
            cout<<count<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}