// Design a class Laptop with attributes brand, model, and price.
// Write three constructors:
// Default constructor (set dummy values),
// Constructor with only brand and model,
// Constructor with all three values.
// Create objects using different constructors.
#include <iostream>

using namespace std;

class Laptop
{
public:
    string brand, model;
    int price;
    Laptop()
    {
        brand = "Null";
        model = "N/O";
        price = 0;
    }
    Laptop(string brand)
    {
        this->brand = brand;
    }
    Laptop(string brand, string model, int price)
    {
        this->brand = brand;
        this->model = model;
        this->price = price;
    }
    void display()
    {
        cout << "Laptop Brand: " << brand << endl;
        cout << "Laptop model: " << model << endl;
        cout << "Laptop price: " << price << endl;
    }
};

int main()
{
    Laptop myLaptop;
    Laptop myLaptop1("HP");
    Laptop myLaptop2("Lenovo", "thinkpad", 10000);
    myLaptop.display();
    myLaptop1.display();
    myLaptop2.display();
    return 0;
}