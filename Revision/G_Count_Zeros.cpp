#include<iostream>
using namespace std;
    
int main(){
    long long n;
    cin>>n; 
    
    if(n==0){
        cout<<"1";
        return 0;
    }

    int cnt = 0;
    while(n>0){
        int digit = n%10;
        if(digit==0){
            cnt+=1;
        }
        n=n/10;
    }
    cout<<cnt;
return 0;
}