//
// Created by 刘鹏 on 2020/6/3.
//

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int paly71()
{
    int num;
    while (cin >> num)
    {
        int temp, count = 0, sum = 0, PN = 0;
        vector<int> ivec;
        while (num-- && cin >> temp)
            ivec.push_back(temp);
        for (size_t i = 0; i < ivec.size(); ++i)
            if (ivec[i] < 0)
                count++;
            else if (ivec[i] > 0)
            {
                PN++;
                sum += ivec[i];
            }
        cout << count << " ";
        cout << fixed << setprecision(1) << (double)sum / PN << endl;
    }
    return 0;
}