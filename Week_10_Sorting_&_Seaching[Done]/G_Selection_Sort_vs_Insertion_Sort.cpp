#include <iostream>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;

        // Use two static-size arrays to hold the input
        int a[5000], b[5000];
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            a[i] = val;
            b[i] = val;
        }

        // Selection Sort
        long long swap_count = 0;
        for (int i = 0; i < n - 1; i++) {
            int loc = i;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[loc]) {
                    loc = j;
                }
            }
            // Only swap if the minimum element is not already at the current position
            if (loc != i) {
                int temp = a[i];
                a[i] = a[loc];
                a[loc] = temp;
                swap_count++;
            }
        }

        // Insertion Sort
        long long shift_count = 0;
        for (int i = 1; i < n; i++) {
            int temp = b[i];
            int j = i - 1;
            while (j >= 0 && b[j] > temp) {
                b[j + 1] = b[j];
                j--;
                shift_count++;
            }
            b[j + 1] = temp;
        }

        // Compare counts
        if (swap_count < shift_count) {
            cout << "Selection Sort" << endl;
        } else if (shift_count < swap_count) {
            cout << "Insertion Sort" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }
    return 0;
}