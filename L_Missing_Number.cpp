#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int unique_element = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        unique_element ^= x; // XOR all elements together
    }
    cout << unique_element << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}