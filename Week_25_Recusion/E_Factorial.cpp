#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) return 1; // Base case
    return n * factorial(n - 1); // Recursive step
}

int main() {
    int n;
    if (cin >> n) {
        cout << factorial(n) << endl;
    }
    return 0;
}