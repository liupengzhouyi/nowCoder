//
// Created by 刘鹏 on 2020/6/4.
//
/*像这种没有太多算法的题其实比较类似于实际应用软件中大多数的代码
  而这种代码真的是越短越好吗？
  个人认为：思路清晰，简洁得当，风格一致，注释合理才是优雅的代码。
  评论排在第一的代码除了短，并不觉得有多好，很多情况都没考虑，
  但是由于用例简单能AC就算过，其实健壮性不高只能拿来比赛，
  如果是工程代码，一味地追求浓缩，对于一个团队来讲，
  你的代码只能你自己看了，不利于团队协作和维护         */
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> split(string str,char sep){
    stringstream ss(str);
    string temp;
    vector<string> res;
    while(getline(ss,temp,sep)){
        res.push_back(temp);
    }
    return res;
}
int judgePoker(vector<string> poker){
    int flag=-1;
    if(poker.size()==1){
            flag=0;//个子
    }
    else if(poker.size()==2){
        if(poker[0]==string("joker")||poker[1]==string("joker"))
            flag=5;//对王
        else
            flag=1;//普通对子
    }
    else if(poker.size()==3)
        flag=2;//三个
    else if(poker.size()==4)
        flag=3;//炸弹
    else if(poker.size()==5)
        flag=4;//顺子
    return flag;
}

int paly81(){
    string str;
    vector<string> table={"3","4","5","6","7","8","9","10",
                          "J","Q","K","A","2","joker","JOKER"};
    while(getline(cin,str)){
        int win=-1;//0表示不能比，1表示第一幅，2表示第二幅
        vector<string> vec=split(str,'-');
        vector<string> poker1=split(vec[0],' ');
        vector<string> poker2=split(vec[1],' ');
        int flag1=-1,flag2=-1;
        flag1=judgePoker(poker1);
        flag2=judgePoker(poker2);
        if(flag1==5||flag2==5||flag1==3||flag2==3){
            if(flag1==5)//一方有对王
                win=1;
            else if(flag2==5)
                win=2;
            else if(flag1==flag2&&flag1==3){//都是炸弹
                auto it1=find(table.begin(),table.end(),poker1[0]);
                auto it2=find(table.begin(),table.end(),poker2[0]);
                if(it1<it2)
                    win=2;
                else
                    win=1;
            }
            else if(flag1==3&&flag2!=3)//只有一方有炸弹
                win=1;
            else if(flag1!=3&&flag2==3)
                win=2;
        }
        else if(flag1==flag2){
            auto it1=find(table.begin(),table.end(),poker1[0]);
            auto it2=find(table.begin(),table.end(),poker2[0]);
            if(it1<it2)
                win=2;
            else
                win=1;
        }
        else
            win=0;
        if(!win)
            cout<<"ERROR"<<endl;
        else if(win==1){
            int i=0;
            for(;i<poker1.size()-1;i++)
                cout<<poker1[i]<<" ";
            cout<<poker1[i]<<endl;
        }
        else if(win==2){
            int i=0;
            for(;i<poker2.size()-1;i++)
                cout<<poker2[i]<<" ";
            cout<<poker2[i]<<endl;
        }
    }
    return 0;
}
