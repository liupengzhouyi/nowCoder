#include <iostream>
#include <algorithm>

int main() {
    int tempLength = 0;
    std::string temp;
    getline(std::cin, temp);
    reverse(temp.begin(),temp.end());
    for(int i=0; i<temp.length(); i++) {
        if (temp[i] == ' ') {
            tempLength = i;
            break;
        }
        if (i + 1 == temp.length()) {
            tempLength = i + 1;
            break;
        }
    }
    std::cout << tempLength << std::endl;
    return 0;
}
