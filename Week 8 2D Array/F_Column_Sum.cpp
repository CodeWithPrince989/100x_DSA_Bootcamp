#include<iostream>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }}
  //Column Sum
  for(int i=0;i<m;i++){
    int sum=0;
    for(int j=0;j<n;j++){
      sum+=a[j][i];
    }
    cout<<sum<<" ";
  }
  return 0;
}