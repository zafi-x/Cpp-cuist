/* Task 3: Create a class Student with the following
 attributes:
 • name
 • rollNumber
 Requirements:
 • Implement a method displayStudentInfo() that prints student details.
 • After assigning values to a Student object, call displayStudentInfo().
 Example Usage:
 */

#include <iostream>

using namespace std;
class Student
{
private:
    string name;
    int rollNumber;

public:
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }
    void displayStudentInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    Student student1("Ali", 123);
    student1.displayStudentInfo();

    return 0;
}