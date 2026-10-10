#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Found a factor, not prime
        }
    }
    return true; // No factors found, it is prime
}

// Function that takes N as a parameter and prints the required primes
void printPrimes(int N) {
    bool first = true;
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            if (!first) {
                cout << " "; // Print a single space before subsequent numbers
            }
            cout << i;
            first = false;
        }
    }
    cout << endl;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    if (cin >> N) {
        printPrimes(N);
    }
    
    return 0;
}
