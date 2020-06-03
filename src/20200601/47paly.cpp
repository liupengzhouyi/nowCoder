//
// Created by 刘鹏 on 2020/6/1.
//
#include <iostream>
#include <cctype>
using namespace std;
int paly47()
{

   int n;
    while(cin>>n)
     // int flag=1;
     {
        int i,j,k;
      for(i=0;i<20;i++)
      {
          for(j=0;j<34;j++)
          {
              k=100-i-j;
                if((k%3==0)&&(5*i+3*j+k/3==100))
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    //flag=0;
                }
          }
      }
    }

    return 0;
}
