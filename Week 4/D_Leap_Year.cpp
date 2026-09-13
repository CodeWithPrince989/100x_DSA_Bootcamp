#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter to Print Leap Year: ";
    cin >> n;

    int i = n/100;
  
    if(i%4==0){
      cout<<"Leap Year"<<endl;
    }else{
      cout<<"Not A Leap Year"<<endl;
    }
  
    return 0;
}
