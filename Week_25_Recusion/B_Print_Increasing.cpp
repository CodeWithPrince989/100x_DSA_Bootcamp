#include <iostream>
using namespace std;

void printIncreasing(int x) {
    if (x == 0) return; // Base case: stop when reaching 0
    
    printIncreasing(x - 1); // Print numbers 1 to (x - 1) first
    cout << x << "\n";        // Then print x
}

int main() {
    int n;
    if (cin >> n) {
        printIncreasing(n);
    }
    return 0;
}