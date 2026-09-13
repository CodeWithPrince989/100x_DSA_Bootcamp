#include<iostream>
using namespace std;
 
// Function to count factors in O(sqrt(N)) time
long long countFactors(long long n) {
    long long count = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++; // i is a factor
            if (i * i != n) {
                count++; // n / i is also a factor
            }
        }
    }
    return count;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long a, b;
    if (!(cin >> a >> b)) return 0;
 
    long long count_a = countFactors(a);
    long long count_b = countFactors(b);
 
    if (count_a > count_b) {
        cout << "A\n";
    } else if (count_b > count_a) {
        cout << "B\n";
    } else {
        cout << "DRAW\n";
    }
 
    return 0;
}