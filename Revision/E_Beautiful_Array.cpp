#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool found = false;
    // Note: if checking pairs, loop should go up to n - 1
    for (int j = 0; j < n - 1; j++){
        if (arr[j] == arr[j + 1]) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}