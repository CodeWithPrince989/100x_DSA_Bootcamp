#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findCombinations(int index, int target, vector<int>& candidates, vector<int>& current, vector<vector<int>>& results) {
    if (target == 0) {
        results.push_back(current);
        return;
    }

    for (int i = index; i < candidates.size(); ++i) {
        if (candidates[i] > target) break; // Optimization since array is sorted

        current.push_back(candidates[i]);
        findCombinations(i, target - candidates[i], candidates, current, results); // Stay at index 'i' to allow repeat use
        current.pop_back(); // Backtrack
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target;
    if (!(cin >> n >> target)) return 0;

    vector<int> candidates(n);
    for (int i = 0; i < n; ++i) {
        cin >> candidates[i];
    }

    // Sort to handle candidates in increasing order
    sort(candidates.begin(), candidates.end());

    vector<vector<int>> results;
    vector<int> current;

    findCombinations(0, target, candidates, current, results);

    // Print total count
    cout << results.size() << "\n";

    // Print each combination
    for (const auto& comb : results) {
        cout << comb.size();
        for (int num : comb) {
            cout << " " << num;
        }
        cout << "\n";
    }

    return 0;
}