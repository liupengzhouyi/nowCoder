//
// Created by 刘鹏 on 2020/6/1.
//

#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int paly25() {
    int N;

    while (cin >> N) {

        //cout << N << endl;
        vector<string> dict;
        string tem;
        int index;
        string target;
        for (int i = 0; i < N; i++) {
            cin >> tem;
            dict.push_back(tem);
        }


        cin >> target;

        cin >> index;
        vector<string> bro;
        string target_order = target;
        sort(target_order.begin(), target_order.end());
        int counts = 0;
        for (auto word:dict) {
            if (word != target) {
                tem = word;
                sort(tem.begin(), tem.end());
                if (tem == target_order) {
                    //cout << "here"<< endl;
                    bro.push_back(word);
                    counts++;
                }
            }
        }

        sort(bro.begin(), bro.end());
        cout << bro.size() << endl;
        if (counts >= index) {
            cout << bro[index - 1] << endl;
        }


    }
    return 0;
}
