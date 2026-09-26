#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Factorial helper to calculate total permutations n!
int factorial(int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Print the total number of permutations (n!)
    cout << factorial(n) << "\n";

    // Sort to start from the smallest lexicographical permutation
    sort(nums.begin(), nums.end());

    // Generate and print each permutation
    do {
        for (int i = 0; i < n; i++) {
            cout << nums[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    } while (next_permutation(nums.begin(), nums.end()));

    return 0;
}