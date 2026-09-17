#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sum of the first window of size K
    long long current_sum = 0;
    for (int i = 0; i < k; ++i) {
        current_sum += a[i];
    }

    long long max_sum = current_sum;

    // Slide the window across the rest of the array
    for (int i = k; i < n; ++i) {
        current_sum += a[i] - a[i - k];
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << "\n";

    return 0;
}