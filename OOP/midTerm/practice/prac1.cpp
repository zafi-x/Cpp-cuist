// Create a class BankAccount that stores accountHolderName, accountNumber, and balance.
// Write methods to deposit and withdraw money.
// Create multiple objects of BankAccount and perform operations.
#include <iostream>

using namespace std;

class BankAccount
{
private:
    int balance;

public:
    string accountHolderName;
    int accountNumber;
    BankAccount()
    {
        accountHolderName = "N/A";
        accountNumber = 0;
        balance = 0;
    }

    void deposit()
    {
        int depo;
        cout << "Enter the amount you wanna deposit" << endl;
        cin >> depo;
        balance += depo;
        cout << "Balance = " << balance << endl;
    }
    void withdraw()
    {
        int draw;
        cout << "Enter the amount you wanna withdraw" << endl;
        cin >> draw;
        balance -= draw;
        cout << "Remaining Balance = " << balance << endl;
    }
    void display()
    {
        cout << "name: " << accountHolderName << endl;
        cout << "Acc Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount acc1;
    acc1.accountHolderName = "Zafi";
    acc1.accountNumber = 123;

    acc1.deposit();
    acc1.withdraw();
    acc1.display();

    return 0;
}