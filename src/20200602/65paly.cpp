//
// Created by 刘鹏 on 2020/6/2.
//

#include <iostream>
#include <string>
using namespace std;
int paly65()
{
    string str;
    while(getline(cin, str))
    {
        int count = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}