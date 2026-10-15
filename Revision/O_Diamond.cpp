#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - i - 1; k++) {
            cout << " ";
        }
        
        for (int j = 0; j <= i; j++) {
            if(j==0||j==i){
                cout << "*";
            }else{
                cout<<" ";
            }
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }

    //Lower Triangle
        for(int i=1; i<=n; i++){
        for(int k=1; k<=i; k++){
            cout<<" ";
        }
        for(int j=n-1; j>=i; j--){
            if(j==n-1|| j==i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
