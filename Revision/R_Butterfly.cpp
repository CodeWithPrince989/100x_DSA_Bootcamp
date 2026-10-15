#include<iostream>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    //Upper Part
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int k=n-1; k>=i; k--){
            cout<<" ";
        }
        for(int k=n-1; k>=i; k--){
            cout<<" ";
        }
        for(int l=1; l<=i; l++){
            cout<<"*";
        }
        cout<<endl;
    }


    //Bottom Part
    for(int i=2; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<"*";
        }
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=n; j>=i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}