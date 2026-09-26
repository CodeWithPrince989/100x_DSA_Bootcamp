#include <iostream>
#include <vector>

using namespace std;

int n;
long long K;
vector<long long> A;
vector<vector<long long>> valid_subsequences;
vector<long long> current;

void findSubsequences(int idx, long long current_sum) {
    if (idx == n) {
        if (current_sum == K) {
            valid_subsequences.push_back(current);
        }
        return;
    }

    // Choice 1: Include A[idx]
    current.push_back(A[idx]);
    findSubsequences(idx + 1, current_sum + A[idx]);
    current.pop_back(); // Backtrack

    // Choice 2: Exclude A[idx]
    findSubsequences(idx + 1, current_sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n >> K)) return 0;

    A.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    findSubsequences(0, 0);

    // Output total count
    cout << valid_subsequences.size() << "\n";

    // Output each valid subsequence
    for (const auto& sub : valid_subsequences) {
        for (size_t i = 0; i < sub.size(); i++) {
            cout << sub[i] << (i + 1 == sub.size() ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}