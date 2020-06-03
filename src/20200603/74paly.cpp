//
// Created by 刘鹏 on 2020/6/3.
//
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int paly74(){
    int m,n;
    while(cin>>m){
        map<string,int> M;
        vector<string> vec(m);
        string s;
        for(int i=0;i<m&&cin>>s;i++){
            M[s]=0;
            vec[i]=s;
        }
        cin>>n;
        for(int i=0;i<n&&cin>>s;i++)
            if(M.find(s)!=M.end())
                M[s]++;
        int count=0;
        for(auto it=vec.begin();it!=vec.end();it++){
            cout<<*it<<" : "<<M[*it]<<endl;
            count+=M[*it];
        }
        cout<<"Invalid : "<<n-count<<endl;
    }
    return 0;
}
