#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<int> prime_count(N + 1, 0);

    // Sieve to count distinct prime factors
    for (int i = 2; i <= N; ++i) {
        if (prime_count[i] == 0) { // i is prime
            for (int j = i; j <= N; j += i) {
                prime_count[j]++;
            }
        }
    }

    // Count numbers with exactly 2 distinct prime factors
    int ans = 0;
    for (int i = 1; i <= N; ++i) {
        if (prime_count[i] == 2) {
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}