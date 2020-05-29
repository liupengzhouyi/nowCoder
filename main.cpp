#include <iostream>
#include <algorithm>
#include <vector>
int main() {
    int time;
    int numbers[1002];
    for (int i = 0; i < 1002; i++) {
        numbers[i] = -1;
    }
    int key = 0;
    while (std::cin >> time)
    {
        while (time--) {
            int index;
            std::cin >> index;
            numbers[index] = 1;
        }
        for (int i = 0; i < 1002; i++) {
            if (numbers[i] != -1) {
                std::cout << i << std::endl;
            }
        }
    }
    return 0;
}

