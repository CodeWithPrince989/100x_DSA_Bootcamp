#include<iostream>
using namespace std;

// Pass 'n' so the function knows when to stop
void printArray(int arr[], int i, int n){
    // Base case: stop when index 'i' reaches total size 'n'
    if (i == n) {
        return;
    }
    
    // Print current element followed by a space
    cout << arr[i] << " ";
    
    // Recursive call for the next index
    printArray(arr, i + 1, n);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n){
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Start recursion from index 0
        printArray(arr, 0, n);
    }
    return 0;
}