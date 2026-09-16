#include<iostream>
using namespace std;

int main(){
  //Count Primes
  int n;
  cin>>n;  
  int cnt=0; 
  int i;
  for(i=2; i<n; i++){
    if(i%2!=0){
      cnt++;
    }
    else{
      continue;
    }
  }
  cout<<cnt;
  return 0;
}