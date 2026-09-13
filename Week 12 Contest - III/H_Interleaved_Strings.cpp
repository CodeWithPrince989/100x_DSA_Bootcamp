#include <iostream>
#include <string>

using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int n = S.length();
    int m = T.length();
    int i = 0, j = 0;

    // Interleave until one string is exhausted
    while (i < n && j < m) {
        cout << S[i] << "-" << T[j];
        i++;
        j++;
        
        // Add a dash if there are more characters remaining 
        // in either string to be printed
        if (i < n || j < m) {
            cout << "-";
        }
    }

    // Print remaining characters from S, if any
    while (i < n) {
        cout << S[i];
        i++;
        if (i < n) cout << "-";
    }

    // Print remaining characters from T, if any
    while (j < m) {
        cout << T[j];
        j++;
        if (j < m) cout << "-";
    }

    return 0;
}