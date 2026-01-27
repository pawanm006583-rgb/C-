#include <iostream>
using namespace std;

class Employee
{
    public:
    int empId;
    void showId()
    {
        cout<<"Employee ID"<<empId<<endl;
    }
};

class Salary : public Employee
{
    public:
    int salary;
    void showSalary()
    {
        cout<<"Salary:"<<salary<<endl;
    }
};

int main()
{
    Salary s;

    s.empId = 201;
    s.salary = 300000;

    s.showId();
    s.showSalary();
}