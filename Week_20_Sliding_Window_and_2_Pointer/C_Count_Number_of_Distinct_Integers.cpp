#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, int> freq;

    // Build frequency map for the first window of size K
    for (int i = 0; i < k; ++i) {
        freq[a[i]]++;
    }

    cout << freq.size();

    // Slide the window across the array
    for (int i = k; i < n; ++i) {
        // Remove element going out of window (a[i - k])
        int out_elem = a[i - k];
        freq[out_elem]--;
        if (freq[out_elem] == 0) {
            freq.erase(out_elem);
        }

        // Add new element entering window (a[i])
        int in_elem = a[i];
        freq[in_elem]++;

        cout << " " << freq.size();
    }

    cout << "\n";
    return 0;
}