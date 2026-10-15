#include<iostream>
using namespace std;
    
int main(){
    int x, n;
    cin>>x>>n;

    long long pow = 1;
    for(int i=1; i<=n; i++){
        pow*=x;
    }

    cout<<pow;
return 0;
}