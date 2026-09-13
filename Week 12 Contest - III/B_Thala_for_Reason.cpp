#include <iostream>
#include <string>
using namespace std;

int main() {
  int r;
  cin >> r;
  
  for(int i=0; i<r; i++){
    int n;
    cin >> n;

    int sum = 0;
    while(n>0){
        int lastDigit = n % 10;
        n = n/10;
        
        sum += lastDigit;
    }
  if(sum==7){
    cout<<"Thala for a raeson"<<endl;
  }else{
    cout<<"Blocked for a reason"<<endl;
  }}

    return 0;
}