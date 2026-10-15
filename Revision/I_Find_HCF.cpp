#include<iostream>
using namespace std;
    
int main(){
    int n, m; 
    cin >> n >> m; 
 
    // Euclidean algorithm using a while loop
    while(m != 0) {
        int remainder = n % m;
        n = m;
        m = remainder;
    }
    
    // n now holds the HCF
    cout << n;
    
    return 0;
}
