


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isSorted = true;
    for (int i = 0; i < n - 1; i++) {
        // If any element is greater than the next, it's not sorted
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}