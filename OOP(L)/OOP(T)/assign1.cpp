#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int employeeID;
    double salary;

    Employee(string n, int id, double s) : name(n), employeeID(id), salary(s)
    {
        cout << name << " joined the company!\n";
    }

    ~Employee()
    {
        cout << name << " left the company.\n";
    }

    void displayInfo()
    {
        cout << "Name: " << name << ", ID: " << employeeID << ", Salary: $" << salary << endl;
    }
};

int main()
{
    cout << "Company is hiring...\n";

    Employee e1("Alice", 101, 50000);
    Employee e2("Bob", 102, 55000);
    Employee e3("Charlie", 103, 60000);

    e1.displayInfo();
    e2.displayInfo();
    e3.displayInfo();

    cout << "Company operations complete.\n";
    return 0;
}
