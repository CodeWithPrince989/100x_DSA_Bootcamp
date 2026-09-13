#include<iostream>
using namespace std;

int main(){
    int n; 
    cout << " Enter Numbers: ";
    cin >> n;

    int j = 0;
    for(int i=1; i<=n; i++){
        j+=i;
    }
    cout << "Sum of First N Natural Number: " << j << endl;
    
    return 0;
}
