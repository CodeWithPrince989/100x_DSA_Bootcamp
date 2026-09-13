#include <iostream>
using namespace std;

int main() {
    // Optimization to speed up input/output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Use a variable to track the sum and manually find max/min
    long long total = 0;
    long long max_val = -1; // Initialize with a very small value
    long long min_val = 2000000000; // Initialize with a value larger than any possible input (max input is 10^9)

    for (int i = 0; i < n; i++) {
        long long current;
        cin >> current;

        // Add to total
        total += current;

        // Manually check for max
        if (current > max_val) {
            max_val = current;
        }

        // Manually check for min
        if (current < min_val) {
            min_val = current;
        }
    }

    // Calculate average (integer division automatically floors)
    long long avg = total / n;

    // Print all four values separated by spaces
    cout << total << " " << max_val << " " << min_val << " " << avg << endl;

    return 0;
}