#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    long long first;
    cin >> first;

    long long and_res = first;
    long long or_res = first;
    long long xor_res = first;

    for (int i = 1; i < n; ++i) {
        long long val;
        cin >> val;
        and_res &= val;
        or_res |= val;
        xor_res ^= val;
    }

    cout << and_res << " " << or_res << " " << xor_res << "\n";

    return 0;
}