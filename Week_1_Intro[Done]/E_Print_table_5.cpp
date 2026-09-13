#include<iostream>
using namespace std;

int main(){
    int n = 5; // Size of the Z
    int table = 1;
    for(int i = 1; i <= 10; i++){
        table = 5 * i;
        cout << "5 * " << i << " = " << table << endl;
    }
    return 0;
}
