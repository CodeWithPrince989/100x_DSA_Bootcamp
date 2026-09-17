#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = 0;
    long long current_sum = 0;
    int min_len = n + 1;

    for (int right = 0; right < n; right++) {
        current_sum += a[right];

        // Shrink window as long as sum strictly exceeds K
        while (current_sum > k) {
            min_len = min(min_len, right - left + 1);
            current_sum -= a[left];
            left++;
        }
    }

    if (min_len > n) {
        cout << -1 << "\n";
    } else {
        cout << min_len << "\n";
    }

    return 0;
}