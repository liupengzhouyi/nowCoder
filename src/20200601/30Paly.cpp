//
// Created by 刘鹏 on 2020/6/1.
//
#include <iostream>
using namespace std;

int paly30() {
    unsigned long ip[4], num; char dot;
    while ( cin >> ip[0] >> dot >> ip[1] >> dot >> ip[2] >> dot >> ip[3] ) {
        cout << ((ip[0] << 24) | (ip[1] << 16) | (ip[2] << 8) | ip[3]) << endl;
        cin >> num;
        cout << ((num & 0xFF000000) >> 24) << dot << ((num & 0x00FF0000) >> 16) << dot
             << ((num & 0x0000FF00) >> 8) << dot << (num & 0x000000FF) << endl;
    }
    return 0;
}

