#include <iostream>
using namespace std;

int main() {
    long long n; // Use integer types to prevent floating-point errors
    cin >> n;
    
    // Divide by 10 to drop the last digit, 
    // then use % 10 to get the new last digit.
    int i = (n / 10) % 10; 
    
    cout << i;
    return 0;
}
