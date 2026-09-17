#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O for large inputs
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Step 1: Sort the array
    sort(a.begin(), a.end());

    // Step 2: Answer each query using upper_bound
    while (q--) {
        int x;
        cin >> x;

        // upper_bound returns an iterator to the first element strictly > x
        auto it = upper_bound(a.begin(), a.end(), x);

        // If 'it' points to the beginning, all elements are strictly > x
        if (it == a.begin()) {
            cout << -1 << "\n";
        } else {
            // The element directly before 'it' is the largest element <= x
            cout << *(--it) << "\n";
        }
    }

    return 0;
}