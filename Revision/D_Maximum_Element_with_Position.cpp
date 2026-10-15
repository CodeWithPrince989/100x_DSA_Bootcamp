#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize with the first element
    int max_val = arr[0];
    int max_idx = 0; // 1-based index

    // Traverse the array to find the true minimum
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_idx = i; // Convert 0-based loop index to 1-based
        }
    }

    cout << max_val << " " << max_idx+1<< "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
