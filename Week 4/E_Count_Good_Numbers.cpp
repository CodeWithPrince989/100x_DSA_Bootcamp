#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter to Print Count Good Numbers: ";
    cin >> n;

    int cnt = 0;
    for(int i=1; i<=n; i++){
      int num;
      cin>>num;
      if(18%num==0 || num%45==0){
        cnt += 1;
      }
    }
  cout<<cnt;
    return 0;
}
