#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N, M;
vector<vector<int>> grid;

void findPaths(int r, int c, string path) {
    // Base Case: Reached the bottom-right corner
    if (r == N - 1 && c == M - 1) {
        cout << path << "\n";
        return;
    }

    // Move Right ('R')
    if (c + 1 < M && grid[r][c + 1] == 0) {
        findPaths(r, c + 1, path + 'R');
    }

    // Move Down ('D')
    if (r + 1 < N && grid[r + 1][c] == 0) {
        findPaths(r + 1, c, path + 'D');
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> N >> M)) return 0;

    grid.resize(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }

    // Start recursion if the starting cell is free
    if (grid[0][0] == 0) {
        findPaths(0, 0, "");
    }

    return 0;
}