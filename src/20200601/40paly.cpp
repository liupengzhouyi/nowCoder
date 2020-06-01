//
// Created by 刘鹏 on 2020/6/1.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int paly40()
{
    int num, n;
    while (cin >> num >> n)
    {
        vector<int> arr;
        for (int i = 0; i < num; i++)
        {
            int tem;
            cin >> tem;
            arr.push_back(tem);
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


    return 0;
}
