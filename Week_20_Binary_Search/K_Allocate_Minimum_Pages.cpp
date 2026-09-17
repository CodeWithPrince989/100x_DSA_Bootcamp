#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool isValid(const vector<long long>& A, int N, int K, long long maxPages) {
    int studentsRequired = 1;
    long long currentPages = 0;

    for (int i = 0; i < N; ++i) {
        if (currentPages + A[i] > maxPages) {
            studentsRequired++;
            currentPages = A[i];
        } else {
            currentPages += A[i];
        }
    }

    return studentsRequired <= K;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    if (!(cin >> N >> K)) return 0;

    vector<long long> A(N);
    long long maxElement = 0;
    long long sumElements = 0;

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        maxElement = max(maxElement, A[i]);
        sumElements += A[i];
    }

    if (N < K) {
        cout << -1 << "\n";
        return 0;
    }

    long long low = maxElement;
    long long high = sumElements;
    long long ans = high;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (isValid(A, N, K, mid)) {
            ans = mid;
            high = mid - 1; // Try searching for a smaller maximum
        } else {
            low = mid + 1;  // Increase the limit
        }
    }

    cout << ans << "\n";
    return 0;
}