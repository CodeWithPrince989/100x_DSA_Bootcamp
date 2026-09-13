#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 1; j <= t; j++) { 
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int r = 2*0;
      while (r < n - 1) { 
          swap(arr[r], arr[r + 1]);
          r += 1;
      }

        cout << "Final array: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
