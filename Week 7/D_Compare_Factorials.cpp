#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    if(a==0){a+=1;}
    if(b==0){b+=1;}

    while(a>0&&b>0){
      a *= a;
      b *= b;
      if(a==b){
        cout<<"Yes";
        break;
      }else{
        cout<<"No";
          break;
      }
      a-=1;
      b-=1;
    }
      

    cout << "\n";
    return 0;
}