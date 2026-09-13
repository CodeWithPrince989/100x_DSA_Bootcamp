#include<iostream>
using namespace std;

int main(){
  int f;
  cin>>f;
  int sum=0;
  for(int k=1; k<=f; k++){
    int x, y;
    cin>>x>>y;
    
    for(int i=x; i<=y; i++){
      sum+=i;
    }
    cout<<sum<<endl;
  }
  
  return 0;
}