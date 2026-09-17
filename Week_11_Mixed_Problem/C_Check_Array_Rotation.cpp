#include <iostream>
using namespace std;

int main() {
    int f;
    cin>>f;

    for(int i=1; i<=f; i++){
        int n;
        cin>>n;

        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        int loc=0;
        for(int j=0; j<n; j++){
            if(arr[j]<arr[loc]){
                loc=j;
            }
        }
        cout<<loc<<endl;
    }
    return 0;
}