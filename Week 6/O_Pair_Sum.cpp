#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=1; k<=t; k++){
    
    int n;
    cin >>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

        int target;
        cin>>target;
        int sum;
        for(int j=0; j<=n; j++){
            sum = arr[j]+arr[j+1];
            if(sum==target){
                cout<<target;
                break;
            }else{
                cout<<"0";
                break;
            }
        }
    
    }

  return 0;
}