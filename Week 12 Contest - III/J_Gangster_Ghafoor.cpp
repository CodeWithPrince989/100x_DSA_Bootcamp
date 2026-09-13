#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> grid(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }

    // Define the sequence of coordinates along the boundary
    vector<pair<int, int>> path;

    // 1. Left column: bottom to top (excluding top-left corner)
    for (int i = N - 1; i > 0; --i) path.push_back({i, 0});
    
    // 2. Top row: left to right (excluding top-right corner)
    for (int j = 0; j < M - 1; ++j) path.push_back({0, j});
    
    // 3. Right column: top to bottom (excluding bottom-right corner)
    for (int i = 0; i < N - 1; ++i) path.push_back({i, M - 1});
    
    // 4. Bottom row: right to left (excluding bottom-left corner)
    for (int j = M - 1; j > 0; --j) path.push_back({N - 1, j});

    // Traverse and print
    for (auto p : path) {
        if (grid[p.first][p.second] == -1) break;
        cout << grid[p.first][p.second] << " ";
    }

    return 0;
}