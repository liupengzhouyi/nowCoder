//
// Created by 刘鹏 on 2020/6/4.
//

//思路：利用>>运算符，循环判断是否有连续的1。
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int paly82()
{
    int n;
    while(cin>>n)
    {
        int count=0,maxCount=0;
        while(n)
        {
            if(n&1)//表示有1存在，下一次循环如果还有1，也会继续。
            {
                ++count;
                maxCount=max(count,maxCount);
            }
            else
                count=0;
            n=n>>1;
        }
        cout<<maxCount<<endl;
    }
    return 0;
}