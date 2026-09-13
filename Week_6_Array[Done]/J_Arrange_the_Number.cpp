#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    // Print all odd numbers from 1 to n (increasing)
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }

    // Determine the largest even number <= n
    int last_even = (n % 2 == 0) ? n : n - 1;

    // Print all even numbers from last_even down to 2 (decreasing)
    for (int i = last_even; i >= 2; i -= 2) {
        cout << i << " ";
    }
    cout << "\n";
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