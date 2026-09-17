#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    // Vector to store factors for each number from 1 to N
    vector<vector<int>> factors(N + 1);

    // Harmonic Sieve: Push 'i' as a factor to all its multiples
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; j += i) {
            factors[j].push_back(i);
        }
    }

    // Print factors for each number 1 to N
    for (int i = 1; i <= N; ++i) {
        for (int k = 0; k < factors[i].size(); ++k) {
            cout << factors[i][k] << (k + 1 == factors[i].size() ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}