#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Recursive function to find minimum element
int findMin(const vector<int>& arr, int n) {
    // Base case: only one element
    if (n == 1) {
        return arr[0];
    }
    // Recursive call for first (n - 1) elements compared to last element
    return min(arr[n - 1], findMin(arr, n - 1));
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMin(arr, n) << "\n";

    return 0;
}