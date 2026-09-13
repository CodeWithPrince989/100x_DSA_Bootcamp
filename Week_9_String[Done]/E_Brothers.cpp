#include <iostream>
#include <string>
using namespace std;

int main() {
    string first_name1, last_name1;
    string first_name2, last_name2;

    // Reading the input
    cin >> first_name1 >> last_name1;
    cin >> first_name2 >> last_name2;

    // Comparing the last names
    if (last_name1 == last_name2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}