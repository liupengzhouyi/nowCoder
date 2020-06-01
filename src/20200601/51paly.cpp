//
// Created by 刘鹏 on 2020/6/1.
//

#include <iostream>
#include <string>
using namespace std;
int paly51()
{
    string a,b,str="";
    int i,j,k,m,n,cnt;
    while(cin>>a>>b)
    {
        if(a.size()>b.size())
        {
            string temp;
            temp=b;
            b=a;
            a=temp;
        }
        for(i=0;i<a.size();i++)
        {
            for(j=0;j<b.size();j++)
            {
                cnt=0;
                for(m=i,n=j;m<a.size() && n<b.size() && a[m]==b[n];m++,n++)
                    cnt++;
                if(cnt>str.size()) str=a.substr(i,cnt);
            }
        }
        cout<<str<<endl;
        str.clear();
    }
    return 0;
}

