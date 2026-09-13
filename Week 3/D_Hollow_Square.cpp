#include<iostream>
using namespace std;

int main(){
    int R;
    cout<< "Enter Row Column" << endl;
    cin>>R;

    for(int i=0; i<R; i++){
      for(int j=0; j<R; j++){
        if(j==0 || j==R-1 || i==0 || i==R-1){
            cout<<"*";
        }else{
          cout<<" ";
        }
      }
      cout<<endl;
    }
  return 0;
}