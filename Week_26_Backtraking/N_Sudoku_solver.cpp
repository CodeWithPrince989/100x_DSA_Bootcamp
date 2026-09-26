#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isValid(const vector<string>& board, int row, int col, char c) {
    for (int i = 0; i < 9; ++i) {
        // Check row
        if (board[row][i] == c) return false;
        // Check column
        if (board[i][col] == c) return false;
        // Check 3x3 subgrid
        int boxRow = 3 * (row / 3) + i / 3;
        int boxCol = 3 * (col / 3) + i % 3;
        if (board[boxRow][boxCol] == c) return false;
    }
    return true;
}

bool solve(vector<string>& board) {
    for (int r = 0; r < 9; ++r) {
        for (int c = 0; c < 9; ++c) {
            if (board[r][c] == '.') {
                for (char num = '1'; num <= '9'; ++num) {
                    if (isValid(board, r, c, num)) {
                        board[r][c] = num;
                        
                        if (solve(board)) {
                            return true;
                        }
                        
                        // Backtrack
                        board[r][c] = '.';
                    }
                }
                return false; // No valid number fits here
            }
        }
    }
    return true; // All cells filled successfully
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> board(9);
    for (int i = 0; i < 9; ++i) {
        cin >> board[i];
    }

    solve(board);

    for (int i = 0; i < 9; ++i) {
        cout << board[i] << "\n";
    }

    return 0;
}