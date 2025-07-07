#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    static int count;

    Student(int i)
    {
        id = i;
        count++;
    }

    void display()
    {
        cout << "Student ID: " << id << endl;
    }

    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1(1);
    Student s2(2);

    s1.display();
    s2.display();

    Student::showCount();

    return 0;
}
