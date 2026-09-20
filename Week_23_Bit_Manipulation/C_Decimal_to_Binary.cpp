#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    if (n == 0) {
        cout << 0 << "\n";
        return 0;
    }

    string binary = "";
    while (n > 0) {
        binary += to_string(n % 2);
        n /= 2;
    }

    // Reverse to get the correct order
    reverse(binary.begin(), binary.end());

    cout << binary << "\n";

    return 0;
}