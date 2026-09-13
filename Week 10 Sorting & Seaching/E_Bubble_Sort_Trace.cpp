#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[500]; // Fixed size array based on problem constraints (N <= 500)
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Bubble Sort
    for(int i = 0; i < n - 1; i++){
        int swapCount = 0; // Track swaps for this specific pass
        
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                // Manual swap
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                
                swapCount++;
            }
        }
        
        // Print the status after each pass
        cout << "Pass " << i + 1 << ": ";
        for(int k = 0; k < n; k++){
            cout << a[k] << (k == n - 1 ? "" : " ");
        }
        cout << " , swaps = " << swapCount << endl;
        
        // Stop early if the array is already sorted
        if(swapCount == 0) break;
    }
    
    return 0;
}