#include <iostream>

using namespace std;

class car
{
private:
    string brand;
    string model;
    int year;

public:
    car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }
    void print()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
int main()
{
    ///  Task 1: Create a class Car with the following
    // attributes:
    // • brand
    // • model
    // • year
    // Requirements:
    // • Create 3 different Car objects and assign values to their attributes.
    // • Print the attributes of each object.
    car car1("Toyota", "Corolla", 2019);
    car car2("Honda", "Civic", 2020);
    car car3("Suzuki", "Mehran", 2018);
    car1.print();
    cout << endl;
    car2.print();
    cout << endl;
    car3.print();

    return 0;
}