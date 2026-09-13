#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[t][t];
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            cin>>arr[i][j];
        }
    }
    //Sum of Diagonal Elements
    int sum=0;
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            if(i==j){
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
    return 0;
}