//
// Created by 刘鹏 on 2020/5/31.
//
#include <iostream>
#include <string>
using namespace std;

int paly21(){
    string str;
    cin>>str;
    int len=str.length();
    int code;
    for (int i=0;i<len;i++){
        if (str[i]<='Z'&&str[i]>='A'){
            if (str[i]!='Z'){
                //cout<<str[i]+33;
                printf("%c",str[i]+33);
            }else{
                //cout<<str[i]+7;
                printf("%c",str[i]+7);
            }
        }
        if (str[i]<='z'&&str[i]>='a'){
            if (str[i]<='z'){
                code=9;
            }
            if (str[i]<='v'){
                code=8;
            }
            if (str[i]<='s'){
                code=7;
            }
            if (str[i]<='o'){
                code=6;
            }
            if (str[i]<='l'){
                code=5;
            }if (str[i]<='i'){
                code=4;
            }if (str[i]<='f'){
                code=3;
            }
            if (str[i]<='c'){
                code=2;
            }
            cout<<code;
        }
        if (str[i]<='9'&&str[i]>='0'){
            cout<<str[i];
        }
    }
    return 0;
}
