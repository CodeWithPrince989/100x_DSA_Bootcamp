#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Recursive function to find the maximum element
int maxElement(const vector<int>& arr, int n) {
    // Base case: if there is only one element, it is the max
    if (n == 1) {
        return arr[0];
    }
    // Recursive step: return max between current element and max of remaining elements
    return max(arr[n - 1], maxElement(arr, n - 1));
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maxElement(arr, n) << "\n";

    return 0;
}