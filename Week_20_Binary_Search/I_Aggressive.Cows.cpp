#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(const vector<long long>& stalls, int k, long long minDist) {
    int cowsPlaced = 1;
    long long lastPos = stalls[0];

    for (size_t i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= minDist) {
            cowsPlaced++;
            lastPos = stalls[i];
            if (cowsPlaced == k) return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> stalls(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    sort(stalls.begin(), stalls.end());

    long long low = 1, high = stalls[n - 1] - stalls[0];
    long long ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (isPossible(stalls, k, mid)) {
            ans = mid;
            low = mid + 1; // Try to maximize distance
        } else {
            high = mid - 1; // Distance too large, decrease it
        }
    }

    cout << ans << "\n";
    return 0;
}