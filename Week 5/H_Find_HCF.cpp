#include<iostream>
using namespace std;

void findhcf(int a,int b){
  if(a%b==0){
    cout<<b;
  }else{
    cout<<a;
  }
}

int main(){
  findhcf(12,36);
  return 0;
}