#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<long long, long long> prefix_counts;
    prefix_counts[0] = 1; // Base case for subarrays starting from index 0

    long long current_sum = 0;
    long long count = 0;

    for (int i = 0; i < n; i++) {
        current_sum += a[i];

        // Check if there is a prefix sum we can subtract to get sum x
        if (prefix_counts.find(current_sum - x) != prefix_counts.end()) {
            count += prefix_counts[current_sum - x];
        }

        // Store the frequency of current prefix sum
        prefix_counts[current_sum]++;
    }

    cout << count << "\n";

    return 0;
}