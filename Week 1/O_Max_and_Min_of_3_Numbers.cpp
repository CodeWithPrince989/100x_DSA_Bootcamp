#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    // for Min
    if(a<b && a<c){
        cout << "Min" << a << endl;
    }else if(b<a && b<c){
      cout << "Min" << b << endl;
    }
    else{
      cout << "Min" << c << endl;
    }

   // for Max
    if(a>b && a>c){
        cout << "Max" << a << endl;
    }else if(b>a && b>c){
        cout << "Max" << b << endl;
    }else{
      cout << "Max" << c << endl;
    }
  return 0;
}