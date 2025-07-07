#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Constructor to initialize name and age
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Professor : public Person
{
public:
    string specialization;

    // Constructor to initialize name, age, and specialization
    Professor(string n, int a, string s) : Person(n, a)
    {
        specialization = s;
    }

    // Method to display Professor's details
    void displayProfessor()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

int main()
{
    // Create an object of the Professor class and display details
    Professor proff("Xafi", 18, "C++");
    proff.displayProfessor();

    return 0;
}
