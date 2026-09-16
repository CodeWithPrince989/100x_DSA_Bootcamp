#include <iostream>
#include <map>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    map<long long, int> freq; // Element ki frequency track karne ke liye
    int distinct_count = 0;   // Distinct elements ka count

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            long long x;
            cin >> x;
            // Agar element pehle se present nahi tha, toh distinct count badhega
            if (freq[x] == 0) {
                distinct_count++;
            }
            freq[x]++;
        } 
        else if (type == 2) {
            long long x;
            cin >> x;
            // Agar element exist karta hai, toh saari occurrences hata do
            if (freq.find(x) != freq.end()) {
                distinct_count--;
                freq.erase(x);
            }
        } 
        else if (type == 3) {
            cout << distinct_count << "\n";
        } 
        else if (type == 4) {
            long long x;
            cin >> x;
            if (freq.find(x) != freq.end()) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}