//
// Created by 刘鹏 on 2020/6/3.
//
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

string fun(long long number )
{
    string s;
    if (number < 0){ s = "error"; return s; }
    if (number < 20)
    {
        switch (number)
        {
            case 0: s = "零"; return s;
            case 1: s = "壹"; return s;
            case 2: s = "贰"; return s;
            case 3: s = "叁"; return s;
            case 4: s = "肆"; return s;
            case 5: s = "伍"; return s;
            case 6: s = "陆"; return s;
            case 7: s = "柒"; return s;
            case 8: s = "捌"; return s;
            case 9: s = "玖"; return s;
            case 10:s = "拾"; return s;
            case 11:s = "拾壹"; return s;
            case 12:s = "拾贰"; return s;
            case 13:s = "拾叁"; return s;
            case 14:s = "拾肆"; return s;
            case 15:s = "拾伍"; return s;
            case 16:s = "拾陆"; return s;
            case 17:s = "拾柒"; return s;
            case 18:s = "拾捌"; return s;
            case 19:s = "拾玖"; return s;
            default: s = "err"; return s;
        }
    }
    if (number < 100) //21-99
    {
        if (number % 10 == 0) //20,30,40...
        {
            switch (number)
            {
                case 20:s = "贰拾"; return s;
                case 30:s = "叁拾"; return s;
                case 40:s = "肆拾"; return s;
                case 50:s = "伍拾"; return s;
                case 60:s = "陆拾"; return s;
                case 70:s = "柒拾"; return s;
                case 80:s = "捌拾"; return s;
                case 90:s = "玖拾"; return s;
                default:s = "erro"; return s;
            }
        }
        else
        {
            s = fun(number / 10 * 10) + fun(number%10);
            return s;
        }
    }
    if (number < 1000) //100-999
    {
        if (number % 100 == 0)
        {

            s = fun(number / 100) + "佰";
            return s;
        }
        else
        {
            if ((number%100)>=0&&(number%100<=9))
                s = fun(number / 100) + "佰" +"零"+fun(number % 100);
            else s = fun(number / 100) + "佰" + fun(number%100);
            return s;
        }
    }
    if (number<10000)//1000-9999 一千到一万
    {
        if (number % 1000 == 0)
        {
            s = fun(number/1000)+"仟";
            return s;
        }
        else
        {
            if ((number % 1000) >= 0 && (number % 1000 <= 9))
                s = fun(number / 1000) + "仟" + "零" + fun(number % 1000);
            else s = fun(number/1000) + "仟" + fun(number%1000);
            return s;
        }
    }
    if (number<100000000)//10000-99999999 一万到一亿
    {
        if (number % 10000 == 0)
        {
            s = fun(number / 10000) + "万";
            return s;
        }
        else
        {
            if ((number % 10000) >= 0 && (number % 10000 <= 9))
                s = fun(number / 10000) + "万" + "零" + fun(number % 10000);
            else s = fun(number / 10000) + "万" + fun(number % 10000);
            return s;
        }
    }
    if (number < 1000000000000) //一亿到千亿
    {
        if (number % 100000000 == 0)
        {
            s = fun(number / 100000000) + "亿";
            return s;
        }
        else
        {
            if ((number % 100000000) >= 0 && (number % 100000000 <= 9))
                s = fun(number / 100000000) + "亿" + "零" + fun(number % 10000);
            else s = fun(number / 100000000) + "亿" + fun(number % 100000000);
            return s;
        }
    }
    else
        return "error";
}
long long stoii(string tmp)  //基本上可以扩充范围(11位string以上)，只要不是很丧心病狂.....
{
    stringstream ss;
    ss << tmp;
    long long n;
    ss >> n;
    return n;
}
int paly73()
{
    string a;
    while (cin >> a)
    {
        stringstream ss(a);
        vector<string> num_v;
        string tmp;
        while (getline(ss, tmp, '.'))
        {
            if (tmp.size()) num_v.push_back(tmp);
        }
        string num_v_s = num_v[0];
        long long number = stoii(num_v_s);
        cout << "人民币";
        if (stoii(num_v[0])!=0)
            cout<<fun(number)<<"元";//整数部分
        if (!num_v[1].empty()) //有小数部分
        {
            vector<int> dot;
            for (int i = 0; i < num_v[1].length(); ++i)
                dot.push_back(num_v[1][i] - '0');
            if (dot.size() == 2)
                if (dot[0] == 0 && dot[1] == 0)
                    cout << "整" << endl;
                else if (dot[0] == 0 && dot[1] != 0)
                    cout << fun(dot[1]) << "分" << endl;
                else if (dot[0] != 0 && dot[1] == 0)
                    cout << fun(dot[0]) << "角" << endl;
                else
                    cout << fun(dot[0]) << "角" << fun(dot[1]) << "分" << endl;
            else
                cout << fun(dot[0]) << "角" << endl;
        }
        else
            cout << "整" << endl;
    }
    return 0;
}
