#include <iostream>
using namespace std;

void sumNumber(long long n, long long current_sum) {
    if (n == 0) {
        cout << current_sum;
        return;
    }
    sumNumber(n - 1, current_sum + n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (cin >> n) {
        sumNumber(n, 0);
        cout << "\n";
    }
    return 0;
}