#include<iostream>
using namespace std;

int main(){
    int n; 
    cout << " Enter Numbers that less than 20: ";
    cin >> n;

    int factorial = 1;
    if(n<20){
    for(int i=1; i<=n; i++){
        factorial*=i;
        if(n==0){
            factorial = 1;
        }
    }
    }
    cout << "Factorial: " << factorial << endl;
    
    return 0;
}
