#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int single_number = 0;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        single_number ^= val; // XOR each element
    }

    cout << single_number << "\n";

    return 0;
}