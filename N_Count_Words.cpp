#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    // Use getline to read the full line including spaces
    getline(cin, str);

    int count = 0;
    // Iterate through the string and count the spaces
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') {
            count++;
        }
    }

    // Number of words = number of spaces + 1
    cout << count + 1 << endl;

    return 0;
}