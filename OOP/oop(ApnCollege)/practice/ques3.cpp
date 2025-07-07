// Write a class with constructor overloading. Use two constructors with different parameters.
#include <iostream>

using namespace std;
class Laptop
{
private:
    string name;
    int Price;
    bool isUsed;

public:
    Laptop(string n, int p)
    {
        name = n;
        Price = p;
        this->isUsed = false;
    }
    Laptop(string n, int p, bool isUsed)
    {
        name = n;
        Price = p;
        this->isUsed = isUsed;
    }
    void Disply()
    {
        cout << "Laptop[Name :" << name << "]\n[Price: " << Price;
        cout << " " << (isUsed ? "Yes" : "No") << endl;
    }
    // cout << (isUsed ? "Yes" : "No") << endl;
    // This means:

    // If isUsed == true, it prints "Yes"

    // If isUsed == false, it prints "No"
};
int main()
{
    Laptop l1("HP", 4000);
    Laptop l2("DELL", 5000, true);
    l1.Disply();
    l2.Disply();
    return 0;
}