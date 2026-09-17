#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    if (!(cin >> N >> Q)) return 0;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    while (Q--) {
        int x;
        cin >> x;

        int low = 0, high = N - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (A[mid] == x) {
                ans = mid + 1; // 1-based index
                break;
            } else if (A[mid] < x) {
                high = mid - 1; // Look in left half for larger values
            } else {
                low = mid + 1;  // Look in right half for smaller values
            }
        }

        cout << ans << "\n";
    }

    return 0;
}