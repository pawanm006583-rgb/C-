#include <iostream>
using namespace std;


// int add(int a,int b){
//     return a+b;
// };


// Types of functions 

// Provided by C++

// sqrt(25);
// strien(str);

// (A) Using defined functions
// Consted by the programmer;

// Void greet(){
// 	cout<<”Hello”;
// }

// (B) Celln by Referance
// Original variables is modified;

// (C) Call by pointer
// Address of variables is p
// void change(int *x){
// *x = 10;
// }


int a;
int main(){
    cout<<"\n==== CALL BY VALUE =====\n";
    int a=10;
    callByValue(a);
    cout<<"After Call by Value:"<<a<<endl;

    int b=20;
    callByReferance(b);
    cout<<"After Call by Referance:"<<b<<endl;

    cout<<"\n==== Call By Pointer =====\n";
}
