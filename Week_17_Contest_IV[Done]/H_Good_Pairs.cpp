#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    long long K;
    if (!(cin >> N >> K)) return 0;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    unordered_map<long long, long long> freq;
    long long ans = 0;

    for (int j = 0; j < N; j++) {
        long long current = A[j];

        if (K == 0) {
            if (current == 0) {
                // Any previous element paired with 0 gives A[i] * 0 = 0
                ans += j;
            }
        } else {
            if (current % K == 0) {
                long long required_prev = current / K;
                if (freq.count(required_prev)) {
                    ans += freq[required_prev];
                }
            }
        }

        freq[current]++;
    }

    cout << ans << "\n";

    return 0;
}