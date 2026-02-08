#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int tamp =*a;
    *a = *b;
    *b = tamp;
}

int main(){
    int x = 10, y = 20;

    swap(&x , &y);
    cout<<"x ="<<x<<"y ="<<y;
    return 0;
}