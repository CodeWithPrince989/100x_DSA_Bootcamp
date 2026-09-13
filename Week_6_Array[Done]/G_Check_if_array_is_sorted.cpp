#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // int target;
    // cin >> target;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            cout<<"Yes";
            break;
        }else{
            cout<<"No";
            break;
        }
    }
    
    return 0;
}
