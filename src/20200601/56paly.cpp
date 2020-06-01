//
// Created by 刘鹏 on 2020/6/1.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int paly56()
{
    string str;
    while (getline(cin, str))
    {
        if (str.length() <= 0) return 0;

        int left = 0, right = 0, temp = 0;
        int count = 0;
        vector<string> strVector;
        while (str[temp++] != '\0')
        {
            if (str[left] == '"')
            {
                count++;
                right = left + 1;
                while (str[right] != '"')
                    right++;
                string tmpStr = str.substr(left, right - left + 1);
                strVector.push_back(tmpStr);

                left = right = temp = right + 2;
            }
            if (str[temp] == ' ' || str[temp] == '\0')
            {
                count++;
                right = temp;
                string tmpStr = str.substr(left, right - left + 1);
                strVector.push_back(tmpStr);

                left = right = temp + 1;
            }
        }

        cout << count << endl;
        for (int i = 0; i<strVector.size(); ++i)
            cout << strVector[i] << endl;
    }

    return 0;
}
