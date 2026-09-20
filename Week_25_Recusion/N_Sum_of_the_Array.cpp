#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    long long sum = 0; // Use long long to avoid integer overflow
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        sum += val;
    }

    cout << sum << "\n";

    return 0;
}