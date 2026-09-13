#include<iostream>
using namespace std;

int main(){
  int N, F;
  cout<<"Enter the value of N and F"<<endl;
  cin>>N>>F;
  if(N>=1 || F <= 1000000000){
    if(F%N==0){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
  }
  }
  return 0;
}
