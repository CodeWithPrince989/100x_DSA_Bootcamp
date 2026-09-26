#include <iostream>
#include <string>
#include <vector>

using namespace std;

void generateEncodings(int index, const string &S, string current, vector<string> &results) {
    // Base Case: Processed the entire string
    if (index == S.length()) {
        results.push_back(current);
        return;
    }

    // Option 1: Take 1 digit
    int val1 = S[index] - '0';
    char char1 = 'a' + val1 - 1;
    generateEncodings(index + 1, S, current + char1, results);

    // Option 2: Take 2 digits (if available and valid <= 26)
    if (index + 1 < S.length()) {
        int val2 = (S[index] - '0') * 10 + (S[index + 1] - '0');
        if (val2 <= 26) {
            char char2 = 'a' + val2 - 1;
            generateEncodings(index + 2, S, current + char2, results);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    if (!(cin >> S)) return 0;

    vector<string> results;
    generateEncodings(0, S, "", results);

    cout << results.size() << "\n";
    for (const string &str : results) {
        cout << str << "\n";
    }

    return 0;
}