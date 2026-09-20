#include<iostream>
using namespace std;
    
long long SumofDigit(long long n){
    long long sum = 0;
    while(n>0){
    sum += n%10;
    n/=10;
    }
    return sum;
}

int main(){
    long long n;
    if (cin >> n) {
        cout << SumofDigit(n) << endl;
    }


return 0;
}