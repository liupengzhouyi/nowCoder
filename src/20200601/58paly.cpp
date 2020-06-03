//
// Created by 刘鹏 on 2020/6/1.
//

#include <iostream>
using namespace std;
// 解方程即可。b代表第一个奇数，等差数列求和

string asdGetSequeOddNum(int m)
{
    int b =  m*(m-1) + 1;  // 一定是奇数
    cout << b;
    for(int i = 1; i < m; i++)
    {
        cout <<"+"<<b+i*2;
    }
    cout<<endl;
    return "";
}



int paly58()
{
    int m;
    while(cin >> m)
    {
        asdGetSequeOddNum(m);
    }
}
