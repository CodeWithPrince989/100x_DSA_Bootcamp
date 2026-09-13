#include <iostream>
#include <string>
using namespace std;

// Global arrays taaki large size (10^5) ke liye stack overflow na ho
int pref[100005];

// Helper function to check vowel
bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    // 1-based indexing ke liye string ko thoda adjust ya loop me handle kar lenge
    // pref[i] store karega vowels ka count index 0 se leke i-1 tak (0-based to 1-based shift)
    pref[0] = 0;
    for (int i = 0; i < n; i++) {
        int vowel_here = isVowel(s[i]) ? 1 : 0;
        pref[i + 1] = pref[i] + vowel_here;
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        
        // 1-based indexing mein range [l, r] ke vowels:
        // pref[r] - pref[l - 1]
        int ans = pref[r] - pref[l - 1];
        cout << ans << "\n";
    }

    return 0;
}