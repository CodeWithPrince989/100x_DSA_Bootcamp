#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int Pass_cnt=0;
    int Fail_cnt=0;
    for(int j=0; j<n; j++){
      if(arr[j]>=50){
        Pass_cnt+=1;
      }else{
        Fail_cnt+=1;
      }
    }
    cout<<"Pass:"<<Pass_cnt<<endl;
    cout<<"Fail:"<<Fail_cnt<<endl;
    return 0;
}