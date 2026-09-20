#include <iostream>
#include <string>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    unsigned long long decimal_val = 0;
    for (char c : s) {
        decimal_val = decimal_val * 2 + (c - '0');
    }

    cout << decimal_val << "\n";

    return 0;
}