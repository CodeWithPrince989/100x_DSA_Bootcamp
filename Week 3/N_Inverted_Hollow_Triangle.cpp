// Revisit This Code

#include <iostream>

using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; ++i) {
        // 1. Print leading spaces for alignment
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }

        // 2. Print the stars and internal spaces
        for (int j = 0; j < (n - i); ++j) {
            // Print star if it is the first row, first column, or last column
            if (i == 0 || j == 0 || j == (n - i - 1)) {
                cout << "* ";
            } else {
                cout << "  "; // Two spaces to account for the star and its separator
            }
        }
        cout << "\n";
    }

    return 0;
}
