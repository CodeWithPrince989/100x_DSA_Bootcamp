#include<iostream>
using namespace std;

int main(){
    int R;
    cout<< "Enter Row Column" << endl;
    cin>>R;

    for(int i=0; i<R; i++){
      for(int j=0; j<R; j++){
        cout<<"*";
      }
      cout<<endl;
    }
  return 0;
}