#include <iostream>
using namespace std;

void fact(int n){
    int num = 1;
    for (int i = 1; i <= n; i++) {
        num *= i;
    }
  cout<< num;
}

int main() {
    int n;
    cin >> n;
    fact(n);
    return 0;
}
