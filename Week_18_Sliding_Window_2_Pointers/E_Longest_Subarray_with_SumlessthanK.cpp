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
    int max_length = 0;

    for (int right = 0; right < n; right++) {
        current_sum += a[right];

        // Shrink window if sum is >= K
        while (left <= right && current_sum >= k) {
            current_sum -= a[left];
            left++;
        }

        // If the window is valid, record the max length
        if (current_sum < k) {
            max_length = max(max_length, right - left + 1);
        }
    }

    cout << max_length << "\n";

    return 0;
}