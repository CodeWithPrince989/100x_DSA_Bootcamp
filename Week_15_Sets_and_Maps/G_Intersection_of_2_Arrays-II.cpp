#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    unordered_map<int, int> countA;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        countA[x]++;
    }

    int m;
    cin >> m;
    vector<int> intersection;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        // If x exists in array A with remaining count > 0
        if (countA[x] > 0) {
            intersection.push_back(x);
            countA[x]--; // Decrease count to handle multiplicity correctly
        }
    }

    // Sort the intersection elements in increasing order
    sort(intersection.begin(), intersection.end());

    // Print output
    int k = intersection.size();
    cout << k << "\n";
    if (k > 0) {
        for (int i = 0; i < k; i++) {
            cout << intersection[i] << (i == k - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}