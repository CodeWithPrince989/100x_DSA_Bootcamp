#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the value of n: "<<endl;
  cin>>n;
  if(n>=1 && n<=100000){
  for(int i=1; i<=n; i++){
     if(i%2==0){
       cout<<i<<" ";
     }
  }
  }else{
    cout<<"Invalid Input"<<endl;
  }
  return 0;
}