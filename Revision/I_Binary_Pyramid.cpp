#include <iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n; // Read the dynamic row count from the judge
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                cout << 0;
            } else {
                cout << 1;
            }
        }
        cout << endl;
    }
    return 0;
}
