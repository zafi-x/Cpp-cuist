#include <iostream>

using namespace std;

class Gym
{
public:
    void registerMember(string name, int age)
    {
        cout << "Name " << name << " registered Age " << age << endl;
    }
    void registerMember(string name, string cnic)
    {
        cout << "Name " << name << " registered CNIC " << cnic << endl;
    }
    void registerMember(string name, int age, string plan)
    {
        cout << "Name " << name << " registered Age " << age << " Plan " << plan << endl;
    }
};
int main()
{

    Gym g1;
    g1.registerMember("zafi", 18);
    g1.registerMember("zafi", "17301-787-11");
    g1.registerMember("zafi", 16, "Monthly");
    return 0;
}