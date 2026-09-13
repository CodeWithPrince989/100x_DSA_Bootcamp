#include<iostream>
using namespace std;

int main(){
  int N, M;
  cout<<"Enter the value of N and M"<<endl;
  cin>>N>>M;
  if(N>=1 || M>=1000000000){
      cout<<N<<" + "<<M<< " = "<<N+M<<endl;
      cout<<N<<" - "<<M<< " = "<<N-M<<endl;
      cout<<N<<" * "<<M<< " = "<<N*M<<endl;
      cout<<N<<" / "<<M<< " = "<<N/M<<endl;
      cout<<N<<" % "<<M<< " = "<<N%M<<endl;
  }
  else{
    cout<< "N should be greater than 1 and M should be less than 1000!";
  }
  return 0;
}
