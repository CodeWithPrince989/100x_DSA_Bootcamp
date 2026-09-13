#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int n = s.length();
    int i = 0;
    
    while (i < n) {
        char currentChar = s[i];
        int count = 0;
        
        // Count consecutive occurrences of the current character
        while (i < n && s[i] == currentChar) {
            count++;
            i++;
        }
        
        // Print character
        cout << currentChar;
        
        // Print count only if it's greater than 1 (as per problem statement)
        if (count > 1) {
            cout << count;
        }
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}