//
// Created by 刘鹏 on 2020/6/1.
//

#include<iostream>
#include<cstdio>
using namespace std;
double getJourney(int high);
double getFivthH(int high);
int paly35(){
    int high;
    while(cin >> high){
        cout << getJourney(high) << endl;
        cout << getFivthH(high) << endl;
    }
    return 0;
}
double getJourney(int high){
    double Journey = 0.0;
    double eachH = high * 1.0;
    eachH = (double)high;
    for(int i = 0;i<5;i++){
        Journey += eachH * 2.0;
        eachH = 0.5 *eachH;
       // cout << eachH <<' ';
    }
    Journey = Journey - high;
    return Journey;
}
double getFivthH(int high){
    double eachH = high;
    for(int i = 0;i<5;i++){
        eachH = 0.5 *eachH;
    }
    return eachH;
}