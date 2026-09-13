#include <iostream>
using namespace std;

void isPrime(int n) {
    for(int i=1; i<=n; i++){
      if(i<=1 || n==2 || n%2==0){
      }else{
        cout<<i<<" ";
      }
    }
}

int main() {
    int n;
    cin >> n;
    isPrime(n);
    return 0;
}
