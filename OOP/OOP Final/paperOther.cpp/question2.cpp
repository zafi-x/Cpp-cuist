#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    int age;
};
class Employee : public Person
{
public:
    int employeeID;
};

class Manager : public Employee
{
public:
    Manager(string n, int a, int id)
    {
        name = n;
        age = a;
        employeeID = id;
    }
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << ", Employee ID: " << employeeID << endl;
    }
};

int main()
{
    Manager m("Alice", 30, 101);
    m.display();
    return 0;
}