#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    double number;
    double temp;
    std::cin >> number;
    temp = int(number) / 1;
    number = number - temp;
    if (number >= 0.5) {
        temp = temp + 1;
    }
    std::cout << temp << std::endl;
    return 0;

}

