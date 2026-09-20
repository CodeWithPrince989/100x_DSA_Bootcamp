#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    long long X;
    cin >> X;

    bool found = false;
    for (int i = 0; i < N; ++i) {
        if (A[i] == X) {
            cout << (i + 1) << " ";
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }

    cout << "\n";
    return 0;
}