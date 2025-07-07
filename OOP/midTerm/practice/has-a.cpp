// Create a class Engine with attributes: horsePower, type.
// Create a class Car that has brand, model, and an Engine object.
// Initialize everything using constructors.
// Display full car details along with engine specs.
#include <iostream>

using namespace std;

class Engine
{
public:
    int horsePower;
    string type;
    Engine(int hp, string t)
    {
        horsePower = hp;
        type = t;
    }
};
class Car
{
public:
    string brand;
    string model;
    Engine engine;
    Car(string br, string m, int hp, string t) : engine(hp, t)
    {
        brand = br;
        model = m;
    }
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Horse Power: " << engine.horsePower << endl;
        cout << "Type: " << engine.type << endl;
    }
};

int main()
{
    Car mycar("Ferrari", "F1", 1000, "Gas");
    mycar.display();

    return 0;
}