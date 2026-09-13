#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; // Declare the string variable
    getline(cin, s); // Added missing semicolon
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){ // Changed <= to < and ch to s
        if(s[i] == ' '){ // Changed '=' to '==' for comparison
            cnt++;
        }
    }
    cout << cnt + 1; // Number of words is spaces + 1
    return 0;
}