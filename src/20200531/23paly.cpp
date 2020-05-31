//
// Created by 刘鹏 on 2020/5/31.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int paly23()
{
    string s;
    while(cin>>s)
    {
        int a[26]={0};
        int n=s.size();
        for(int i=0;i<n;++i)
        {
            a[s[i]-'a']++;
        }
        int mi=a[s[0]-'a'];//出现最少的字符次数
        for(int i=1;i<n;++i)
        {
            if (a[s[i]-'a']<mi)
            {
                mi=a[s[i]-'a'];//出现最少的字符次数
            }
        }
        for(int i=0;i<n;++i)
        {
            if (a[s[i]-'a']>mi)
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

