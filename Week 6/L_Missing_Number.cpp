#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;
    int duplicate = 0;

    for (int i = 0; i < r; i++) {
        int n;
        cin >> n;
        int arr[n];

        // 1. Correctly read inputs into the array
        for (int j = 0; j < n; j++) {
            cin >> arr[j]; 
        }

        // 2. Simple nested loop to find duplicates
        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[j] == arr[k]) {
                    duplicate++;
                    break; // Move to next element once a duplicate is found
                }
            }
        }
    }

    cout << duplicate;
    return 0;
}

