#include <iostream>
using namespace std;

// int main(){
// int a;
// float b;
// double c;
// char d;
// bool e;
// string f;

// cout<<"Size of int:"<<sizeof(a)<<"bytes"<<endl;
// cout<<"Size of float:"<<sizeof(b)<<"bytes"<<endl;
// cout<<"Size of double:"<<sizeof(c)<<"bytes"<<endl;
// cout<<"Size of char:"<<sizeof(d)<<"bytes"<<endl;
// cout<<"Size of bool:"<<sizeof(e)<<"bytes"<<endl;
// cout<<"Size of string:"<<sizeof(f)<<"bytes"<<endl;
// }

// int main(){
// int a,b;
// cout<<"Enter two numbers:";
// cin>>a>>b;
// if (a>b){
// cout<<"The greater no is "<<a;
// }else if(b>a){
// cout<<"The greater no is "<<b;
// }else {
//     cout<<"Both numbers are equal";
// }
// };


// Largest three number:

int main(){
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;

    int greatest = (a > b && a > c) ? a : (b > c ? b : c);
    cout<<"Greatest no is "<<greatest;

}