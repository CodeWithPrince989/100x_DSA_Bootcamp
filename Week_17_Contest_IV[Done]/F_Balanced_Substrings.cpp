#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isVowel(char c) {
    char ch = tolower(c);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    string s;
    cin >> s;

    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + (isVowel(s[i]) ? 1 : 0);
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        int length = r - l + 1;
        int vowels = pref[r] - pref[l - 1];

        // Balanced if vowels equal consonants (2 * vowels == total length)
        if (2 * vowels == length) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}