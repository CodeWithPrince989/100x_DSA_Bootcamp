#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long power = 1;
    while (power <= n) {
        cout << power << " ";
        // Avoid overflow if power * 2 exceeds the limits of long long
        if (power > n / 2) break; 
        power *= 2;
    }
    cout << "\n";

    return 0;
}