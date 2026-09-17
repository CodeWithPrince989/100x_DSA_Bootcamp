#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        int arr[x];
        for(int j=0; j<x; j++){
            cin>>arr[j];
        }

        //Push Zero's At End
        for(int j=0; j<x; j++){
            if(arr[j]==0){
                for(int k=j+1; k<x; k++){
                    if(arr[k]!=0){
                        swap(arr[j],arr[k]);
                    }
                }
            }
            cout<<arr[j]<<" ";
        }
    }
    return 0;
}