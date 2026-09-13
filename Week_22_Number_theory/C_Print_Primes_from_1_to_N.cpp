#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n < 2) {
        cout << "\n0\n";
        return 0;
    }

    // Sieve of Eratosthenes
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }

    int count = 0;
    bool first = true;

    // Output all primes from 1 to N
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            if (!first) cout << " ";
            cout << i;
            first = false;
            count++;
        }
    }

    // Output total count on the second line
    cout << "\n" << count << "\n";

    return 0;
}