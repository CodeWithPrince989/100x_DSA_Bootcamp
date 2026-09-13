#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Optimize I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> arr(n);
    long long total_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total_sum += arr[i];
    }

    long long left_sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        left_sum += arr[i];
        
        // right_sum includes arr[i] through arr[n-1]
        long long right_sum = total_sum - (left_sum - arr[i]);

        if (left_sum == right_sum) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}