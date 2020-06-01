//
// Created by 刘鹏 on 2020/6/1.
//

#include <iostream>
#include <string>
using namespace std;

inline void firstchar(string s){
    if(s.empty()) {cout<<-1<<endl;return;}
    int i=0;
    while(i<s.size()){
        int j=i+1,k=s.size();
        while(j<s.size())
            if(s[i]==s[j]) s.erase(s.begin()+j);
            else j++;
        if(k>s.size())s.erase(s.begin()+i);
        else  {cout<<s[i]<<endl;return;}
    }
    cout<<-1<<endl;
}

int paly45(){
    string s;
    while(cin>>s)
        firstchar(s);
    return 0;
}