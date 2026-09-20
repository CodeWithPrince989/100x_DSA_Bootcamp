#include <iostream>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;

    if (n > 0 && (n & (n - 1)) == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}