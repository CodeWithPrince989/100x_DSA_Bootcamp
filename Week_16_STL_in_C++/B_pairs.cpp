#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, string> p;

    p.first = 10;
    p.second = "Prince";

    cout << p.first << endl;
    cout << p.second << endl;
}


void explainPair() {
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};

    cout << p.first << " " << p.second.second << " " << p.second.first;

    pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;
}