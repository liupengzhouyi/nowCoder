//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int paly38()
{
    int a;
    while(cin >> a)
    {
        string *m = new string[a];
        for (int i = 0; i < a; i++)
        {
            cin>>m[i];
            int len = m[i].length();
            int array[26] = { 0 };
            for (int j = 0; j < len; j++)
            {
                int n = m[i][j] - 'a';
                array[n]++;
            }
            sort(array, array + 26);

            int sum = 0;
            for (int k = 0; k < 26; k++)
                sum = sum + array[k] * (k + 1);
            cout << sum << endl;
        }
        delete[]m;
    }
}
