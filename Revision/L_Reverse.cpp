#include <iostream>
#include <string>
using namespace std;

int main() {
    //Reverse a string
    string str;
    cin>>str;
    string rev = "";
    for(int i = str.length()-1; i >= 0; i--){
        rev += str[i];
    }
    cout << rev << endl;
    return 0;
}