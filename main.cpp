#include <iostream>
int main()
{
    long number;
    std::cin >> number;
    if (number == 1) {
        std::cout << 1 << " ";
        return 0;
    }
    if (number == 2) {
        std::cout << 2 << " ";
        return 0;
    }
    if (number == 3) {
        std::cout << 3 << " ";
        return 0;
    }
    for (long i = 2; i <= number;) {
        if (number % i == 0) {
            std::cout << i << " ";
            number = number / i;
            i = 2;
        } else {
            i = i + 1;
        }
    }

    return 0;
}