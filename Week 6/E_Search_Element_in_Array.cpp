#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int target;
    cin>>target;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[n];
    }

    for(int i=0; i<n; i++){
        if(target==arr[i]){
            cout<<"YES";
            break;
        }else{
            cout<<"NO";
            break;
        }
    }
    return 0;
}
