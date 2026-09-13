#include <iostream>
using namespace std;


void nCr(int n, int r) {
    if (r < 0 || r > n) {
        cout << 0;
        return;
    }


    if (r > n / 2) {
        r = n - r;
    }

    long long ans = 1;
    for (int i = 1; i <= r; i++) {
        ans = ans * (n - i + 1);
        ans = ans / i;
    }
    cout << ans;
}

int main() {
    int n, r;
    cin >> n >> r;
    nCr(n, r);
    return 0;
}
