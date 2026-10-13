#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const int INF = 1e9;

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;
    int Pass_cnt=0;
    int Fail_cnt=0;
    for(int j=0; j<n; j++){
      if(arr[j]>=50){
        Pass_cnt+=1;
      }else{
        Fail_cnt+=1;
      }
    }
    cout<<"Pass: "<<Pass_cnt<<endl;
    cout<<"Fail: "<<Fail_cnt<<endl;
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