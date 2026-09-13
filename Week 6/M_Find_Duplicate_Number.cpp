#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int duplicate = -1;

    // Compare every element with all elements after it
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicate = arr[i];
                break; 
            }
        }
        if (duplicate != -1) break; // Stop completely once found
    }

    cout << "Duplicate number: " << duplicate;
    return 0;
}
