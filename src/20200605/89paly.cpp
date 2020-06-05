
//
// Created by 刘鹏 on 2020/6/5.
//


#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int paly89()
{
    int n;//砝码数
    int m[10]={0};//每个砝码的质量
    int x[10]={0};//每个砝码的数量
    while(cin>>n){
        for(int i=0;i<n;i++)
            cin>>m[i];
        for(int i=0;i<n;i++)
            cin>>x[i];
        vector<int>weights; //存所有已经称出的砝码的质量。
        /*先将第一个砝码称出的质量入队。*/
        weights.push_back(0);//初始化weights数组
        for(int i=1;i<=x[0];i++)
            weights.push_back(i*m[0]);//将第一个砝码能称出的质量入队
        for(int i=1;i<n;i++){//前多少个砝码
            //weights.push_back(m[i]);
            int len=weights.size();//记录已经称出砝码质量便于下面for循环
            for(int j=1;j<=x[i];j++){//遍历该质量的砝码数
                for(int k=0;k<len;k++){
                    int w=weights[k]+j*m[i];//将该质量的砝码数依次与前面所有的砝码数相加
                    //去重操作
                    if(find(weights.begin(),weights.end(),w)==weights.end())//如果之前没有这个质量的砝码就将其入队
                        weights.push_back(weights[k]+j*m[i]);
                }
            }
        }
        cout<<weights.size()<<endl;
    }
}
