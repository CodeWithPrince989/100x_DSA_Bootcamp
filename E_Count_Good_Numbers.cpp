#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int good_count = 0;
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;

        // Condition 1: Factor of 18 (Handle x == 0 safely to avoid runtime error)
        bool is_factor_of_18 = (x != 0 && 18 % x == 0);

        // Condition 2: Multiple of 45
        bool is_multiple_of_45 = (x % 45 == 0);

        if (is_factor_of_18 || is_multiple_of_45) {
            good_count++;
        }
    }

    cout << good_count << "\n";

    return 0;
}
