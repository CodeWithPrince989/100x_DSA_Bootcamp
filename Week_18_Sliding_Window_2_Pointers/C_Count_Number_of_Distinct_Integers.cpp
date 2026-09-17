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

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    // Build frequency map for the first window of size K
    for (int i = 0; i < k; i++) {
        freq[arr[i]]++;
    }

    // Print distinct count for the first window
    cout << freq.size();

    // Slide the window across the rest of the array
    for (int i = k; i < n; i++) {
        // Remove left element leaving the window
        int left_element = arr[i - k];
        freq[left_element]--;
        if (freq[left_element] == 0) {
            freq.erase(left_element);
        }

        // Add new element entering the window
        int right_element = arr[i];
        freq[right_element]++;

        // Print distinct count for current window
        cout << " " << freq.size();
    }

    cout << "\n";
    return 0;
}