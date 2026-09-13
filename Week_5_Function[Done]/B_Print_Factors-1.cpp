#include<iostream>
using namespace std;

void greet(int n){
  for(int i=1; i<=n; i++){
    if(n%i==0){
      cout<<i<<" ";
    }
  }
}

int main(){
  greet(12);
return 0;
}