// Original Errors:
// - Class keyword should be lowercase
// - Wrong main() structure
// - Wrong object name (`ap`)
// - `display()` is private but accessed outside

#include <iostream>
using namespace std;

class Person
{
protected:
    int id;
    string name;

public:
    void setData(string n, int i)
    {
        name = n;
        id = i;
    }

    void display()
    {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main()
{
    Person p;
    p.setData("Sarah", 1245);
    p.display();
    return 0;
}
