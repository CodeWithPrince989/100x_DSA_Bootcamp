#include <iostream>
using namespace std;

int main() {


        int n;
        cin >> n;

        long long x; // Changed to long long to prevent any potential overflow
        cin >> x;
        long long a[n]; // Changed to long long to maintain precision during operations

        for (int j = 0; j < n; j++) {
            cin >> a[j]; 
        }
        int cnt=0;
       // Changed loop initializations to satisfy 0 < i < j < k < l < n (strict inequalities)
       for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++){
               for(int k=j+1; k<n; k++){
                   for(int l=k+1; l<n; l++){
                       // Changed '=' (assignment) to '==' (comparison)
                       if(x==a[i]-2*a[j]+3*a[k]-4*a[l]){
                           cnt+=1;
                       }
                   }
               }
           }
       }
        cout<<cnt;
    return 0;
}