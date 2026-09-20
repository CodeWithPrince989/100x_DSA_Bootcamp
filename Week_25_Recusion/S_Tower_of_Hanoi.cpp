#include <iostream>

using namespace std;

void solveHanoi(int n, char src, char aux, char dest) {
    // Base case: If there are no disks to move, return
    if (n == 0) {
        return;
    }

    // Step 1: Move n-1 disks from src to aux using dest
    solveHanoi(n - 1, src, dest, aux);

    // Step 2: Move the nth disk from src to dest
    cout << "Move " << src << " to " << dest << "\n";

    // Step 3: Move n-1 disks from aux to dest using src
    solveHanoi(n - 1, aux, src, dest);
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        solveHanoi(n, 'A', 'B', 'C');
    }

    return 0;
}