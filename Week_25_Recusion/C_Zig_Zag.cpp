#include <iostream>
using namespace std;

void nto1(int a)
{
    if (a == 0)
    {
        return;
    }
    cout << a << "\n";
    nto1(a - 1);
}

void twoton(int b)
{
    int c = 1;
    while (c++<b)
    {
        cout << c << "\n";
    }
}

int main()
{
    int n;
    if (cin >> n)
    {
        nto1(n);
        twoton(n);
    }
    return 0;
}