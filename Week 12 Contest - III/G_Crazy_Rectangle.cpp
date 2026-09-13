#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int num = 1;
    char ch = 'a';
    bool is_number = true;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (is_number) {
                cout << num;
                num = (num % 9) + 1; // Resets 1-9
            } else {
                cout << ch;
                ch = (ch == 'z') ? 'a' : (char)(ch + 1); // Resets a-z
            }
            is_number = !is_number; // Toggle for next cell
        }
        cout << endl; // New line after each row
    }

    return 0;
}