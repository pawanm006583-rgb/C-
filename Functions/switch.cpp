#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"A. Area of circle:";
    cout<<"B. Area of triangle:";
    cout<<"C. Area of rectangle:";
    cout<<"D. Area of square:";

    switch(ch){
        case 'A':
        int r,circle;
        cout<<"Enter the radius:";
        cin>>r;
        circle = 3.14*r*r;
        cout<<circle<<endl;


        case 'B':
        int b,h,triangle;
        cout<<"Enter the base:";
        cin>>b;
        cout<<"Enter the height:";
        cin>>h;
        triangle = (1/2)*b*h;
        cout<<triangle<<endl;

        case 'C':
        int l,b,h,rect;
        cout<<"Enter the base:";
        cin>>b;
        cout<<"Enter the height:";
        cin>>h;
        cout<<"Enter the length:";
        cin>>l;
        rect=l*b*h;
        cout<<rect<<endl; 

        case 'D':
        int l,sqar;
        cout<<"Enter the base:";
        cin>>l;
        sqar = l*l;
        cout<<sqar<<endl;

    }
}