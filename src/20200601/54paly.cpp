//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
using namespace std;

int paly54()
{
    int m, n, l;
    int temp = 0;
    int array1[201][201];
    int array2[201][201];
    int array3[201][201];
    while(cin>>m>>n>>l)
    {
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
            {
                cin>>array1[i][j];
            }
        for(int i = 0; i < n; i++)
            for(int j = 0; j < l; j++)
            {
                cin>>array2[i][j];
            }
        for(int i = 0; i < m; i++)
            for(int j = 0; j < l; j++)
            {
                temp = 0;
                for(int k = 0; k < n; k++)
                {
                    temp = temp + array1[i][k]*array2[k][j];
                }

                array3[i][j] = temp;
            }
        for(int  i = 0; i < m; i++)
        {
            for(int j = 0; j < l-1; j++)
            {
                cout<<array3[i][j]<<' ';
            }
            cout<<array3[i][l-1];
            cout<<endl;
            //cout<<array3[i][l-1]<<endl;
        }
    }

    return 0;
}