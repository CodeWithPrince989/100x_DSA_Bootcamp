#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K;
    if (!(cin >> N >> M >> K)) return 0;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    unordered_set<int> good_numbers;
    good_numbers.reserve(M); // Pre-allocate to prevent frequent re-hash overhead
    for (int i = 0; i < M; ++i) {
        int x;
        cin >> x;
        good_numbers.insert(x);
    }

    int current_count = 0;

    // Build the initial window of size K
    for (int i = 0; i < K; ++i) {
        if (good_numbers.count(A[i])) {
            current_count++;
        }
    }

    cout << current_count;

    // Slide the window across the remaining array
    for (int i = K; i < N; ++i) {
        // Remove left element leaving the window
        if (good_numbers.count(A[i - K])) {
            current_count--;
        }
        // Add right element entering the window
        if (good_numbers.count(A[i])) {
            current_count++;
        }
        cout << " " << current_count;
    }
    cout << "\n";

    return 0;
}