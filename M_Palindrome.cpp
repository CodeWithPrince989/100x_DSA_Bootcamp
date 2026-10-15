#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    
    bool isPalindrome = true;
    int n = str.length();
    
    // Check characters from both ends moving towards the center
    for(int i = 0; i < n / 2; i++){
        if(str[i] != str[n - i - 1]){
            isPalindrome = false;
            break; // Mismatch found, no need to check further
        }
    }
    
    if(isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}