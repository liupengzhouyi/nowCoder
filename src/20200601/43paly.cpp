//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
using namespace std;

struct ListNode
{
    int       key;
    ListNode* next;
};

int paly43()
{
    int num=0;
    while(cin>>num)
    {
        if(num==0)
            continue;
        int h=0;
        cin>>h;
        ListNode *head=new ListNode();
        head->key=h;
        head->next=NULL;
        ListNode *p=head;
        for(int i=0;i<num-1;i++)
        {
            int a;
            cin>>a;
            ListNode *tmp=new ListNode();
            tmp->key=a;
            tmp->next=p->next;
            p->next=tmp;
            p=p->next;
        }
        int dst=0;
        cin>>dst;
        p=head;
        if(dst==0)
            cout<<"0"<<endl;
        else if(dst<=num)
        {
            for(int i=0;i<num-dst;i++)
            {
                p=p->next;
            }
            cout<<p->key<<endl;
        }
    }
    return 0;
}