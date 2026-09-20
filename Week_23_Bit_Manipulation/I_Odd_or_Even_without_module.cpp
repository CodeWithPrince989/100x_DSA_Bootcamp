#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    if ((n & 1) == 0) {
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }

    return 0;
}