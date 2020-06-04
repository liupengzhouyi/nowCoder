//
// Created by 刘鹏 on 2020/6/4.
//
#include <iostream>
#include <algorithm>

using namespace std;

int paly79(void)
{
    int n;
    while ( cin >> n )
    {
        int A[n], i = n-1, tag;
        for (i = 0; i < n; i++)
            cin >> A[i];
        cin >> tag;
        sort(A, A+n);
        if (tag == 1)
            reverse(A, A+n);
        for (i = 0; i < n-1; i++)
            cout << A[i] << ' ';
        cout << A[n-1] << endl;
    }
}
