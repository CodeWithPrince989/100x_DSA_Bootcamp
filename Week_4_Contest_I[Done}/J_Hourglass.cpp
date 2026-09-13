#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Number to get Shifted Pyramid: ";
    cin>>n;

    for(int i=1; i<=n; i++){
          for(int j=1; j<i; j++){
                cout<<" ";
          }
          for(int k=n-i+1; k>0; --k){
                cout<<". ";
          }
      cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=n-2; j>=i; --j){
          cout<<" ";
        }
        for(int k=0; k<=i; k++){
          cout<<". ";
        }
      cout<<endl;
    }
    
    return 0;
}
