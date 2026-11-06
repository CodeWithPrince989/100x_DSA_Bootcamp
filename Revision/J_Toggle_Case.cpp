#include <iostream>

int main() {
    std::string s;
    std::cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            // Convert lowercase to uppercase by subtracting 32
            s[i] = s[i] - 32;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            // Convert uppercase to lowercase by adding 32
            s[i] = s[i] + 32;
        }
    }

    std::cout << s << std::endl;
    return 0;
}