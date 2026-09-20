#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O for large input size (n up to 10^6)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    long long xor_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        xor_sum ^= a[i];
    }

    // Get the rightmost set bit
    long long diff_bit = xor_sum & (-xor_sum);

    long long num1 = 0, num2 = 0;

    // Partition numbers into two groups and XOR them separately
    for (int i = 0; i < n; i++) {
        if (a[i] & diff_bit) {
            num1 ^= a[i];
        } else {
            num2 ^= a[i];
        }
    }

    // Print results in sorted order
    if (num1 > num2) {
        swap(num1, num2);
    }

    cout << num1 << " " << num2 << "\n";

    return 0;
}