#include <iostream>
using namespace std;

class Student {
    public:
        int roll=1;
};

class Marks: public Student{
    public:
    float m1, m2, m3, m4;
        void geet_display(){
        cout<<"Enter the marks of first subject:";
        cin>>m1;
        cout<<"Enter the marks of second subject:";
        cin>>m2;
        cout<<"Enter the marks of third subject:";
        cin>>m3;
        cout<<"Enter the marks of fourth subject:";
        cin>>m4;
        }

};
class Result: public Marks{
    public:
        void display(){
            geet_display();
            float result;
            result = ((m1+m2+m3+m4)/400)*100;
            cout<<"roll no"<<roll<<endl;
            cout<<"total marks :"<<result<<"%"<<endl;
        }
};

int main(){
    Result S1;
    S1.display();
    return 0;
}