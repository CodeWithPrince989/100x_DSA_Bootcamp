#include <iostream>
using namespace std;

// Global arrays taaki large size (10^5) ke liye stack overflow na ho
long long a[100005];
long long pref[100005];

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Prefix sum array banate waqt elements ka square le lo
    // pref[i] store karega sum of squares from index 1 to i
    pref[0] = 0;
    for (int i = 1; i <= n; i++) {
        long long square = a[i] * a[i]; // Overflow bachane ke liye long long
        pref[i] = pref[i - 1] + square;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        
        // Range [l, r] ke squares ka sum O(1) mein
        long long ans = pref[r] - pref[l - 1];
        cout << ans << "\n";
    }

    return 0;
}