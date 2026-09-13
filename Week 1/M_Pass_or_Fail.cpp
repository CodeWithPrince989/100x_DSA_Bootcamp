#include<iostream>
using namespace std;

int main(){
  int marks;
  cout<<"Enter Marks: "<<endl;
  cin>>marks;
  if(marks>=0 || marks <= 100){
    if(marks > 35){
      cout<<"PASS"<<endl;
    }else{
      cout<<"FAIL"<<endl;
  }
  }
  return 0;
}
