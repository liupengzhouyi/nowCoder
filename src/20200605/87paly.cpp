
//
// Created by 刘鹏 on 2020/6/5.
//

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool match(int m,int n)
{
    string str1=to_string(m);
    string str2=to_string(n);
    int pos=str2.find(str1);
    if(pos!=-1)
        return true;
    else
        return false;
}
int paly87()
{
    int m,n;
    while(cin>>m)
    {
        vector<int> I;
        vector<int> R;
        for(int i=0;i<m;i++)
        {
            int  temp;
            cin>>temp;
            I.push_back(temp);
        }
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int  temp;
            cin>>temp;
            R.push_back(temp);
        }
        sort(R.begin(),R.end());//排序
        R.erase(unique(R.begin(), R.end()), R.end());//去重

        vector<int> index;
        vector<int> value;
        vector<int> cnt;
        vector<int> index1;
        for(int i=0;i<R.size();i++)
        {
            int cnt1=0;//每个R[i]在I中存在的个数
            for(int pos=0;pos<I.size();pos++)//遍历I
            {
                if(match(R[i],I[pos]))//如果R[i]在I中
                {
                    cnt1++;//计数++
                    index.push_back(pos);//把相应位置压入index
                    value.push_back(I[pos]);//把在I中相应位置的值压入value
                }
            }
            if(cnt1!=0)//判断每个R[i]在I中的个数是否为0
            {
                cnt.push_back(cnt1);//把R[i]在I中对应找到的个数压入cnt
                index1.push_back(i);//把R中每个位置压入index1
            }
        }
        int j=0;
        cout<<2*index.size()+index1.size()+cnt.size()<<' ';//2*index.size()是一个位置+位置的值
        for(int i=0;i<cnt.size();i++)
        {
            cout<<R[index1[i]]<<' '<<cnt[i]<<' '; //把R中相应的值和在I中找到的个数输出
            while(cnt[i]-->0)//循环输出R中R[i]在I中的位置和值
            {
                cout<<index[j]<<' '<<value[j];
                if(i==cnt.size()-1&&cnt[i]==0)
                {
                    cout<<endl;
                }
                else
                {
                    cout<<' ';
                }
                j++;
            }
        }
    }
    return 0;
}