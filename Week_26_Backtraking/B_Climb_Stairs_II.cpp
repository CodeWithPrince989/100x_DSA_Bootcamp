#include <iostream>
#include <vector>

using namespace std;

void solve(int remaining, int K, vector<int>& path) {
    if (remaining == 0) {
        for (int i = 0; i < path.size(); ++i) {
            cout << path[i] << (i == path.size() - 1 ? "" : " ");
        }
        cout << "\n";
        return;
    }

    for (int jump = 1; jump <= K && jump <= remaining; ++jump) {
        path.push_back(jump);
        solve(remaining - jump, K, path);
        path.pop_back(); // Backtrack
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    if (cin >> N >> K) {
        vector<int> path;
        solve(N, K, path);
    }

    return 0;
}