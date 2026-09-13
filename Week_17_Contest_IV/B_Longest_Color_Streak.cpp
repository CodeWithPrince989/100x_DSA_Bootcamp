#include <iostream>
#include <vector>
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

    int max_streak = 1;
    int current_streak = 1;

    for (int i = 1; i < N; ++i) {
        if (A[i] == A[i - 1]) {
            current_streak++;
        } else {
            current_streak = 1;
        }
        max_streak = max(max_streak, current_streak);
    }

    cout << max_streak << "\n";

    return 0;
}