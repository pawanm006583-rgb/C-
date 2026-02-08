#include <iostream>
using namespace std;

// class Student
// {
//     public:
//         int rollNo;
//         string name;

//     void display()
//     {
//         cout<<"Roll No:"<<rollNo<<endl;
//         cout<<"Name:"<<name<<endl;
//     }
// };

// int main()
// {
//     Student s1;
//     s1.rollNo =101;
//     s1.name = "Pawan";
//     s1.display();

//     return 0;
// }





class Books
{
    public:
        int Price;
        string name;

    void display()
    {
        cout<<"Price:"<<Price<<"rs"<<endl;
        cout<<"Name:"<<name<<endl;
    }
};

int main()
{
    Books s1;
    s1.Price =101;
    s1.name = "Pawan";
    s1.display();

    return 0;
}