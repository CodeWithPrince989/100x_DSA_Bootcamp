#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int total_subsets = 1 << n; // 2^n

    // Iterate through all masks from 1 to 2^n - 1
    for (int mask = 1; mask < total_subsets; mask++) {
        bool first = true;
        for (int i = 0; i < n; i++) {
            // Check if the i-th bit is set in the current mask
            if ((mask >> i) & 1) {
                if (!first) {
                    cout << " ";
                }
                cout << a[i];
                first = false;
            }
        }
        cout << "\n";
    }

    return 0;
}