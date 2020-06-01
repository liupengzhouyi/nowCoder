//
// Created by 刘鹏 on 2020/6/1.
//

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

static bool compare0(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}

static bool compare1(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second;
}

int palu53() {
    int n, mod;
    while (cin >> n >> mod) {
        vector<pair<string, int>> v;
        for (int i = 0; i < n; i++) {
            string name;
            cin >> name;
            int grade;
            cin >> grade;
            v.push_back({name, grade});
        }
        if (mod == 0) stable_sort(v.begin(), v.end(), compare0);
        else stable_sort(v.begin(), v.end(), compare1);
        for (int i = 0; i < n; i++) {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
    return 0;
}
