#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Keypad mapping where index 2 -> "abc", 3 -> "def", etc.
const vector<string> keypad = {
    "",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};

void solve(int index, const string &s, string &current, vector<string> &results) {
    if (index == s.length()) {
        results.push_back(current);
        return;
    }

    int digit = s[index] - '0';
    for (char c : keypad[digit]) {
        current.push_back(c);
        solve(index + 1, s, current, results);
        current.pop_back(); // Backtrack
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    vector<string> results;
    string current = "";

    solve(0, s, current, results);

    // Print total combinations count first
    cout << results.size() << "\n";

    // Print each combination on a new line
    for (const string &comb : results) {
        cout << comb << "\n";
    }

    return 0;
}