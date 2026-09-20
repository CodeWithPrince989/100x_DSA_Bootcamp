#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = 0;

    // Check each bit position from 0 to 31
    for (int bit = 0; bit < 32; bit++) {
        int bit_sum = 0;
        for (int i = 0; i < n; i++) {
            if ((a[i] >> bit) & 1) {
                bit_sum++;
            }
        }
        // If the sum of bits is not divisible by 3, the unique number has a 1 at this position
        if (bit_sum % 3 != 0) {
            result |= (1U << bit);
        }
    }

    cout << result << "\n";

    return 0;
}