#include <iostream>
using namespace std;
class ATM
{
    int accountNumber;
    int balance;

public:
    ATM(int a, int b)
    {
        accountNumber = a;
        balance = b;
    }
    void Balance()
    {
        cout << " Your Account Balance is :- " << balance << endl;
    }
    int withdrawal(int amount)
    {
        if (amount > balance)
        {
            cout << "You don't have enough money :- " << endl;
        }
        else
        {
            balance = balance - amount;
            return balance;
        }
    }

};
int main()
{

    int a, b;
    cout << "Enter your Account Number :- " << endl;
    cin >> a;
    cout << "Your balance is :- " << endl;
    cin >> b;
    ATM obj(a, b);
    obj.Balance();
    int amount ;
    cout << "Enter the amount you want to  withdrawal :- " <<obj.withdrawal(amount) <<endl ;

}