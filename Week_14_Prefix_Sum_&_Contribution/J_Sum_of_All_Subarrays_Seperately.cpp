#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Har starting index i ke liye
    for (int i = 0; i < n; i++) {
        long long current_sum = 0;
        // Ending index j ko i se aage badhayein
        for (int j = i; j < n; j++) {
            current_sum += arr[j];
            cout << current_sum << "\n";
        }
    }

    return 0;
}