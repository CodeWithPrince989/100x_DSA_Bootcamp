#include <iostream>
#include <vector>

using namespace std;

const int MAX_X = 1000000;
vector<bool> is_prime(MAX_X + 1, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX_X; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_X; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        if (is_prime[x]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}