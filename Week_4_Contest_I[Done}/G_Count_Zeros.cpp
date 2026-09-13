#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter to Print Count of Zeros: "; 
    cin >> n;

    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }

    int digit;
    int cnt = 0;
    while (n != 0) {
        digit = n % 10;
        if (digit == 0) {
            ++cnt;
        }
        n = n / 10; 
    }

    cout << cnt << endl;
    return 0;
}
