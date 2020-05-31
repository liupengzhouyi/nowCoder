//
// Created by 刘鹏 on 2020/6/1.
//
#include <iostream>
#include <string>
using namespace std;

string convert(int n)
{
    string change[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string ten[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eightteen", "nineteen"};
    string a[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int m = 0, s = 0, t = 0;
    m = n % 10;
    n = n / 10;
    if (n != 0)
        s = n % 10;
    n = n / 10;
    if (n != 0)
        t = n % 10;
    string str;
    if (t != 0)
        str = str + change[t - 1] + " hundred";
    if (s != 0 || m != 0)
    {
        if (t != 0)
            str = str + " and ";
        if (s == 1)
        {
            str = str + ten[m];
        }
        else if (s != 0) {
            str = str + a[s - 2];
        }
        if (s != 1 && m != 0)
        {
            if (s != 0)
                str = str + " " + change[m - 1];
            else
                str = str + change[m - 1];
        }
    }
    return str;
}

int paly37()
{
    long num;
    while (cin >> num)
    {
        int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
        n1 = num % 1000;
        num = num / 1000;
        if (num != 0)
            n2 = num % 1000;
        num /= 1000;
        if (num != 0)
            n3 = num % 1000;
        //num /= 1000;
        //if (num != 0)
        //n4 = num % 1000;
        string s;
        //if (n4 != 0)
        //s = s + convert(n4) + " billion ";
        if (n3 != 0)
            s = s + convert(n3) + " million ";
        if (n2 != 0)
            s = s + convert(n2) + " thousand ";
        s = s + convert(n1);
        cout << s << endl;
    }

    return 0;
}
