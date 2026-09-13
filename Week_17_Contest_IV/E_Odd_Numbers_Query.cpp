#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    if (!(cin >> N >> Q)) return 0;

    // Dynamically allocate arrays using standard C++ pointers
    long long* pref = new long long[N + 1];
    pref[0] = 0;

    for (int i = 1; i <= N; i++) {
        long long val;
        cin >> val;
        pref[i] = pref[i - 1] + val;
    }

    long long total_sum = pref[N];

    while (Q--) {
        int L, R;
        cin >> L >> R;

        long long sub_sum = pref[R] - pref[L - 1];
        long long remaining_sum = total_sum - sub_sum;

        if (remaining_sum % 2 != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    // Clean up heap memory
    delete[] pref;

    return 0;
}