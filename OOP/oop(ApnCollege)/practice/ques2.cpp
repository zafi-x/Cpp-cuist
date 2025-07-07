// 🔹 Q2. Create a class Student with default, parameterized, and copy constructor. Print data from each object.
#include <iostream>

using namespace std;
class Student
{
private:
    string name;
    int ID;

public:
    Student()
    {
        name = "N/A";
        ID = 123;
    }
    Student(string n, int id)
    {
        name = n;
        ID = id;
    }
    // Student(const Student &s)
    // {
    //     name = s.name;
    //     ID = s.ID;
    // }
    void Display()
    {
        cout << " Nanme: " << name << "\n ID: " << ID << endl;
    }
};

int main()
{
    Student s1;
    Student s2("zafi", 1232);
    Student s3 = s2;
    s1.Display();
    s2.Display();
    s3.Display();

    return 0;
}