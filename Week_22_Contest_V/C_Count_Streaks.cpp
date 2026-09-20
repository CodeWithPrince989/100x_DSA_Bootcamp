#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    unordered_map<int, int> last_seen;
    long long total_clean_streaks = 0;
    int L = 0;

    for (int R = 0; R < N; ++R) {
        if (last_seen.find(A[R]) != last_seen.end()) {
            L = max(L, last_seen[A[R]] + 1);
        }
        
        total_clean_streaks += (R - L + 1);
        last_seen[A[R]] = R;
    }

    cout << total_clean_streaks << "\n";

    return 0;
}