#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Step 1: Sort the array
    sort(a.begin(), a.end());

    // Step 2: Answer queries
    while (q--) {
        int t, x;
        cin >> t >> x;

        auto low = lower_bound(a.begin(), a.end(), x);
        auto high = upper_bound(a.begin(), a.end(), x);

        if (t == 1) {
            // Count of elements equal to x
            cout << (high - low) << "\n";
        } else if (t == 2) {
            // Count of elements strictly less than x
            cout << (low - a.begin()) << "\n";
        } else if (t == 3) {
            // Count of elements strictly greater than x
            cout << (a.end() - high) << "\n";
        }
    }

    return 0;
}