#include <iostream>

using namespace std;

// Function to count the number of divisors of x
int countDivisors(int x) {
    int count = 0;
    for (int i = 1; i * i <= x; ++i) {
        if (x % i == 0) {
            if (i * i == x) {
                count += 1; // Perfect square factor counted once
            } else {
                count += 2; // Both i and x/i are factors
            }
        }
    }
    return count;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        bool first = true;
        for (int i = 1; i <= n; ++i) {
            if (countDivisors(i) <= 4) {
                if (!first) {
                    cout << " ";
                }
                cout << i;
                first = false;
            }
        }
        cout << "\n";
    }

    return 0;
}