#include <iostream>

using namespace std;

class Ride
{
public:
    virtual void Riding()
    {
        cout << "Base Ride " << endl;
    }
};
class BikeRide : public Ride
{

public:
    void Riding() override
    {
        cout << "Bike Riding " << endl;
    }
};
class carRide : public Ride
{

public:
    void Riding() override
    {
        cout << "car Riding " << endl;
    }
};
int main()
{
    Ride *r;
    r = new BikeRide();
    r->Riding();
    r = new carRide();
    r->Riding();
    delete r;
    return 0;
}