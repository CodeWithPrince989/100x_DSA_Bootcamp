#include<iostream>
using namespace std;

int main(){
  int L, R;
  cout<<"Enter Small value of L and a Large Value of R: "<<endl;
  cin>>L>>R;
  if(L>=-100000 && R<=100000){
  for(int i=L; i<=R; i++){
    cout<<i<<" ";
  }
  }else{
    cout<<"Invalid Input"<<endl;
  }
  return 0;
}