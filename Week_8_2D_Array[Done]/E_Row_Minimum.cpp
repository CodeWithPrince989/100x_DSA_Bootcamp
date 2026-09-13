#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Initialize once outside the loops
    int min_val = 1000000; 

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int current;
            cin >> current;
            if (current < min_val) {
                min_val = current;
            }
        }
    }

    cout << min_val << " ";
    return 0;
}
