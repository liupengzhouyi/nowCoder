//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void PageUp(vector<int>& page, int pos, int maxNum)
{
    //只移动光标
    if(maxNum<=4)
    {
        return;
    }

    ////特殊翻页
    if(pos==1)
    {
        for(size_t i=0;i<page.size();i++)
            page[i]=maxNum-(3-i);
    }
        //不在第一页，光标在当前屏幕显示的第一首歌曲时
    else if(page[0]!=1&&pos==page[0])
    {
        for(size_t i=0;i<page.size();i++)
            page[i]--;
    }
        //光标不在第一个
    else
    {

    }
}

void PageDown(vector<int>& page, int pos, int maxNum)
{
    //只移动光标
    if(maxNum<=4)
    {
        return;
    }

    //特殊翻页
    if(pos==maxNum)
    {
        for(size_t i=0;i<page.size();i++)
            page[i]=i+1;
    }
        //不在最后一页
    else if(page[page.size()-1]!=maxNum&&pos==page[page.size()-1])
    {
        for(size_t i=0;i<page.size();i++)
            page[i]++;
    }
        //光标不在最后
    else
    {

    }
}

int moveUp(int pos, int maxNum)
{
    if(pos==1)
        pos=maxNum;
    else
        pos--;
    return pos;
}

int moveDown(int pos, int maxNum)
{
    if(pos==maxNum)
        pos=1;
    else
        pos++;
    return pos;
}

int paly50()
{
    int n;
    while(cin>>n)
    {
        string str;
        cin>>str;

        int pagesize=n<4?n:4;
        vector<int> page(pagesize);
        int pos=1;//当前光标位置
        for(int i=0;i<pagesize;i++)
            page[i]=i+1;

        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='U')
            {
                PageUp(page,pos,n);
                pos=moveUp(pos,n);
            }
            else
            {
                PageDown(page,pos,n);
                pos=moveDown(pos,n);
            }
        }
        for(int i=0;i<pagesize;i++)
        {
            cout<<page[i]<<" ";
        }
        cout<<endl<<pos<<endl;;
    }
    return 0;
}