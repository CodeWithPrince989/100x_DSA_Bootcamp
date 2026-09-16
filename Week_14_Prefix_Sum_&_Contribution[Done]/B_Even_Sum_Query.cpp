#include <iostream>
using namespace std;

// Global arrays taaki large size (10^5) ke liye stack overflow na ho
long long a[100005];
long long pref[100005];

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // 1-based indexing use kar rahe hain
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Prefix sum array bana rahe hain sirf even indices ke liye
    pref[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            pref[i] = pref[i - 1] + a[i];
        } else {
            pref[i] = pref[i - 1];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        
        // Range [l, r] mein even indices ka sum
        long long ans = pref[r] - pref[l - 1];
        cout << ans << "\n";
    }

    return 0;
}