#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Check if we can get at least K pieces of length L
bool canCut(long long L, const vector<long long>& A, long long K) {
    long long count = 0;
    for (long long log : A) {
        count += log / L;
        if (count >= K) return true; // Early exit to prevent overflow
    }
    return count >= K;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    long long K;
    if (!(cin >> N >> K)) return 0;

    vector<long long> A(N);
    long long max_len = 0;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        max_len = max(max_len, A[i]);
    }

    long long low = 1, high = max_len;
    long long ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (canCut(mid, A, K)) {
            ans = mid;     // Found a valid length, try searching for a larger one
            low = mid + 1;
        } else {
            high = mid - 1; // Length is too large, decrease it
        }
    }

    cout << ans << "\n";

    return 0;
}