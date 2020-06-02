//
// Created by 刘鹏 on 2020/6/2.
//

#include<iostream>
#include<string>//内含swap(s1,s2)函数，to_string()函数
#include<vector>
using namespace std;
int paly70()
{
    string s;
    while(cin>>s)
    {
        int num=0;
        int max=0;
        int count;
        string temp;
        string outs;
        int m=0;
        for(int i=0;i<s.size();++i){
            for(m=0;s[i+m]<='9' && s[i+m]>='0' && i+m<s.size();++m)
            {
                temp+=s[i+m];
            }
            if(temp.size()>max)
            {
                max=temp.size();
                outs=temp;
            }
            else if(temp.size()==max)
                outs+=temp;
            temp.clear();
            i=m+i;
        }

        cout<<outs<<','<<max<<endl;
    }
}

