#include<iostream>
using namespace std;

int main(){
    int length, breath;
    cin >> length >> breath;
    int Area = length * breath;
    int Perimeter = 2*(length + breath);
    cout << "Area of Rectangle:" << Area << endl;
    cout << "Perimeter of Rectangle:" << Perimeter << endl;

    return 0;
}
