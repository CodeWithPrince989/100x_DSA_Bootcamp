#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    if (cin >> a >> b) {
        long long ans_and = a & b;
        long long ans_or  = a | b;
        long long ans_xor = a ^ b;

        cout << ans_and << " " << ans_or << " " << ans_xor << "\n";
    }
    return 0;
}