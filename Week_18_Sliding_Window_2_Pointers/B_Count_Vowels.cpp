#include <iostream>
#include <string>
using namespace std;

// Helper function to check if a character is a vowel
bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    string s;
    cin >> s;

    int current_vowels = 0;

    // Count vowels in the first window of size K
    for (int i = 0; i < k; i++) {
        if (isVowel(s[i])) {
            current_vowels++;
        }
    }

    // Print count for the first window
    cout << current_vowels;

    // Slide the window across the rest of the string
    for (int i = k; i < n; i++) {
        if (isVowel(s[i])) {
            current_vowels++;
        }
        if (isVowel(s[i - k])) {
            current_vowels--;
        }
        cout << " " << current_vowels;
    }
    cout << "\n";

    return 0;
}