#include <iostream>
using namespace std;

class shape {
    public:
    void draw(){
        cout<<"Drawing shape\n"<<endl;
    }
};

class Rectangle : public shape{
    public:
    float length, breadth;
    void area(){
        cout<<"Enter lenght"<<endl;
        cin>>length;
        cout<<"Enter breadth"<<endl;
        cin>>breadth; 
        cout<<"Area of rectangle \n"<<length*breadth<<endl;
    }
};

class circle : public Rectangle{
    public:
    int r;
    void shape(){
        cout<<"Enter the radius:"<<endl;
        cin>>r;
    cout<<"Area of circle\n"<<3.14*r*r<<endl;
    }
};

class square : public circle{
    public:
    int b;
    void display(){
        cout<<"Enter the length of base:"<<endl;
        cin>>b;
        cout<<"Area of square\n"<<b*b<<endl;
    }
};

int main(){
    square obj;
    obj.display();
    obj.shape();
    obj.area();
    obj.draw();
    return 0;
}