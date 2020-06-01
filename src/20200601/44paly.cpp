//
// Created by 刘鹏 on 2020/6/1.
//
#include <iostream>
#include <stack>
#include <vector>
#include <sstream>
using namespace std;

string jisuan(vector<string> vstr) {
    vector<string> fzv;
    if (vstr[vstr.size() - 1] == "-") fzv.push_back("0");
    for (int i = vstr.size() - 1; i >= 0; i--) {
        fzv.push_back(vstr[i]);
    }
    for (int i = 0; i < fzv.size(); i++) {
        if (fzv[i] == "*") {
            int k = i - 1;
            int l = i + 1;
            while (fzv[k] == "?") k--;
            while (fzv[l] == "?") l++;
            int a = stoi(fzv[k]);
            int b = stoi(fzv[l]);
            fzv[k] = to_string(a*b);
            fzv[i] = "?";
            fzv[l] = "?";
        }
        if (fzv[i] == "/") {
            int k = i - 1;
            int l = i + 1;
            while (fzv[k] == "?") k--;
            while (fzv[l] == "?") l++;
            int a = stoi(fzv[k]);
            int b = stoi(fzv[l]);
            fzv[k] = to_string(a / b);
            fzv[i] = "?";
            fzv[l] = "?";
        }
    }
    for (int i = 0; i < fzv.size(); i++) {
        if (fzv[i] == "+") {
            int k = i - 1;
            int l = i + 1;
            while (fzv[k] == "?") k--;
            while (fzv[l] == "?") l++;
            int a = stoi(fzv[k]);
            int b = stoi(fzv[l]);
            fzv[k] = to_string(a + b);
            fzv[i] = "?";
            fzv[l] = "?";
        }
        if (fzv[i] == "-") {
            int k = i - 1;
            int l = i + 1;
            while (fzv[k] == "?") k--;
            while (fzv[l] == "?") l++;
            int a = stoi(fzv[k]);
            int b = stoi(fzv[l]);
            fzv[k] = to_string(a - b);
            fzv[i] = "?";
            fzv[l] = "?";
        }
    }
    for (int i = 0; i < fzv.size(); i++) {
        if (fzv[i] != "?"&&fzv[i] != "0") {
            return fzv[i];
        }
    }
    return "";
}
int paly44() {
    string input;
    while (cin >> input) {
        if (input[0] == '-') input = "0" + input;
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == '{' || input[i] == '[') input[i] = '(';
            if (input[i] == '}' || input[i] == ']') input[i] = ')';
        }
        int res = 0;
        stack<string> s;
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == ')') {
                vector<string> tmp;
                while (s.top() != "(") {
                    tmp.push_back(s.top());
                    s.pop();
                }
                s.pop();
                s.push(jisuan(tmp));
            }
            else {
                string tmp2;
                if (input[i] >= '0'&&input[i] <= '9') {
                    while (input[i] >= '0'&&input[i] <= '9') {
                        tmp2.push_back(input[i]);
                        i++;
                    }
                    i--;
                    s.push(tmp2);
                }
                else {
                    string tmp1(1, input[i]);
                    s.push(tmp1);
                }

            }
        }
        vector<string> zuihou;
        while (!s.empty()) {
            zuihou.push_back(s.top());
            s.pop();
        }
        res = stoi(jisuan(zuihou));
        cout << res << endl;
    }
    system("pause");
    return 0;
}
