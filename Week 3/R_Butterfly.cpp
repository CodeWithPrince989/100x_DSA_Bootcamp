#include <iostream>
using namespace std;

void printButterflyRow(int n, int i) {
    // Left wing
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
    // Central gap
    for (int j = 1; j <= 2 * (n - i); j++) {
        cout << " ";
    }
    // Right wing
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
    cout << "\n";
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    // Upper half (rows 1 to n)
    for (int i = 1; i <= n; i++) {
        printButterflyRow(n, i);
    }

    // Lower half (rows n-1 down to 1)
    for (int i = n - 1; i >= 1; i--) {
        printButterflyRow(n, i);
    }

    return 0;
}
