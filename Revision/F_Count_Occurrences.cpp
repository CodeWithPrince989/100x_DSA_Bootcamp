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
    
    int key;
    cin>>key;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            count+=1;
        }
    }
    cout<<count;
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