#include <iostream>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long N;
    int Q;
    if (!(cin >> N >> Q)) return 0;

    while (Q--) {
        int t, i;
        cin >> t >> i;

        if (t == 1) {
            // Check if i-th bit is set
            if ((N >> i) & 1ULL) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else if (t == 2) {
            // Set i-th bit to 1
            N |= (1ULL << i);
            cout << N << "\n";
        } else if (t == 3) {
            // Unset i-th bit to 0
            N &= ~(1ULL << i);
            cout << N << "\n";
        } else if (t == 4) {
            // Toggle i-th bit
            N ^= (1ULL << i);
            cout << N << "\n";
        }
    }

    return 0;
}