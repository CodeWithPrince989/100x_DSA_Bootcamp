#include<iostream>
using namespace std;


int main(){
  int f;
  cin>>f;
  for(int i=0; i<f; i++){
    int n;
    cin>>n;
    int arr[n];
    for(int j=0; j<n; j++){
      cin>>arr[j];
    }

    int count1 =0;
    int count0 =0;
    for(int j=0; j<n; j++){
      if(arr[j]==1){
        count1++;
      }
      else{
        count0++;
      }
    }
    for(int j=0; j<count0; j++){
      cout<<0<<" ";
    }
    for(int j=0; j<count1; j++){
      cout<<1<<" ";
    }
  }
  return 0;
}