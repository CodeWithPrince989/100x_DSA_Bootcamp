#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    if (A == B) {
        cout << "Equal" << std::endl;
    } else if (A < B) {
        cout << "A" << std::endl;
    } else {
        cout << "B" << std::endl;
    }

    return 0;
}