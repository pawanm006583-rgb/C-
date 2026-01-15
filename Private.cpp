#include <iostream>
using namespace std;

class BankAccount
{
    private:
    int balance;

    public:
    void setBalance(int b)
    {
        balance =b;
    }
    int getBalace()
    {
        cout<<balance<<"rs"<<endl;
        return balance;
    }
};
int main(){
    BankAccount acc;
    acc.setBalance(7000);
    acc.getBalace();
}