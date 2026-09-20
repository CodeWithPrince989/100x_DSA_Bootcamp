#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    long long t;
    if (!(cin >> n >> k >> t)) return 0;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Required sum for a subarray of size K to have average >= T
    long long required_sum = k * t;

    // Calculate sum of the first window of size K
    long long current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    int good_subarrays_count = 0;
    if (current_sum >= required_sum) {
        good_subarrays_count++;
    }

    // Slide the window across the rest of the array
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum >= required_sum) {
            good_subarrays_count++;
        }
    }

    cout << good_subarrays_count << "\n";

    return 0;
}