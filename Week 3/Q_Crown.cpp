#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    // Print rows from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i == n) {
            // Last row has 2 * n asterisks
            for (int j = 1; j <= 2 * n; j++) {
                cout << "*";
            }
        } else {
            // Left asterisks
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            // Middle spaces
            for (int j = 1; j <= 2 * (n - i); j++) {
                cout << " ";
            }
            // Right asterisks
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}
