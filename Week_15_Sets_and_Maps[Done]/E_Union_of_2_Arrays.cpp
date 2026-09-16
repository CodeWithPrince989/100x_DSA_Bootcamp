#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    unordered_map<int, int> freq;
    int distinct_count = 0;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            if (freq[x] == 0) {
                distinct_count++;
            }
            freq[x]++;
        } 
        else if (type == 2) {
            int x;
            cin >> x;
            if (freq.count(x) && freq[x] > 0) {
                freq[x]--;
                if (freq[x] == 0) {
                    distinct_count--;
                }
            }
        } 
        else if (type == 3) {
            cout << distinct_count << "\n";
        } 
        else if (type == 4) {
            int x;
            cin >> x;
            if (freq.count(x) && freq[x] > 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}