#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Linear Search
    bool flag = false;
    int target;
    cin>>target;
    for(int j=0; j<n; j++)
        {
            if(arr[j]>target){
                flag = true;
            }
        }
    if(flag=true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}