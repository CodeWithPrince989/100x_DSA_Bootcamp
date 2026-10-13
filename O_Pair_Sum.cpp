#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long target;
        cin >> target;

        int count = 0;
        // Check all unique pairs (i, j) with i < j
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target) {
                    count++;
                }
            }
        }

        cout << count << "\n";
    }

    return 0;
}