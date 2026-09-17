#include <iostream>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    // Dynamically allocate array of size n to avoid std::vector
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int d;
    cin >> d;

    d %= n; // Ensure d is within bounds (0 <= d <= n)

    // Print elements directly starting from index d to n-1, then 0 to d-1
    for (int i = 0; i < n; i++) {
        cout << a[(i + d) % n] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    // Free the dynamically allocated memory to prevent memory leaks
    delete[] a;
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}