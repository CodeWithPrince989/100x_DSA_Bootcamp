#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1000000;
int divisor_count[MAXN + 1];

// Precompute factor counts for all numbers up to 1,000,000
void precompute() {
    for (int i = 1; i <= MAXN; i++) {
        for (int j = i; j <= MAXN; j += i) {
            divisor_count[j]++;
        }
    }
}

int main() {
    // Fast I/O for large inputs
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int q;
    if (!(cin >> q)) return 0;

    while (q--) {
        int x;
        cin >> x;
        cout << divisor_count[x] << "\n";
    }

    return 0;
}