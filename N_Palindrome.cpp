#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;

    int original=n;
    int ans = 0;
    while(n>0){
        ans = (ans*10) + (n%10);
        n = n/10;  
    }
  if(ans==original){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
  return 0;
}