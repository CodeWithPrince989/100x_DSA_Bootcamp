// Revisit This Code

#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    // Upper triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
            if (j < i) cout << " ";
        }
        cout << "\n";
    }

    // Lower triangle
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
            if (j < i) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
