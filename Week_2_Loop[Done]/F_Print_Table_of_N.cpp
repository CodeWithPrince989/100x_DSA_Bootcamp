#include<iostream>
using namespace std;

int main(){
    // int n = 5; 
    int n; 
    cout << " Enter single integer N (1≤N≤100)." << endl;
    cin >> n;

    int table = 1;
    if(n<=100){
    for(int i = 1; i <= 10; i++){
        table = n * i;
        cout << n << " * " << i << " = " << table << endl;
    }
}else{
    cout<<"Enter Number Lesser than 100!";
}
    return 0;
}
