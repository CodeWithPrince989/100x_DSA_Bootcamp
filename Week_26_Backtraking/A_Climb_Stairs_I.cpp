#include <iostream>
#include <vector>

using namespace std;

void findPaths(int N, vector<int>& currentPath) {
    // Base Case: Reached the exact top of the stairs
    if (N == 0) {
        for (int i = 0; i < currentPath.size(); i++) {
            cout << currentPath[i] << (i + 1 == currentPath.size() ? "" : " ");
        }
        cout << "\n";
        return;
    }
    
    // Base Case: Exceeded the target steps
    if (N < 0) {
        return;
    }

    // Try jump of size 1 first (for lexicographical order)
    currentPath.push_back(1);
    findPaths(N - 1, currentPath);
    currentPath.pop_back(); // Backtrack

    // Try jump of size 2 second
    currentPath.push_back(2);
    findPaths(N - 2, currentPath);
    currentPath.pop_back(); // Backtrack
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (cin >> N) {
        vector<int> currentPath;
        findPaths(N, currentPath);
    }

    return 0;
}