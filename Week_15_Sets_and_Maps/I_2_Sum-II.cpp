#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Map to store numbers and their 1-based indices
    unordered_map<long long, int> seen;

    for (int i = 0; i < n; i++) {
        long long complement = x - arr[i];

        // Check if the complement exists in our map
        if (seen.count(complement)) {
            // Print the 1-based indices
            cout << seen[complement] << " " << (i + 1) << "\n";
            return 0; // Exit after finding the first valid pair
        }

        // Store the current number with its 1-based index
        seen[arr[i]] = i + 1;
    }

    // If no pair is found
    cout << "-1\n";

    return 0;
}