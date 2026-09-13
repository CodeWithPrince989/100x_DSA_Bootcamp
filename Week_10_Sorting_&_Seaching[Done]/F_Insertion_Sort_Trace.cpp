#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[500];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Insertion Sort Trace
    // Start from the second element (index 1)
    for(int i = 1; i < n; i++){
        int temp = a[i];
        int j = i - 1;
        int shifts = 0;

        // Compare a[j] with temp to find insertion point
        while(j >= 0 && a[j] > temp){
            a[j + 1] = a[j];
            j--;
            shifts++;
        }
        a[j + 1] = temp;

        // Print the trace for this pass
        cout << "Pass " << i << ": ";
        for(int k = 0; k < n; k++){
            cout << a[k] << (k == n - 1 ? "" : " ");
            // Print the | separator after the current index i
            if(k == i) cout << " | ";
        }
        cout << ", shifts = " << shifts << endl;
    }

    return 0;
}