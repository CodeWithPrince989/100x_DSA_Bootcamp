#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    // Map mein element aur uska 1-based index store karenge
    map<long long, int> mp;
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        mp[val] = i + 1; // 1-based index
    }

    // Queries process karein
    for (int i = 0; i < q; i++) {
        long long x;
        cin >> x;
        
        // Check karein ki element map mein hai ya nahi
        if (mp.find(x) != mp.end()) {
            cout << mp[x] << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}