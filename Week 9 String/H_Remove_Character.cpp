#include <iostream>
#include <string>

using namespace std;

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    char x;

    // Read the string and the character
    cin >> s >> x;

    // Iterate through the string and print characters that are not x
    for (char c : s) {
        if (c != x) {
            cout << c;
        }
    }

    return 0;
}