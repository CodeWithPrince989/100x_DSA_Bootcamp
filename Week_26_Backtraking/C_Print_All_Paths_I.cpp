#include <iostream>
#include <string>

using namespace std;

void findPaths(int i, int j, int N, int M, string path) {
    // Base Case: Reached the bottom-right corner
    if (i == N && j == M) {
        cout << path << "\n";
        return;
    }

    // Try moving Right
    if (j < M) {
        findPaths(i, j + 1, N, M, path + 'R');
    }

    // Try moving Down
    if (i < N) {
        findPaths(i + 1, j, N, M, path + 'D');
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (cin >> N >> M) {
        findPaths(1, 1, N, M, "");
    }

    return 0;
}