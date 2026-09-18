#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    if (!(cin >> N)) return 0;

    // Special edge case for N = 1 (if required by system, though usually N >= 2 for prime factorization)
    if (N == 1) {
        return 0;
    }

    bool first = true;
    for (long long d = 2; d * d <= N; ++d) {
        if (N % d == 0) {
            int count = 0;
            while (N % d == 0) {
                count++;
                N /= d;
            }
            if (!first) cout << " ";
            cout << d << "^" << count;
            first = false;
        }
    }

    // If N is still greater than 1, then the remaining N is a prime factor
    if (N > 1) {
        if (!first) cout << " ";
        cout << N << "^1";
    }

    cout << "\n";
    return 0;
}