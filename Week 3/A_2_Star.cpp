#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter Value To Print * Upto N: " << endl;
    cin>>n;

    while(n>0){
        cout<< "**" << endl;
        n--;
    }
  return 0;
}