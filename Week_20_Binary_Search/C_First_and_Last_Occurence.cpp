#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    if (!(cin >> N >> Q)) return 0;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    while (Q--) {
        int x;
        cin >> x;

        auto it1 = lower_bound(A.begin(), A.end(), x);
        if (it1 == A.end() || *it1 != x) {
            cout << -1 << "\n";
        } else {
            auto it2 = upper_bound(A.begin(), A.end(), x);
            int first = (it1 - A.begin()) + 1;
            int last = (it2 - A.begin());
            cout << first << " " << last << "\n";
        }
    }

    return 0;
}