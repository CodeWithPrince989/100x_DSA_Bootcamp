#include<iostream>
using namespace std;

int main(){
  int n, m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    int b[m];
    for(int i=0; i<m; i++){
      cin>>b[i];
    }

    //Merging Two Arrays
    int c[n+m];
    int i=0, j=0, k=0;
    while(i<n && j<m){
      if(a[i]<b[j]){
        c[k]=a[i];
        i++;
      }else{
        c[k]=b[j];
        j++;
      }
      k++;
    }
    while(i<n){
      c[k]=a[i];
      i++;
      k++;
    }
    while(j<m){
      c[k]=b[j];
      j++;
      k++;
    }
    for(int i=0; i<n+m; i++){
      cout<<c[i]<<" ";
    }
  return 0;
  }