#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

//Try This Again
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    string s;
    cin >> s;

    unordered_map<char, int> freq;
    int left = 0, max_len = 0;

    for (int right = 0; right < n; ++right) {
        freq[s[right]]++;

        // Shrink window if distinct count exceeds K
        while ((int)freq.size() > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) {
                freq.erase(s[left]);
            }
            left++;
        }

        max_len = max(max_len, right - left + 1);
    }

    cout << max_len << "\n";

    return 0;
}