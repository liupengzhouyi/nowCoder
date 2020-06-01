//
// Created by 刘鹏 on 2020/6/1.
//
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int paly61()
{
    int a;
    while(cin>>a)
    {
        set<int> st;
        int b,tmp;
        while(a--)
        {
            cin>>tmp;
            if(find(st.begin(),st.end(),tmp)==st.end())
            {
                st.insert(tmp);
            }
        }
        cin>>b;
        while(b--)
        {
            cin>>tmp;
            if(find(st.begin(),st.end(),tmp)==st.end())
            {
                st.insert(tmp);
            }
        }
        for(auto it:st)
        {
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}
