#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Direction mappings in lexicographical order: 'D', 'L', 'R', 'U'
int dr[] = {1, 0, 0, -1};
int dc[] = {0, -1, 1, 0};
char dir[] = {'D', 'L', 'R', 'U'};

void solve(int r, int c, int n, vector<vector<int>>& grid, string& path, vector<string>& result) {
    // Base Case: Reached destination
    if (r == n - 1 && c == n - 1) {
        result.push_back(path);
        return;
    }

    // Mark current cell as visited
    grid[r][c] = 0;

    // Try all 4 moves in lexicographical order
    for (int i = 0; i < 4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];

        // Check boundary and validity
        if (nr >= 0 && nr < n && nc >= 0 && nc < n && grid[nr][nc] == 1) {
            path.push_back(dir[i]);
            solve(nr, nc, n, grid, path, result);
            path.pop_back(); // Backtrack
        }
    }

    // Unmark current cell (Backtrack)
    grid[r][c] = 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // If start or end cell is blocked, no path is possible
    if (grid[0][0] == 0 || grid[n - 1][n - 1] == 0) {
        cout << 0 << "\n";
        return 0;
    }

    vector<string> result;
    string path = "";
    solve(0, 0, n, grid, path, result);

    if (result.empty()) {
        cout << 0 << "\n";
    } else {
        cout << result.size() << "\n";
        for (const string& p : result) {
            cout << p << "\n";
        }
    }

    return 0;
}