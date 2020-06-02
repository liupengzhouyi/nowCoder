//
// Created by 刘鹏 on 2020/6/2.
//

#include <iostream>
#include <string>
using namespace std;
int paly66()
{
    int num;
    string s;
    while (cin >> num)
    {
        cin.get(); //吸收cin留下的换行符
        while (num--)
        {
            getline(cin, s);
            while (s.size() / 8) //长度大于等于8时
            {
                cout << s.substr(0, 8) << endl;
                s = s.substr(8);
            }
            if (!s.empty()) //长度小于8时
            {
                cout << s;
                size_t i = 8 - s.size();
                while (i--)
                    cout << '0';
                cout << endl;
            }
            s.clear();
        }
    }
    return 0;
}