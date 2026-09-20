#include <iostream>
using namespace std;

void reverseNumber(int n) {
    // Base case: stopped when no digits remain
    if (n == 0) return;

    // Print the last digit
    cout << n % 10;

    // Recursive call with the remaining digits
    reverseNumber(n / 10);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        if (n == 0) {
            cout << 0;
        } else {
            reverseNumber(n);
        }
        cout << "\n";
    }
    return 0;
}