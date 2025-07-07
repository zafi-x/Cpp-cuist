#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initialBalance)
    {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
        {
            balance = 0;
            cout << "Invalid initial balance! Setting to 0." << endl;
        }
    }

    // Getter for balance
    double getBalance()
    {
        return balance;
    }

    // Setter to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
};

int main()
{
    BankAccount myAccount(500);

    cout << "Current Balance: $" << myAccount.getBalance() << endl;
    myAccount.deposit(200);
    myAccount.withdraw(100);

    cout << "Final Balance: $" << myAccount.getBalance() << endl;
    return 0;
}
