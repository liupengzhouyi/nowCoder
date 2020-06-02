//
// Created by 刘鹏 on 2020/6/2.
//

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

bool isBigger(const pair<char, int> &lhs, const pair<char, int> &rhs){
    return lhs.second > rhs.second;
}

int paly67(){
    string str;
    while(cin >> str){
        map<char, int> m;
        for(auto c : str)
            ++m[c];

        vector<pair<char, int> > pvec(m.begin(), m.end());
        stable_sort(pvec.begin(), pvec.end(), isBigger); // 使用稳定排序, 不能直接使用sort.

        for(auto &p : pvec)
            cout << p.first;
        cout << endl;
    }

    return 0;
}