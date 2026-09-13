#include<iostream>
using namespace std;

int main(){
  int N;
  cout<<"Enter the value of N"<<endl;
  cin>>N;
  if(N<=1000000000){
    if(N%2==0){
      cout<<"EVEN"<<endl;
    }else{
      cout<<"ODD"<<endl;
  }
  }
  return 0;
}
