#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    for (int i = 0; i < n; i++) {
        // 1. Print the leading spaces
        for (int k = 0; k < n - i - 1; k++) {
            cout << " ";
        }
        
        // 2. Print the stars separated by spaces
        for (int j = 0; j <= i; j++) {
            cout << "*";
            if (j < i) {
                cout << " "; // Print a space between stars, but not after the last star
            }
        }
        
        cout << endl;
    }
    return 0;
}
