//
// Created by 刘鹏 on 2020/6/5.
//

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
vector<int> G[105];
int pre[105];
bool used[105];

bool dfs(int k)
{
    for(int i=0;i<G[k].size();++i)
    {
        if(used[G[k][i]] == 0)
        {
            used[G[k][i]] = 1;
            if(pre[G[k][i]] == 0 || dfs(pre[G[k][i]]))
            {
                pre[G[k][i]]=k;
                return true;
            }
        }
        else
            continue;
    }
    return false;
}

int paly88()
{
    bool isprime[80000];
    memset(isprime,1,sizeof(isprime));
    isprime[0]=0;//数据从2开始的
    isprime[1]=0;
    for(int i=4;i<80000;i+=2)//除了2以外所有的偶数都不是质数
        isprime[i]=0;
    for(int i=3;i*i<80000;i+=2)
        if(isprime[i])
            for(int j=i*i;j<80000;j+=2*i)
                isprime[j]=0;
    int N;
    int nums[105];
    int temp;

    while(cin>>N)
    {
        for(int i=1;i<=N;++i)
        {
            cin>>temp;
            nums[i]=temp;
        }
        //匹配规则
        for(int i=1;i<=N;++i)
        {
            for(int j=i+1;j<=N;++j)
            {
                if(isprime[nums[i]+nums[j]])
                    (nums[i]&1)?G[i].push_back(j):G[j].push_back(i);
            }
        }
        memset(pre,0,sizeof(pre));
        int count=0;
        for(int i=1;i<=N;++i)
        {
            memset(used,0,sizeof(used));
            if(dfs(i))
                count++;
        }
        cout<<count<<endl;
        for(int i=1;i<=N;++i)
            G[i].clear();
    }
    return 0;
}

