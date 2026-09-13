#include <iostream>
#include <string>
using namespace std;

int main() {
    //Palindrome a string
    string str;
    cin>>str;
    for(int i = str.length()-1; i >= 0; i--){
        if(str[i] == str[str.length()-i-1]){
            cout << "Palindrome" << endl;
            break;
        }else{
            cout << "Not Palindrome" << endl;
            break;
        }
    }

    return 0;
}