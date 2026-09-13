#include <iostream>
#include <string>

using namespace std;

int main() {
    string time;
    cin >> time;

    // The time is in HH:MM format
    // HH is at index 0,1 and MM is at index 3,4
    string hh = time.substr(0, 2);
    string mm = time.substr(3, 2);

    if (hh == mm) {
        cout << "Mogambo is happy" << endl;
    } else {
        cout << "Mogambo is sad" << endl;
    }

    return 0;
}