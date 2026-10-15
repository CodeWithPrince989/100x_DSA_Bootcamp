#include <iostream>
using namespace std;
 
int main() {
    int n;
    if (!(cin >> n)) return 0;
 
    // Top half of the arrow (Outputs N lines)
    for (int i = 1; i <= n; i++) {
        // Leading spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        // Arrow body
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                cout << ">";
            } else if (j == i) {
                cout << " >"; 
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }
 
    // Bottom half of the arrow (Starts from 2 to skip the duplicate peak row)
    for (int i = 2; i <= n; i++) {
        // Leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Arrow body
        for (int k = i; k <= n; k++) {
            if (k == i) {
                cout << ">";
            } else if (k == n) {
                cout << " >"; 
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }
 
    return 0;
}
