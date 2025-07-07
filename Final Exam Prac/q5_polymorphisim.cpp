// You’re creating a school system. Class Person has a virtual function showRole(). Teacher and Student override this function. Write a C++ class structure that supports adding various people and calling their roles via base class pointers.

#include <iostream>

using namespace std;
class Person
{
public:
    virtual void showRole()
    {
        cout << "Person" << endl;
    }
};
class Teacher : public Person
{
public:
    void showRole() override
    {
        cout << "Teacher" << endl;
    }
};
class Student : public Person
{
public:
    void showRole() override
    {
        cout << "Student " << endl;
    }
};

int main()
{

    Person *ptr = new Teacher;
    Person *ptr2 = new Student;
    ptr->showRole();  // Teacher
    ptr2->showRole(); // Student

    delete ptr;  // Clean up memory
    delete ptr2; // Clean up memory
    return 0;
}