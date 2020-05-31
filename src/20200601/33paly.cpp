//
// Created by 刘鹏 on 2020/6/1.
//

#include <iostream>
#include <string>
using namespace std;
int paly33()
{
    string key, data;
    string an;
    while (cin >> key >> data)
    {
        an.clear();
        int n[26] = { 0 };
        for (int i = 0; i < key.size(); i++)
        {
            if (key[i] >= 'a')
            {
                if (n[key[i] - 'a'] == 0)
                {
                    n[key[i] - 'a'] = 1;
                    an += key[i] - 32;
                }
            }
            else
            {
                if (n[key[i] - 'A'] == 0)
                {
                    n[key[i] - 'A'] = 1;
                    an += key[i];
                }
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (n[i] == 0)
                an += 'A' + i;
        }
        char output;
        for (int i = 0; i < data.size(); i++)
        {
            if (data[i] >= 'a')
            {
                output = an[data[i] - 'a'] + 32;
            }
            else
                output = an[data[i] - 'A'];
            cout << output;
        }
        cout << endl;
    }
    return 0;
}