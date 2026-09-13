#include<iostream>
using namespace std;

int main(){
  int N, M;
  cout<<"Enter the value of N and M"<<endl;
  cin>>N>>M;
  int last_digit_N = N%10;
  int last_digit_M = M%10;
  if(N>=1 || M>=1000){
      
      cout<< last_digit_N+last_digit_M << endl;
  }
  else{
    cout<< "N should be greater than 1 and M should be less than 1000!";
  }
  return 0;
}
