#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Initialize pointers to the middle two elements
    int left = (n / 2) - 1;
    int right = n / 2;

    // Expand outwards and print
    while (left >= 0 && right < n) {
        cout << a[left] << " " << a[right] << " ";
        left--;
        right++;
    }
    cout << "\n";

    return 0;
}