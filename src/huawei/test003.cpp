#include <iostream>
#include <string>




int main003() {
    int sum;
    int dir[10000][3];
    int lastDir[10000][2];
    int deletedir[1100];
    std::cin >> sum;
    int nn[1000];
    int oo=0;
    int nnn[100000] = {0};
    for (int i = 0; i < sum; i++) {
        std::cin >> dir[i][1] >> dir[i][2];
        dir[i][0] = 1;
        if (dir[i][2] == 0) {
            // nn[oo] = dir[i][1];
            nnn[dir[i][1]] = 1;
            dir[i][0] = 0;
            oo = oo + 1;
        }
    }
    std::cin >> deletedir[0];
    int deleteListI[1000] = {0};
    int deleteListII[1000] = {0};
    int d = 1;
    int index = deletedir[0];
    for (int i = 0; i < sum; i++) {
        if(dir[i][0] == 1) {
            if (dir[i][1] == index) {
                dir[i][0] = 0;
            }
            if (dir[i][2] == index) {
                dir[i][0] = 0;
                deletedir[d] = dir[i][1];
                // std::cout << dir[i][1] << std::endl;
                d = d + 1;
            }
        }
    }
    /*for (int i=0;i<sum;i++) {
        std::cout << dir[i][0] << " " << dir[i][1] << " " << dir[i][2] << std::endl;
    }
    for (int i = 0; i < d; i++) {
        std::cout << ":" << deletedir[i] << " ";
    }
    std::cout << std::endl;*/
    for (int i = 1; i <= d; i++) {
        index = deletedir[i];
        // std::cout << index << std::endl;
        for (int j = 0; j < sum; j++) {
            if(dir[j][0] == 1) {
                if (dir[j][1] == index) {
                    dir[j][0] = 0;
                }
                if (dir[j][2] == index) {
                    dir[j][0] = 0;
                    deletedir[d] = dir[j][1];
                    d = d + 1;
                }
            }
        }
    }
    int lastIndex = 0;
    for (int i=0;i<sum;i++) {
        if (dir[i][0] == 1) {
            /*lastDir[lastIndex][0] = dir[i][1];
            lastDir[lastIndex][1] = dir[i][2];
            lastIndex = lastIndex + 1;*/
            if (dir[i][2] != 0) {
                lastDir[lastIndex][0] = dir[i][1];
                lastDir[lastIndex][1] = dir[i][2];
                lastIndex = lastIndex + 1;
                // std::cout << dir[i][0] << " " << dir[i][1] << " " << dir[i][2] << std::endl;
            }

        }
    }
    for (int i = 0; i < lastIndex; i++) {
        for (int j = i + 1; j < lastIndex; j++) {
            if (lastDir[i][0] > lastDir[j][0]) {
                int a = lastDir[i][0];
                int b = lastDir[i][1];
                lastDir[i][0] = lastDir[j][0];
                lastDir[i][1] = lastDir[j][1];
                lastDir[j][0] = a;
                lastDir[j][1] = b;
            }
        }
    }

    for (int i=0;i<lastIndex;i++) {
        nnn[lastDir[i][0]] = 1;
        nnn[lastDir[i][1]] = 1;

        // std::cout << lastDir[i][0] << " " << lastDir[i][1] << std::endl;
    }

    for (int i = 0; i < 100000; i++) {
        if (nnn[i] == 1) {
            nn[oo] = i;
            oo = oo + 1;
        }
    }
    for (int i=0;i<oo;i++) {
        for (int j = i+1; j < oo; j++) {
            if (nn[i] > nn[j]) {
                int t = nn[i];
                nn[i] = nn[j];
                nn[j] = t;
            }
        }
    }
    for (int i = 0; i < oo; i++) {
        std::cout << nn[i] << " ";
    }
    std::cout <<std::endl;

    return 0;
}

/*
12
2 1
3 1
4 2
5 2
6 3
7 3
8 6
9 6
10 8
11 8
13 9
12 11
3
 */