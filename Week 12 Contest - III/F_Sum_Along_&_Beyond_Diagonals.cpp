#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Use long long for sums as elements can be up to 10^9
    long long diagonal_sum = 0;
    long long non_diagonal_sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long val;
            cin >> val;

            // Main diagonal: i == j
            // Secondary diagonal: i + j == n - 1
            if (i == j || (i + j == n - 1)) {
                diagonal_sum += val;
            } else {
                non_diagonal_sum += val;
            }
        }
    }

    cout << diagonal_sum << " " << non_diagonal_sum << endl;
    return 0;
}