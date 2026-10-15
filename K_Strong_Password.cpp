#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    // Check if length is exactly 10
    if (s.length() != 10) {
        std::cout << "Weak" << std::endl;
        return 0;
    }

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    // Loop through each character
    for (int i = 0; i < 10; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            hasLower = true;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            hasUpper = true;
        } else if (s[i] >= '0' && s[i] <= '9') {
            hasDigit = true;
        } else {
            // If it's not a letter or a digit, it's a special character
            hasSpecial = true;
        }
    }

    // Check if all conditions are true
    if (hasLower && hasUpper && hasDigit && hasSpecial) {
        std::cout << "Strong" << std::endl;
    } else {
        std::cout << "Weak" << std::endl;
    }

    return 0;
}