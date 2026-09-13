#include <iostream>
using namespace std;

int main() {
    long long n;

    cout << "Enter Number: ";
    cin >> n;

    while (n > 0) {
        cout << n % 10;
        n /= 10;
    }
    return 0;
}