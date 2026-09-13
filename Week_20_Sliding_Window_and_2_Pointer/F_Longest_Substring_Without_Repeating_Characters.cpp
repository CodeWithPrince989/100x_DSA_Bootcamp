#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    string s;
    cin >> s;

    // Track last seen index of each character (ASCII 0-255)
    vector<int> last_seen(256, -1);

    int max_len = 0;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        char current = s[right];

        // If the character was seen inside the current window, move the left pointer
        if (last_seen[current] >= left) {
            left = last_seen[current] + 1;
        }

        // Update the last seen position of the character
        last_seen[current] = right;

        // Calculate maximum length found so far
        max_len = max(max_len, right - left + 1);
    }

    cout << max_len << "\n";

    return 0;
}