// Revisit Code

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Top half including the middle row
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print N arrows
        for (int j = 0; j < n; j++) {
            cout << ">";
        }
        cout << "\n";
    }

    // Bottom half mirroring the top half
    for (int i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print N arrows
        for (int j = 0; j < n; j++) {
            cout << ">";
        }
        cout << "\n";
    }

    return 0;
}
