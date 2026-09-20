#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long x;
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << i + 1 << "\n"; // 1-based index
            return 0; // Exit after finding the first occurrence
        }
    }

    cout << -1 << "\n"; // Not found
    return 0;
}