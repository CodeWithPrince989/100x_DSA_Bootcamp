#include <iostream>
#include <string>
#include <cctype> // Required for islower, isupper, isdigit

using namespace std;

int main() {
    string s;
    cin >> s;

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (char c : s) {
        if (islower(c)) {
            hasLower = true;
        } else if (isupper(c)) {
            hasUpper = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else {
            hasSpecial = true;
        }
    }

    // Calculate how many categories were found
    int count = (int)hasLower + (int)hasUpper + (int)hasDigit + (int)hasSpecial;

    if (count == 4) {
        cout << "Strong" << endl;
    } else if (count >= 3) {
        cout << "Moderate" << endl;
    } else {
        cout << "Weak" << endl;
    }

    return 0;
}