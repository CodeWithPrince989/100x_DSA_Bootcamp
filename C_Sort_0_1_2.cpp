#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        if (val == 0) count0++;
        else if (val == 1) count1++;
        else if (val == 2) count2++;
    }

    // Print all 2s first
    for (int i = 0; i < count2; i++) {
        cout << 2 << " ";
    }
    // Print all 1s next
    for (int i = 0; i < count1; i++) {
        cout << 1 << " ";
    }
    // Print all 0s last
    for (int i = 0; i < count0; i++) {
        cout << 0 << " ";
    }

    cout << "\n";
    return 0;
}