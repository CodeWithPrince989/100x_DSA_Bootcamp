#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    // Top half of the hourglass (including the middle row)
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print dots separated by spaces
        for (int j = 0; j < n - i; j++) {
            cout << ".";
            if (j < n - i - 1) cout << " ";
        }
        cout << endl;
    }

    // Bottom half of the hourglass
    for (int i = 1; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print dots separated by spaces
        for (int j = 0; j <= i; j++) {
            cout << ".";
            if (j < i) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
