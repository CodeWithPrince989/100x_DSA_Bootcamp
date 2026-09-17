#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Process each query
    while (q--) {
        int key;
        cin >> key;

        int l = 0, r = n - 1;
        int ans = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] == key) {
                ans = mid + 1; // Convert 0-based index to 1-based index
                break;
            } else if (arr[mid] < key) {
                l = mid + 1;
            } else{
                r = mid - 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}