#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x; // Using long long since X can be up to 2 * 10^9
    cin >> n >> x;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<long long> seen;
    bool found = false;

    for (int i = 0; i < n; i++) {
        long long complement = x - arr[i];
        if (seen.count(complement)) {
            found = true;
            break;
        }
        seen.insert(arr[i]);
    }

    if (found) {
        cout << "TRUE\n";
    } else {
        cout << "FALSE\n";
    }

    return 0;
}