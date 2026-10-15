#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;

    int positive = 0;
    int negative = 0;
    int even = 0;
    int odd = 0;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>0)
            positive++;
        else if(arr[i]<0)
             negative++;
        
        // Even & Odd
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    
    cout <<  positive << endl;
    cout <<  negative << endl;
    cout <<  even << endl;
    cout << odd << endl;
    
    return 0;
}
