#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Edge case: if there is only 1 row
    if (n == 1) {
        for (int j = 0; j < m; j++) {
            cout << a[0][j] << " ";
        }
        return 0;
    }

    // Edge case: if there is only 1 column
    if (m == 1) {
        for (int i = 0; i < n; i++) {
            cout << a[i][0] << " ";
        }
        return 0;
    }

    // 1. First Row (r = 0)
    for (int j = 0; j < m; j++) {
        cout << a[0][j] << " ";
    }

    // 2. Last Column (c = m - 1)
    for (int i = 1; i < n; i++) {
        cout << a[i][m - 1] << " ";
    }

    // 3. Last Row (r = n - 1)
    for (int j = m - 2; j >= 0; j--) {
        cout << a[n - 1][j] << " ";
    }

    // 4. First Column (c = 0)
    for (int i = n - 2; i >= 1; i--) {
        cout << a[i][0] << " ";
    }

    return 0;
}