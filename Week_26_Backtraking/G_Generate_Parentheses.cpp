#include <iostream>
#include <vector>
#include <string>

using namespace std;

void backtrack(int n, int open, int close, string &current, vector<string> &result) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

    // Option 1: Add an opening bracket '('
    if (open < n) {
        current.push_back('(');
        backtrack(n, open + 1, close, current, result);
        current.pop_back(); // Backtrack
    }

    // Option 2: Add a closing bracket ')'
    if (close < open) {
        current.push_back(')');
        backtrack(n, open, close + 1, current, result);
        current.pop_back(); // Backtrack
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<string> result;
    string current = "";

    backtrack(n, 0, 0, current, result);

    // Print count k on the first line
    cout << result.size() << "\n";

    // Print each valid sequence
    for (const string &s : result) {
        cout << s << "\n";
    }

    return 0;
}