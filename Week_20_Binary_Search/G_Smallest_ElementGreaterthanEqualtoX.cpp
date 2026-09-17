#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    if (!(cin >> N >> Q)) return 0;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Step 1: Sort the array
    sort(A.begin(), A.end());

    // Step 2: Answer queries using binary search
    while (Q--) {
        int x;
        cin >> x;
        
        auto it = lower_bound(A.begin(), A.end(), x);
        
        if (it == A.end()) {
            cout << -1 << "\n";
        } else {
            cout << *it << "\n";
        }
    }

    return 0;
}