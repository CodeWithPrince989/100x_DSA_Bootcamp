#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

  int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }

   for (int j=0; j<n; j++){
      
      if(arr[j]==arr[j+1]){
        cout<<"Yes";
        break;
      }else{
        cout<<"No";
          break;
      }
    }
      

    cout << "\n";
    return 0;
}