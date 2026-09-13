#include<iostream>
using namespace std;

int main(){
  int A, B;
  cout<<"Enter Values of A and B: \n";
  cin>>A>>B;
  if(A>=1 || B <= 1000000000){
    if(A > B){
      cout<<"Min = " << A <<endl;
    }else{
      cout<<"Max = " << B <<endl;
  }
  }
  return 0;
}
