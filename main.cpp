#include <iostream>
#include <vector>
#include <map>
#include <string>
int main()
{
    std::string strNumber;
    std::cin >> strNumber;
    std::string s(strNumber.rbegin(),strNumber.rend());
    std::cout << s << std::endl;
    return 0;
}

