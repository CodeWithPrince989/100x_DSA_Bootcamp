#include <iostream>
#include <string>

int main() {
    // Optimize input/output operations
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;
    std::getline(std::cin, s);

    for (char c : s) {
        if (c != ' ') {
            std::cout << c;
        }
    }
    
    return 0;
}