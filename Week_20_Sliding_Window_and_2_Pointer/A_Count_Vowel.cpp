#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int vowel_count = 0;

    // Count vowels in the first window of size K
    for (int i = 0; i < k; i++) {
        if (isVowel(s[i])) {
            vowel_count++;
        }
    }

    cout << vowel_count;

    // Slide the window across the rest of the string
    for (int i = k; i < n; i++) {
        if (isVowel(s[i])) {
            vowel_count++;
        }
        if (isVowel(s[i - k])) {
            vowel_count--;
        }
        cout << " " << vowel_count;
    }

    cout << "\n";
    return 0;
}