#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x
    cin>>x;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = 0;
    for(l=0; l<n; l++){
        for(r=l; r<n; r++){
            int sum=0;
            for(int i=l; i<=r; i++){
                sum += arr[i];
            }
            // ans += sum;
            if(sum==x){
                cout<<"YES";
            }else{
                cout<<"NO"
            }
        }
    }
}