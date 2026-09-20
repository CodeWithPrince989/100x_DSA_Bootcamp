#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 200000;
int spf[MAXN + 1];

// Precompute Smallest Prime Factor (SPF)
void sieve() {
    for (int i = 1; i <= MAXN; i++) {
        spf[i] = i;
    }
    for (int i = 2; i * i <= MAXN; i++) {
        if (spf[i] == i) { // i is prime
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

int main() {
    // Fast I/O for 10^6 queries
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int q;
    if (!(cin >> q)) return 0;

    while (q--) {
        int n, k;
        cin >> n >> k;

        int result = -1;
        while (n > 1) {
            int factor = spf[n];
            k--;
            if (k == 0) {
                result = factor;
                break;
            }
            n /= factor;
        }

        cout << result << "\n";
    }

    return 0;
}