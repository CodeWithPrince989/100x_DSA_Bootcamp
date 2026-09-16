#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    unordered_set<int> unique_ids;
    unique_ids.reserve(n); // Prevents rehashing overhead

    for (int i = 0; i < n; ++i) {
        int id;
        cin >> id;
        unique_ids.insert(id);
        cout << unique_ids.size() << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}