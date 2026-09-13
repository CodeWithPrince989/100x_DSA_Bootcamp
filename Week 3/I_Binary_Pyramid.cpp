#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter Row" << endl;
    cin>>n;

    bool isOne = 1;
    bool isZero = 0;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<isOne;
            cout<<isZero;
        }
        cout<<endl;
    }
  return 0;
}