#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    unordered_set<int> seen;
    int max_streak = 0;
    int L = 0;

    for (int R = 0; R < N; ++R) {
        // While duplicate exists, shrink window from left
        while (seen.count(A[R])) {
            seen.erase(A[L]);
            L++;
        }
        // Insert current element and update max length
        seen.insert(A[R]);
        max_streak = max(max_streak, R - L + 1);
    }

    cout << max_streak << "\n";

    return 0;
}