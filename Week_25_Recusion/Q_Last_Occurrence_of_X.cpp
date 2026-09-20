#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long x;
    cin >> x;

    int ans = -1;
    // Iterate backwards to find the last occurrence
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == x) {
            ans = i + 1; // 1-based index
            break;       // Found the last occurrence, stop searching
        }
    }

    cout << ans << "\n";

    return 0;
}