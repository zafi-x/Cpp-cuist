// Task 2: Create a class Animal with the following
// attributes:
// • name
// • color
// • breeder
// • weight
// Requirements:
// • Create 3 different Animal objects and assign values to their attributes.
// • Print the attributes of each object.
#include <iostream>

using namespace std;

class Animal
{
private:
    string name;
    string color;
    string breeder;
    int weight;

public:
    Animal(string n, string c, string b, int w)
    {
        name = n;
        color = c;
        breeder = b;
        weight = w;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Breeder: " << breeder << endl;
        cout << "Weight: " << weight << endl;
    }
};

int main()
{

    Animal animal1("Cat", "White", "Pet Shop", 5);
    Animal animal2("Dog", "Black", "Pet Shop", 10);
    Animal animal3("Parrot", "Green", "Pet Shop", 1);

    animal1.print();
    cout << endl;
    animal2.print();
    cout << endl;
    animal3.print();

    return 0;
}