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

    long long actual_sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        actual_sum += x;
    }

    // The numbers range from 0 to n-2, and one number is repeated.
    // Therefore, the expected sum of unique elements from 0 to n-2 is:
    long long expected_sum = (1LL * (n - 2) * (n - 1)) / 2;

    // The duplicate number is the difference between actual sum and expected sum
    cout << (actual_sum - expected_sum) << "\n";
}

int main() {
    // Optimize standard input/output streams for speed
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}