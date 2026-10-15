#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve()
{
  int n,m;
  cin>>n>>m;
  int a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<m;i++){
    int sum = 0;
    for(int j=0;j<n;j++){
      sum+=a[j][i];
    }
    cout<<sum<<" ";
  }

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t
    while (t--) {
        solve();
    }

    return 0;
}