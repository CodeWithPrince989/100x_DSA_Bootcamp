#include<iostream>
#include<cmath>
using namespace std;
    
bool isPrime(int n){
    if (n <= 1){
        return false;
    }
    if (n <= 3){
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0){ // 'or' works, but '||' is standard C++ convention
        return false;
    }

    // FIX 1: Change i++ to i += 6. 
    // Since we check i and i+2, stepping by 6 lets us skip multiples of 2 and 3 completely.
    for(int i = 5; i <= sqrt(n); i += 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }

    // FIX 2: Added missing return statement.
    // If no factors are found in the loop, the number is prime.
    return true; 
}

int main(){
    int n;
    cin >> n;

    bool check = isPrime(n);
    if(check){
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }
    return 0;
}
