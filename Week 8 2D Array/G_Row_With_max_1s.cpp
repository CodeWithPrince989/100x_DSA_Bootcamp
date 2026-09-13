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
  //Row with maximum no. of 1s
  int bestRow =-1;
  int maxCount = 0;
  for(int i=0;i<n;i++){
    int count = 0;
    for(int j=0;j<m;j++){
      if(a[i][j]==1){
        count++;
      }
    }
    if(count>maxCount){
      maxCount = count;
      bestRow = i;
    }
  }
  cout<<bestRow<<endl;
  return 0;
}