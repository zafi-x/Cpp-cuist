#include <iostream>

using namespace std;

class Increment
{
public:
    int Salary;
    Increment()
    {
        Salary = 0;
    }
    void operator++()
    {
        Salary += 100;
    }
};
int main()
{
    Increment Salary;
    cout << Salary.Salary;
    ++Salary;
    cout << Salary.Salary;
    return 0;
}