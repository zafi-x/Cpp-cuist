//? A company has employees and managers. Create a class ‘Employee’ with name and salary. Derive a class    ‘Manager’ that adds bonus. Display total salary using inheritance.
#include <iostream>

using namespace std;
class Employee
{
protected:
    string name;
    int salary;

public:
    Employee(string n, int s)
    {
        name = n;
        salary = s;
    }
};

class Manager : public Employee
{
private:
    int bonus;

public:
    Manager(string n, int s, int b) : Employee(n, s)
    {
        bonus = b;
    }
    void showSalary()
    {
        cout << "Total Salary of " << name << ": " << salary + bonus << endl;
    }
};

int main()
{
    Manager m("Huzaifa", 50000, 10000);
    m.showSalary();
    return 0;
}