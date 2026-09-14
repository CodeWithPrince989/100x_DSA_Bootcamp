#include <iostream>
using namespace std;

void reverse(int arr[], int index)
{
    // Base case: stop when index goes below 0
    if (index < 0)
    {
        return;
    }

    // Print current element
    cout << arr[index] << " ";

    // Recursive call for the previous element
    reverse(arr, index - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Start recursion from the last index (n - 1)
        reverse(arr, n - 1);
    }
    return 0;
}