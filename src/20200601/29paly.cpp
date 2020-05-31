//
// Created by 刘鹏 on 2020/6/1.
//
#include <iostream>
#include <string.h>

using namespace std;

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

int paly29(){
    char data[8192] = {0};
    int j = 0;
    for(j = 0; j< 102; j++){
        scanf("%s", data);
        int max_code_len = 1;
        int mid_len = 1;
        int i = 0;
        int data_len = strlen(data);
        if(data_len == 1 || data_len == 2){
            printf("%d\n", mid_len);
            return mid_len;
        }
        for(i = 1; i < data_len; i++){
            mid_len = 1;
            while(data[i - mid_len] == data[i + mid_len]){
                mid_len++;
                max_code_len = max(max_code_len, mid_len * 2 - 1);
                if(i - mid_len < 0 || i + mid_len >= data_len)
                    break;
            }
            mid_len = 1;
            while(data[i - mid_len + 1] == data[i + mid_len]){
                mid_len++;
                max_code_len = max(max_code_len, mid_len * 2 - 2);
                if(i - mid_len + 1< 0 || i + mid_len >= data_len)
                    break;
            }
            mid_len = 1;
            while(data[i - mid_len] == data[i + mid_len - 1]){
                mid_len++;
                max_code_len = max(max_code_len, mid_len * 2 - 2);
                if(i - mid_len < 0 || i + mid_len - 1 >= data_len)
                    break;
            }
        }
        printf("%d\n", max_code_len);
    }
    return 0;
}
