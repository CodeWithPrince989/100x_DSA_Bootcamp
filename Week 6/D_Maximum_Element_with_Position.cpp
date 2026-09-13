#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = arr[0], location = 1;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > ans){
            ans = arr[i];
            location = i + 1;
        }
    }

    cout<<ans<< " " <<location<<  endl;

    return 0;
}
