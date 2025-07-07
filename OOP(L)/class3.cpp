#include <iostream>
using namespace std;

class Car
{
private:
    int speed;

public:
    Car()
    {
        speed = 0; // Default speed is 0
    }

    // Setter for speed
    void setSpeed(int s)
    {
        if (s >= 0 && s <= 200)
            speed = s;
        else
            cout << "Invalid speed! Speed must be between 0 and 200." << endl;
    }

    // Getter for speed
    int getSpeed()
    {
        return speed;
    }
};

int main()
{
    Car myCar;
    myCar.setSpeed(120);

    cout << "Car Speed: " << myCar.getSpeed() << " km/h" << endl;

    myCar.setSpeed(250); // Invalid speed

    return 0;
}
// Output
// Car Speed: 120 km/h
// Invalid speed! Speed must be between 0 and 200.
// In this example, we have a Car class with a private member variable speed. The class has a default constructor that initializes the speed to 0. We also have a setter setSpeed() and a getter getSpeed() to modify and access the speed of the car, respectively. In the main function, we create an instance of the Car class and set the speed to 120 km/h. We then
// try to set an invalid speed of 250 km/h, which triggers the error message. This example demonstrates the use of getters and setters to control access to private member variables and enforce constraints on their values.