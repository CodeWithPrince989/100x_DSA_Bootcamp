#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; J++){
            if(i==0 || j==i || j==n-i){
                cout<<"* ";
            }else{
                cout<<" ";
            }
        }
    }

    return 0;
}
