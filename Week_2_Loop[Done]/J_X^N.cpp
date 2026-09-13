#include <iostream>
using namespace std;

int main() {
    int x, n;

    cout << "Enter base and exponent: ";
    cin >> x >> n;

    long long ans = 1;

    if(x>=-10 && x<=10 && n>=0 && n<=20){
        for (int i = 1; i <= n; i++) {
        ans *= x;
        }
    }else{
        cout<<"Invalid Input"<<endl;
    }
    
    cout << x << "^" << n << " = " << ans << endl;

    return 0;
}