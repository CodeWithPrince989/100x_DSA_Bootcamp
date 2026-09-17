#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//Try Again

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    string s;
    cin >> s;

    vector<int> freq(256, 0); // Handles ASCII uppercase and lowercase letters
    int left = 0, max_len = 0;

    for (int right = 0; right < n; ++right) {
        freq[s[right]]++;

        // Shrink the window until s[right] is no longer duplicated
        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        max_len = max(max_len, right - left + 1);
    }

    cout << max_len << "\n";

    return 0;
}