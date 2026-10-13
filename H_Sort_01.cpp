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

    for(int i=0; i<n; i++){
        
        int t;
        cin>>t;
        bool arr[t];
        for(int i=0; i<t; i++){
            cin>>arr[i];
        }

        int count_0 = 0;
        for(int i=0; i<t; i++){
            if(arr[i]==0){
                count_0+=1;
            }
        }

        bool bool_arr[t];
        for(int i=0; i<t; i++){
            if(count_0>0){
                bool_arr[i]=0;
                count_0-=1;
            }else{
                bool_arr[i]=1;
            }
        }

        for(int i=0; i<t; i++){
            cout<<bool_arr[i]<<" ";
        }
        cout<<endl;
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