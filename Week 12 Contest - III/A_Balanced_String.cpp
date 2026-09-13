#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int countA = 0;
    int countB = 0;

    // Iterate through the string and count occurrences
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            countA++;
        } else if (s[i] == 'b') {
            countB++;
        }
    }

    // Compare counts and print the result
    if (countA == countB) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}