
//
// Created by 刘鹏 on 2020/6/3.
//
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int paly75()
{
    char s[1000];
    while(gets(s))
    {
        int n;
        int f[5]={0};
        int ans=0;
        int num=0;
        int letter_small=0;
        int capital=0;
        int character=0;
        n=strlen(s);
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0'&&s[i]<='9')
                num++;
            else if(s[i]>='a'&&s[i]<='z')
                letter_small++;
            else if(s[i]>='A'&&s[i]<='Z')
                capital++;
            else
                character++;
        }
        //判断长度
        if(n<=4)
            f[0]=5;
        else if(n>4&&n<8)
            f[0]=10;
        else if(n>=8)
            f[0]=25;
        //判断字母
        if(letter_small+capital==0)
            f[1]=0;
        else if((letter_small>0&&capital==0)||(letter_small==0&&capital>0))
            f[1]=10;
        else if(letter_small>0&&capital>0)
            f[1]=20;
        //判断数字
        if(num==0)
            f[2]=0;
        else if(num==1)
            f[2]=10;
        else if(num>1)
            f[2]=20;
        //判断符号
        if(character==0)
            f[3]=0;
        else if(character==1)
            f[3]=10;
        else if(character>1)
            f[3]=25;
        //判断奖励
        if(letter_small+capital>0&&num>0)
            f[4]=2;
        else if(letter_small+capital>0&&num>0&&character>0)
            f[4]=3;
        else if(letter_small>0&&capital>0&&num>0&&character>0)
            f[4]=5;
        ans=f[0]+f[1]+f[2]+f[3]+f[4];
        if(ans>=90)
            cout<<"VERY_SECURE"<<endl;
        else if(ans>=80)
            cout<<"SECURE"<<endl;
        else if(ans>=70)
            cout<<"VERY_STRONG"<<endl;
        else if(ans>=60)
            cout<<"STRONG"<<endl;
        else if(ans>=50)
            cout<<"AVERAGE"<<endl;
        else if(ans>=25)
            cout<<"WEAK"<<endl;
        else
            cout<<"VERY_WEAK"<<endl;
    }
    return 0;
}

