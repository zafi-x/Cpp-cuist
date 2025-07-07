#include <iostream>

using namespace std;

class BankAccount
{
public:
    virtual void clculateInterest() = 0;
};

class Saving : public BankAccount
{
    float balance;

public:
    Saving(float b)
    {
        balance = b;
    }
    void clculateInterest() override
    {
        cout << "Saving Interest " << balance * 0.04 << endl;
    }
};
class Fixed : public BankAccount
{
    float balance;

public:
    Fixed(float b)
    {
        balance = b;
    }
    void clculateInterest() override
    {
        cout << "Fixed Interest " << balance * 0.09 << endl;
    }
};
int main()
{
    BankAccount *acc1 = new Saving(100);

    BankAccount *acc2s = new Fixed(100);
    acc1->clculateInterest();
    acc2s->clculateInterest();

    return 0;
}