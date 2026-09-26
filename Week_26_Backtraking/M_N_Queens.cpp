#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n;
vector<string> board;
vector<vector<string>> solutions;
vector<bool> cols, main_diag, anti_diag;

void solve(int row) {
    if (row == n) {
        solutions.push_back(board);
        return;
    }

    for (int col = 0; col < n; ++col) {
        // Check if placing a queen at (row, col) is safe
        if (cols[col] || main_diag[row - col + n - 1] || anti_diag[row + col]) {
            continue;
        }

        // Place queen
        board[row][col] = 'Q';
        cols[col] = main_diag[row - col + n - 1] = anti_diag[row + col] = true;

        // Recurse for the next row
        solve(row + 1);

        // Backtrack
        board[row][col] = '.';
        cols[col] = main_diag[row - col + n - 1] = anti_diag[row + col] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n)) return 0;

    board.assign(n, string(n, '.'));
    cols.assign(n, false);
    main_diag.assign(2 * n - 1, false);
    anti_diag.assign(2 * n - 1, false);

    solve(0);

    // Print total count
    cout << solutions.size() << "\n";

    // Print configurations separated by a blank line
    for (size_t i = 0; i < solutions.size(); ++i) {
        if (i > 0) cout << "\n";
        for (int r = 0; r < n; ++r) {
            cout << solutions[i][r] << "\n";
        }
    }

    return 0;
}