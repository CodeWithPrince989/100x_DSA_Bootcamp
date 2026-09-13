#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long key;
    if (!(cin >> n >> key)) return 0;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Maps prefix_sum -> first occurrence index (1-based)
    unordered_map<long long, int> first_occurrence;

    // Base case: prefix sum of 0 exists before the first element (index 0)
    first_occurrence[0] = 0;

    long long current_sum = 0;

    for (int i = 0; i < n; i++) {
        current_sum += arr[i];

        // Check if a prefix sum exists such that current_sum - target = previous_prefix_sum
        long long target = current_sum - key;
        if (first_occurrence.find(target) != first_occurrence.end()) {
            int left_index = first_occurrence[target] + 1;
            int right_index = i + 1; // 1-based index
            cout << left_index << " " << right_index << "\n";
            return 0;
        }

        // Store the first time this prefix sum appears
        if (first_occurrence.find(current_sum) == first_occurrence.end()) {
            first_occurrence[current_sum] = i + 1;
        }
    }

    cout << -1 << "\n";
    return 0;
}