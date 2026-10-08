#include<iostream>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int k=2; k<=i; k++){
            cout<<" ";
        }
        for(int j=n; j>=i; j--){
            if(i==1|| j==n || j==i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
return 0;
}