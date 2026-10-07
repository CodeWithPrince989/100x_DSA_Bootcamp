#include <iostream>
using namespace std;
 
int main() {
    long long a, b; 
    cin >> a >> b;
    
    long long add = a + b;
    long long sub = a - b;
    long long mul = a * b;
    long long div = a / b;
    long long mod = a % b;
    
    // Notice the extra << endl at the end of each print to create the blank lines
    cout << a << " + " << b << " = " << add << endl << endl;
    cout << a << " - " << b << " = " << sub << endl << endl;
    cout << a << " * " << b << " = " << mul << endl << endl;
    cout << a << " / " << b << " = " << div << endl << endl;
    cout << a << " % " << b << " = " << mod << endl;
    
    return 0;
}
