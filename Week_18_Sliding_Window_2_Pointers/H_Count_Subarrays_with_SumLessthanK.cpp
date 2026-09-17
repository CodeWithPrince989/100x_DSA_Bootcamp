#include <iostream>
#include <vector>

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

    if (k <= 1) {
        cout << 0 << "\n";
        return 0;
    }

    long long current_sum = 0;
    long long count = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        current_sum += a[right];

        // Shrink the window if sum exceeds or equals K
        while (current_sum >= k && left <= right) {
            current_sum -= a[left];
            left++;
        }

        // Add count of valid subarrays ending at 'right'
        count += (right - left + 1);
    }

    cout << count << "\n";

    return 0;
}