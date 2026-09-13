#include <iostream>
#include<string>
using namespace std;

int main() {
    //Binary Search

    //Taking Input from user
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    
    string target;
    cin>>target;


    int l=0;
    int r=n-1;
    int mid = (l+r)/2;
    bool flag=false;
    while(r >= l) {
        int mid = l + (r - l) / 2; // Recalculate mid inside the loop

        if(arr[mid] == target) {
            flag = true;
            break; // Found it, stop searching
        } 
        else if(arr[mid] > target) {
            r = mid - 1; // Search the left half
        } 
        else {
            l = mid + 1; // Search the right half
        }
        
    }
    if(flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}