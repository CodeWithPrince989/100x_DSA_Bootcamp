#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int m, n;
    cin>>m>>n;

    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    for(int  i=0; i<n; i++){

        if(i%2==0){
            for(int j=0; j<m; j++){
                cout<<a[j][i]<<" ";
            }
        }else if(i%2!=0){
            for(int j=m-1; j>=0; j--){
                cout<<a[j][i]<<" ";
            }
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}