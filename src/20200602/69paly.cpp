//
// Created by 刘鹏 on 2020/6/2.
//

#include<iostream>
#include<string>
using namespace std;

int paly69()
{
    int ip[4]={0};
    char ch[3];
    while(cin>>ip[0]>>ch[0]>>ip[1]>>ch[1]>>ip[2]>>ch[2]>>ip[3])
    {
        if(ch[0]=='.'&&ch[1]=='.'&&ch[2]=='.')
        {
            if((ip[0]>=0&&ip[0]<=255)&&(ip[1]>=0&&ip[1]<=255)&&(ip[2]>=0&&ip[2]<=255)&&(ip[3]>=0&&ip[3]<=255))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
