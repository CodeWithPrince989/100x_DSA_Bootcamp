#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Create a regular array to hold up to 5000 elements
    int arr[5000]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool first = true;
    
    // Look at each number one by one
    for (int i = 0; i < n; i++) {
        int count = 0;
        
        // Count how many times arr[i] appears in the whole array
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        // If it appears exactly once, print it
        if (count == 1) {
            if (!first) {
                cout << " "; // Print space before elements (except the first one)
            }
            cout << arr[i];
            first = false;
        }
    }
    cout << "\n";
    
    return 0;
}