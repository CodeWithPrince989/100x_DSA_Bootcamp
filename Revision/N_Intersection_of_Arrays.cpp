#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    vi arr2(m);
    unordered_multiset<int> s;
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
        s.insert(arr2[i]);
    }

    bool first = true;
    for (int i = 0; i < n; i++) {
        // Check if the element exists in the second array
        auto it = s.find(arr[i]);
        if (it != s.end()) {
            if (!first) cout << " ";
            cout << arr[i];
            first = false;
            // Remove one instance so duplicates are handled correctly matching the frequency
            s.erase(it);
        }
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}