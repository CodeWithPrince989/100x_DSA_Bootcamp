#include<iostream>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  //Boundary Traversal
  //First Row(r=0)
  for(int j=0;j<m;j++){
    cout<<a[0][j]<<" ";
  }
  //Last Column(c=m-1)
  for(int i=1;i<n;i++){
    cout<<a[i][m-1]<<" ";
  }
  //Last Row(r=n-1)
  for(int j=m-2;j>=0;j--){
    cout<<a[n-1][j]<<" ";
  }
  //First Column(c=0)
  for(int i=n-2;i>=1;i--){
    cout<<a[i][0]<<" ";
  }
  return 0;
}