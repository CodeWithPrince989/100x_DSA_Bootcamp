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

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while (q--) {
        long long x;
        cin >> x;
        
        // Find first element >= x
        auto it = lower_bound(a.begin(), a.end(), x);
        int idx = distance(a.begin(), it);
        
        cout << (n - idx) << "\n";
    }

    return 0;
}