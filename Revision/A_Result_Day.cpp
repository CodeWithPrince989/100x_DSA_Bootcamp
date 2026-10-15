#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
 
const int MOD = 1e9 + 7;
const int INF = 1e9;
 
void solve() {
    long long n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
 
    int target;
    cin >> target;
    long long Pass_cnt = 0;
    long long Fail_cnt = 0;
    for(int j = 0; j < n; j++){
      // Use target instead of a hardcoded 50
      if(arr[j] >= target){
        Pass_cnt += 1;
      } else {
        Fail_cnt += 1;
      }
    }
    cout << "Pass: " << Pass_cnt << endl;
    cout << "Fail: " << Fail_cnt << endl;
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