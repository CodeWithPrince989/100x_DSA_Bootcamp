#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1000000;

int d[MAXN + 1];
bool is_prime[250]; // Maximum divisors for N <= 10^6 is 240

void precompute() {
    // Step 1: Compute number of divisors for each number up to 10^6
    for (int i = 1; i <= MAXN; ++i) {
        for (int j = i; j <= MAXN; j += i) {
            d[j]++;
        }
    }

    // Step 2: Sieve to identify prime divisor counts up to 240
    fill(is_prime, is_prime + 250, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < 250; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i < 250; i += p) {
                is_prime[i] = false;
            }
        }
    }
}

int main() {
    // Fast I/O is mandatory since Q <= 10^6
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int q;
    if (!(cin >> q)) return 0;

    while (q--) {
        int x;
        cin >> x;
        if (is_prime[d[x]]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}