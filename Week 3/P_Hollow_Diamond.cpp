#include <iostream>
using namespace std;

void printRow(int n, int i) {
    // Print leading spaces
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    // Print first asterisk
    cout << "*";
    // Print internal spaces and second asterisk if not the vertex
    if (i > 1) {
        for (int j = 1; j <= (2 * i - 3); j++) {
            cout << " ";
        }
        cout << "*";
    }
    cout << "\n";
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    // Upper triangle
    for (int i = 1; i <= n; i++) {
        printRow(n, i);
    }

    // Lower triangle
    for (int i = n - 1; i >= 1; i--) {
        printRow(n, i);
    }

    return 0;
}
