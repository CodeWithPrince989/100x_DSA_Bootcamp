#include <iostream>
using namespace std;

int main() {
    char n;
    cout << "Enter Character: ";
    cin >> n;

    // Checks if 'n' matches any of the vowels directly
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
