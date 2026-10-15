#include<iostream>
using namespace std;
    
int main(){
    int l, b;
    cin>>l>>b;

    int area = l*b;
    int peri = 2*(l + b);

    cout<<"Area = "<<area<<endl;
    cout<<"Perimeter = "<<peri<<endl;
return 0;
}