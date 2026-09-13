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
  //Search in a  2D Matrix
  int target;
  cin>>target;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(a[i][j]==target){
        cout<<"Found at "<<i<<" "<<j<<endl;
        break;
      }else{
         cout<<"Not Found"<<endl;
        break;
      }
    }
  }
  return 0;
}