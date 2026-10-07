#include<iostream>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    // int sum = n*(n+1)/2;
    // cout<<sum;

    long long sum = 0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<sum;
return 0;
}