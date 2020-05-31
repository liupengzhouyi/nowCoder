//
// Created by 刘鹏 on 2020/5/31.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int paly20()
{

    string Input;
    while(cin>>Input)
    {
        int x=0,y=0;
        int len = Input.length();

        vector<string> vec;

        int keep=0;
        for(int i=0;i<len;++i)
        {
            if(Input[i]!=';')
            {
                keep++;
                continue;
            }

            vec.push_back(Input.substr(i-keep,keep));
            keep=0;
        }

        for(int i=0;i<vec.size();++i)
        {
            int num=0;
            if(vec[i].length()==3&&vec[i][1]>='0'&&vec[i][1]<='9'&&vec[i][2]>='0'&&vec[i][2]<='9')
                num=(vec[i][1]-'0')*10+(vec[i][2]-'0');

            if(vec[i].length()==2&&vec[i][1]<='9'&&vec[i][1]>='0')
                num=(vec[i][1]-'0');

            if(vec[i].length()==1)
                num=0;

            switch(vec[i][0])
            {
                case 'A': x -= num;break;
                case 'D': x += num;break;
                case 'S': y -= num;break;
                case 'W': y += num;break;
                default:break;
            }
        }


        cout<<x<<","<<y<<endl;
    }



    return 0;
}
