#include<iostream>
using namespace std;

int main(){
    // Fast I/O (recommended for competitive programming)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Change data type to long long to prevent overflow
    long long sum = 0; 
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    cout << sum << "\n";
    return 0;
}
