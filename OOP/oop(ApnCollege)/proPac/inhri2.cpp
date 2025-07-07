// Q2: Inheritance: Hospital Management System

// Base Class: Person
// Public Attributes: name, age
// Derived Class: Doctor
// Inherits from Person
// Add public attribute: specialization
// Create an object of class Doctor and populate inherited data.
// Method: displayDoctor(): Show doctor's personal details and specialization.

#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};
class Doctor : public Person
{
public:
    string specialization;
    Doctor(string n, int a, string s) : Person(n, a)
    {
        specialization = s;
    }

    void displayDoctor()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Specialization: " << specialization << endl;
    }
};
int main()
{
    Doctor doc("ali", 22, "animal");
    doc.displayDoctor();
    return 0;
}
