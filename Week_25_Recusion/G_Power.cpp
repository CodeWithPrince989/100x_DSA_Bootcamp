#include <iostream>
using namespace std;

// Recursive function to calculate a^b
long long power(long long a, long long b) {
    if (b == 0) return 1; // Base case: x^0 = 1
    return a * power(a, b - 1);
}

int main() {
    long long x, n;
    if (cin >> x >> n) {
        cout << power(x, n) << endl;
    }
    return 0;
}