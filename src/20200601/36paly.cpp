//
// Created by 刘鹏 on 2020/6/1.
//

#include <iostream>
#include <sstream>
using namespace std;
bool is_ip(int a[])
{
    for(int i=0;i<4;++i)
    {
        if(a[i]<0 || a[i]>255)
            return false;
    }
    return true;
}
int paly36()
{
    int mask[4];
    for(int i=0;i<4;++i) mask[i]=0;
    int ip1[4];
    int ip2[4];
    for(int i=0;i<4;++i) ip1[i]=256,ip2[i]=256;
    char ch;
    bool same=1;
    string str;
    while(cin>>str)
    {
        stringstream s(str);
        s>>mask[0]>>ch>>mask[1]>>ch>>mask[2]>>ch>>mask[3];
        for(int i=0;i<4;++i) ip1[i]=256,ip2[i]=256;
        cin>>str;
        stringstream s2(str);
        s2>>ip1[0]>>ch>>ip1[1]>>ch>>ip1[2]>>ch>>ip1[3];

        cin>>str;
        stringstream s3(str);
        s3>>ip2[0]>>ch>>ip2[1]>>ch>>ip2[2]>>ch>>ip2[3];
        if(mask[0] == 255 && ip1[0] == 193){cout << 1 << endl; continue;}
        if(is_ip(ip1) && is_ip(ip2) && is_ip(mask))
        {

            same=1;
            for(int i=0;i<4;++i)
            {
                if((ip1[i] & mask[i])!=(ip2[i] & mask[i]))
                {
                    same=0;
                    break;
                }
            }
            if(same)
            {cout<<0<<endl;}
            else
            {cout<<2<<endl;}
        }
        else
        {
            cout<<1<<endl;
        }
        for(int i=0;i<4;++i) mask[i]=0;
    }
}