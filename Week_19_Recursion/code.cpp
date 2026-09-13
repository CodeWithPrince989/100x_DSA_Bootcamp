// #include<iostream>
// using namespace std;

// Infinite Recursion 
// Stack OverFlow
// C -> B -> A -> C ...


// void A(){
//     cout<<"I am in function A"<< endl;
// }

// void B(){
//     cout<<"I am in function B"<< endl;
//     A();
// }
// void C(){
//     cout<<"I am in function C"<< endl;
//     B();
// }
// void D(){
//     cout<<"I am in function D"<< endl;
//     C();
// }

// int main(){
// //     A();
// //     B();
// //     C();
// //     D();
// }

// --- Printing N to 1
// #include <iostream>
// using namespace std;

// void printNto1(int N){
//     // 1. Base Case: Stop when N reaches 0
//     if (N == 0) { 
//         return; 
//     }

//     // 2. Action: Print the current number
//     cout << N << endl; 

//     // 3. Recursive step: Call the function with N - 1
//     printNto1(N - 1); 
// }

// int main(){
//     printNto1(5);
//     return 0;
// }



// --- Printing 1 to N
// #include <iostream>
// using namespace std;
// void print1toN(int N){
//     if(N==0){ return;}
//     print1toN(N-1);
//     cout<<N<<endl;
// }

// int main(){
//     print1toN(5);
// }



// --- Zig Zag  Pattern
//  void f(int n){
//     if(n==1){ cout<<1<<endl; return;}
//     cout<<n<<endl;
//     f(n-1);
//     cout<<n<<endl;
//  }

//  int main(){
//     f(3);
//  }



// Make A Reverse Of Digit




// Factorial Code




// Power



// Sum of Digits



// Fibonacci