#include <iostream>

using namespace std;

class Student
{
private:
    int marks;
    string name;

public:
    Student(int m, string n)
    {
        marks = m;
        name = n;
    }

    friend void checkStudentResult();
};

void checkStudentResult()
{
    Student s1(1, "zafi");
    if (s1.marks >= 59)
    {
        cout << "passs";
    }
    else
    {
        cout << "fail";
    }
}
int main()
{

    return 0;
}