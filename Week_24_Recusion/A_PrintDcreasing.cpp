#include <iostream>
using namespace std;

void printDecreasing(int x)
{
    while (x >= 1)
    {
        cout << x << "\n";
        x--;
    }
}

int main()
{
    int n;
    if (cin >> n) {
        printDecreasing(n);
    }
    return 0;
}