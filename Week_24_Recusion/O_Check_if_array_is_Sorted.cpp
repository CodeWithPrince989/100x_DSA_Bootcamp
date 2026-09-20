#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool isSorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}