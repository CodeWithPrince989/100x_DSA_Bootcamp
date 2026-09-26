#include <iostream>
#include <vector>

using namespace std;

void generateSubsequences(int index, const vector<int>& arr, vector<int>& current) {
    if (index == arr.size()) {
        // Print non-empty subsequence
        if (!current.empty()) {
            for (int j = 0; j < current.size(); ++j) {
                cout << current[j] << (j + 1 == current.size() ? "" : " ");
            }
            cout << "\n";
        }
        return;
    }

    // Choice 1: Include arr[index]
    current.push_back(arr[index]);
    generateSubsequences(index + 1, arr, current);

    // Choice 2: Exclude arr[index] (Backtrack)
    current.pop_back();
    generateSubsequences(index + 1, arr, current);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> current;
    generateSubsequences(0, arr, current);

    return 0;
}