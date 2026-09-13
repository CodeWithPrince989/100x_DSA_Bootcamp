#include<iostream>
using namespace std;

int main(){
  int X, Y;
  cout << "Enter the value of X and Y" << endl;
  cin>>X>>Y;

  if(X==0 && Y==0){
    cout<<"Origin"<<endl;
  }
  else if(Y==0 && X>0){
    cout<<"X - Axis"<<endl;
  }
  else if(X==0 && Y>0){
    cout<<"Y - Axis"<<endl;
  }
  else if(X>0 && Y>0){
    cout<<"1st Quadrant"<<endl;
  }
  else if(X<0 && Y>0){
    cout<<"2nd Quadrant"<<endl;
  }
  else if(X<0 && Y<0){
    cout<<"3nd Quadrant"<<endl;
  }
  else if(X>0 && Y<0){
    cout<<"4nd Quadrant"<<endl;
  }
  else{
    cout<<"Invalid Value"<<endl;
  }
  return 0;
}
