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

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    unordered_map<int, int> freq;
    int left = 0;
    long long count = 0;

    for (int right = 0; right < N; right++) {
        freq[A[right]]++;

        // Shrink window if distinct elements > K
        while (freq.size() > K) {
            freq[A[left]]--;
            if (freq[A[left]] == 0) {
                freq.erase(A[left]);
            }
            left++;
        }

        // All subarrays starting from `left` up to `right` are valid
        count += (right - left + 1);
    }

    cout << count << "\n";

    return 0;
}