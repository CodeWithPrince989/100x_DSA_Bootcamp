#include<iostream>
using namespace std;
    
int main(){
    int n;
    cin>>n;

    //Upper Pyramid
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j==1 || j==i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    //Lower Pyramid
    for(int i=1; i<=n; i++){
        for(int j=n-1; j>=i; j--){
            if(j==n-1 || j==i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
return 0;
}