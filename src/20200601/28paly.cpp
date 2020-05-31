//
// Created by 刘鹏 on 2020/6/1.
//
#include<iostream>
#include<string>

using namespace std;


int paly28(void)
{
    string str;
    while(getline(cin,str)){

        int len = str.size();

        int i = 0;
        int k,j;
        char out[100][21] = {0};
        int flag;
        for(i = 0,k = 0;i<len;i++)
        {
            j = 0;
            flag = 0;
            while((str[i]>='a'&&str[i]<='z' )||(str[i]>='A'&&str[i]<='Z'))
            {
                out[k][j++] = str[i];
                i++;
                flag = 1;
            }
            if(flag)
                k++;
        }
        for(i = k-1;i>0;i--)
            printf("%s ",out[i]);
        printf("%s\n",out[i]);
    }
    return 0;
}
