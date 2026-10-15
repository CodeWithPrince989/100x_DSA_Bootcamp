#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;


void solve()
{
    int m, n;
    cin >> m >> n;

    // Note: Vector is safer, but keeping your array layout for simplicity
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // Process column by column
    for (int i = 0; i < m; i++) 
    {
        int current_min = INF; 
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < current_min)
            {
                current_min = a[j][i]; //  Update the value instead of printing
            }
        }
        cout << current_min << " "; // 💬 Print the minimum once the column is done
    }
    cout << "\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}