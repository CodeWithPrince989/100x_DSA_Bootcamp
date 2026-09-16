#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int start;
    cin >> start;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = 0;
    for (int i = 0; i < start; i++)
    {
        int s = 0;
        for (int j = 0; j < start; j++)
        {
            s += arr[j+i];
        }
        if (s > max)
        {
            max = s;
        }
    }

    cout << max;

    return 0;
}


//Better Approach by AI
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (k > n || k <= 0) return 0;

    // Calculate sum of the first window
    long long current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long max_sum = current_sum;

    // Slide the window across the array
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << "\n";

    return 0;
}