// Revisit

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n;
        cin >> n; // Read n for the current test case

        // 1. Print all odd numbers from 1 to n (Increasing order)
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }

        // 2. Determine the largest even number <= n
        int start_even;
        if (n % 2 == 0) {
            start_even = n;
        } else {
            start_even = n - 1;
        }

        // 3. Print all even numbers down to 2 (Decreasing order)
        for (int i = start_even; i >= 2; i -= 2) {
            cout << i << " ";
        }

        cout << endl; // Move to the next line for the next test case
    }

    return 0;
}
