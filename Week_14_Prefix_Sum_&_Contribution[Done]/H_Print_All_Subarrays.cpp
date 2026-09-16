#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int k=0; k<n; k++){
        cin>>arr[k];
    }

    for(int l=0; l<n; l++){
        for(int r=l; r<n; r++){
            //[l,r]
            for(int i=l; i<=r; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    
}