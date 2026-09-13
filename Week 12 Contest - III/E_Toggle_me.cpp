#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    for(int i = 0; i < word.length(); i++) {
        // Check if character is Uppercase
        if(word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] + 32;
        } 
        // Check if character is Lowercase
        else if(word[i] >= 'a' && word[i] <= 'z') {
            word[i] = word[i] - 32;
        }
    }
    
    cout << word << endl;

    return 0;
}