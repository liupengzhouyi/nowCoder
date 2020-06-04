#include <iostream>
#include <algorithm>

using namespace std;


int main(void)
{
    int n;
    std::cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int ii = i * i;
        count = count + asda(i, ii);
    }
    std::cout << count << std::endl;
    return 0;
}