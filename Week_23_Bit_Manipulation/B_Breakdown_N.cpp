#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n;
    if (!(cin >> n)) return 0;

    bool first = true;
    for (int i = 62; i >= 0; i--) {
        unsigned long long power = 1ULL << i;
        if ((n >> i) & 1) {
            if (!first) cout << " ";
            cout << power;
            first = false;
        }
    }
    cout << "\n";

    return 0;
}