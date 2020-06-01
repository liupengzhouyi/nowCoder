//
// Created by 刘鹏 on 2020/6/1.
//

#include <iostream>
using namespace std;
#include <string>
//struct TreeNode {
//  int val;
//  struct TreeNode *left;
//  struct TreeNode *right;
//  TreeNode(int x) :
//      val(x), left(NULL), right(NULL) {
//  }
//};


void add(string arg1, string arg2, string& result) {
    int flag = 0;
    int i = arg1.size() - 1, j = arg2.size() - 1;
    while (i >= 0 || j >= 0 || flag == 1) {
        char sum;
        if (i < 0 && j>= 0)
            sum = arg2[j] + flag;
        else if (j < 0 && i >= 0)
            sum = arg1[i] + flag;
        else if (i < 0 && j < 0)
            sum = '1';
        else
            sum = arg1[i] + arg2[j] + flag - '0';

        if (sum > '9') {
            result += sum - 10;
            flag = 1;
        }
        else {
            result += sum;
            flag = 0;
        }

        if (i >= 0)
            --i;
        if (j >= 0)
            --j;
    }

}

void sub(string subtrahend, string minuend, int which, string& result) {
    int flag = 0;
    if (which == 1)
        result += '-';
    int i = subtrahend.size() - 1, j = minuend.size() - 1;
    while (i >= 0 || flag == 1) {
        char dif;
        if (i < 0)
            dif = '-';
        else if (j < 0)
            dif = subtrahend[i] - flag;
        else
            dif = subtrahend[i] - minuend[j] - flag + '0';

        if (dif < '0') {
            result += 2 * '0' - dif;
            flag = 1;
        }
        else {
            result += dif;
            flag = 0;
        }

        if (i >= 0)
            --i;
        if (j >= 0)
            --j;
    }

    int x = result.size() - 1;
    if (which == 1)
        x -= 1;
    while (result[i] == '0')
        x--;
    result = result.substr(0, x);
    if (which == 1)
        result += '-';
}

int paly41() {
    string s1, s2;
    while (cin >> s1 >> s2) {
        string result = "";
        string arg1, arg2;
        if (s1[0] != '-' && s2[0] != '-') {
            arg1 = s1;
            arg2 = s2;
            add(arg1, arg2, result);
        }
        else if (s1[0] == '-' && s2[0] == '-') {
            arg1 = s1.substr(1);
            arg2 = s2.substr(1);
            result = '-';
            add(arg1, arg2, result);
        }
        //else if (s1[0] == '-' && s2[0] != '-') {
        //  arg1 = s1.substr(1); //减数
        //  arg2 = s2; //被减数
        //  if (arg1.size() > arg2.size())
        //      sub(arg1, arg2, 1, result);//表示减数是负数
        //  else
        //      sub(arg2, arg1, 2, result);//表示被减数是负数
        //}
        //else if (s1[0] != '-' && s2[0] == '-') {
        //  arg1 = s1;
        //  arg2 = s2.substr(1);
        //  if (arg1.size() > arg2.size())
        //      sub(arg1, arg2, 2, result);//表示被减数是负数
        //  else
        //      sub(arg2, arg1, 1, result);//表示减数是负数
        //}

        //这样排出来的字符串是逆序的
        int left = 0, right = result.size() - 1;
        while (left < right) {
            if (result[left] == '-') {
                left++;
                continue;
            }
            swap(result[left], result[right]);
            left++;
            right--;
        }
        cout << result << endl;
    }
    return 0;
}
