//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
#include<cstring>
using namespace std;
int paly49()
{
    int len;
    string s;
    while(cin>>s>>len)
    {
        //cin>>len;
        int index=0;
        int max =0;
        int count=0;
        for(int i=0;i<=s.size()-len;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(s[i+j]=='G'||s[i+j]=='C')
                    count++;
            }
            if(max<count)
            {
                index=i;
                max=count;
            }
            count=0;
        }
        cout<<s.substr(index,len)<<endl;
    }
    return 0;
}
