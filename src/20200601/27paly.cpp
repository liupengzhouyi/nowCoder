//
// Created by 刘鹏 on 2020/6/1.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void ps(string str1,string str2,string strout){
    strout=str1+str2;
    vector<char> vec_ji,vec_ou;
    for(int i=0;i<strout.size();i++){
        if(i%2==0)
            vec_ji.push_back(strout[i]);
        else
            vec_ou.push_back(strout[i]);
    }
    sort(vec_ji.begin(),vec_ji.end());
    sort(vec_ou.begin(),vec_ou.end());
    int k=0,l=0;
    for(int i=0;i<strout.size();i++){
        if(i%2==0){
            strout[i]=vec_ji[k];
            k++;
        }
        else{
            strout[i]=vec_ou[l];
            l++;
        }
    }

    /////////////////0123456789abcdefABCDEF
    char outdirt[]={"084C2A6E195D3B7F5D3B7F"};
    for(int i=0;i<strout.size();i++){
        if(isdigit(strout[i]))
            strout[i]=outdirt[strout[i]-'0'];
        else if('a'<=strout[i] && strout[i]<='f')
            strout[i]=outdirt[strout[i]-'a'+10];
        else if('A'<=strout[i] && strout[i]<='F')
            strout[i]=outdirt[strout[i]-'A'+16];
    }

    cout << strout <<endl;
}
int paly27()
{
    string str1,str2,strout;
    while(cin>>str1>>str2){
        ps(str1,str2,strout);
    }
    return 0;
}
