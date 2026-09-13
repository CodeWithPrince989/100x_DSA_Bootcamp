#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the value of n: "<<endl;
  cin>>n;
  if(n>=1 && n<=2*100000){
  for(int i=n; i>=1; i--){
    cout<<i<<" ";
  }
  }else{
    cout<<"Invalid Input"<<endl;
  }
  return 0;
}