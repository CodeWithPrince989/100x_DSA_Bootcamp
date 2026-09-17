#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// Function to check if a max time 'mid' is feasible with 'k' painters
bool isPossible(const vector<long long>& a, int n, int k, long long maxTime) {
    int paintersNeeded = 1;
    long long currentSum = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > maxTime) return false; // Single board exceeds target time

        if (currentSum + a[i] > maxTime) {
            paintersNeeded++;
            currentSum = a[i];
        } else {
            currentSum += a[i];
        }
    }

    return paintersNeeded <= k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> a(n);
    long long low = 0;
    long long high = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        low = max(low, a[i]);
        high += a[i];
    }

    long long ans = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (isPossible(a, n, k, mid)) {
            ans = mid;
            high = mid - 1; // Try to find a smaller valid maximum
        } else {
            low = mid + 1;  // Increase search space
        }
    }

    cout << ans << "\n";

    return 0;
}