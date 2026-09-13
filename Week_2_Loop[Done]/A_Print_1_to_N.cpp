#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the value of n: "<<endl;
  cin>>n;
  if(n>=1 && n<=2*100000){
  for(int i=1; i<=n; i++){
    cout<<i<<endl;
  }
  }else{
    cout<<"Invalid Input"<<endl;
  }
}