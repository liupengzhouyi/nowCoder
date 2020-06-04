//
// Created by 刘鹏 on 2020/6/5.
//
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int paly83(){
    string s;
    while(cin>>s){
        string t(s);
        reverse(t.begin(),t.end());
        int len = t.size();
        vector<int> ans(len+1,0);
        vector<vector<int> > dp(len+1,ans);
        int maxLen=0;
        for(int i=1;i<=len;i++){
            for(int j=1;j<=len;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                if(dp[i][j]>maxLen)maxLen = dp[i][j];
            }
        }
        cout<<maxLen<<endl;
    }
    return 0;
}
