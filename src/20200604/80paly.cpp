//
// Created by 刘鹏 on 2020/6/4.
//
/*

#include <iostream>
#include <algorithm>

using namespace std;

int asd(int numberI, int numberII) {
    std::string strNumber = std::to_string(numberI);
    int number = 1;
    for (int i = 0; i < strNumber.length(); i++) {
        number = number * 10;
    }
    // std::cout << number << std::endl;
    if (numberII % number == numberI) {
        return 1;
    } else {
        return 0;
    }
}

int paly80(void)
{
    int n;
    std::cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int ii = i * i;
        count = count + asd(i, ii);
    }
    std::cout << count << std::endl;
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int paly80(){
    int n;
    while(cin>>n){
        int cnt=0;
        string pow;
        string str;
        for(int val=0;val<=n;++val){
            pow=to_string(val*val);
            str=to_string(val);
            if(pow.substr(pow.size()-str.size())==str)
                ++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
