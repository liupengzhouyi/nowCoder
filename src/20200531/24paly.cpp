//
// Created by 刘鹏 on 2020/5/31.
//
#include<vector>
#include<iostream>
#include<string>

using namespace std;

int paly24()
{
    string s;
    vector<char> tempChar;
    while(getline(cin,s))
    {
        tempChar.clear();
        int len = s.size();
        for(int j=0; j<26; j++)
        {
            for(int i=0; i<len; i++)
            {
                if(s[i]-'a'==j||s[i]-'A'==j)
                {
                    tempChar.push_back(s[i]);
                }
            }
        }
        for(int i=0,k=0;(i<len)&&k<tempChar.size();i++)
        {
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                s[i]=tempChar[k++];
        }
        cout<<s<<endl;
    }
    return 0;
}
