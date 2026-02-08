#include <iostream>
using namespace std;

int main(){
    int i=5;
    int fact = 1;
    
    while(i>0){
    fact*= i;
    i--;
    }
    {
        cout<<"Factorial is "<<fact;
    }
}


// Using function:
int fact(int n){
    int fact = 1;
    for (int i=1;i<=n;i++)
    fact*=i;
    return fact;
}

int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<"Factorial ="<<fact(num)<<endl;
    return 0;
}