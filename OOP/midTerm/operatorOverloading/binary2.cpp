// W.A,P to Add two distances
// Create a Distance class which has Feet and inches
#include <iostream>
using namespace std;
class Distance
{
public:
    int feet;
    float inches;
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }
    Distance operator+(Distance d3)
    {
        Distance temp;
        temp.feet = feet + d3.feet;
        temp.inches = inches + d3.inches;
        return temp;
    }
    void Display()
    {
        cout << "Feet  = " << feet << endl;
        cout << "inches = " << inches << endl;
    }
};
int main()
{
    Distance add;

    Distance d1(6, 2.5);
    Distance d2(4, 2.5);

    add = d1 + d2;

    d1.Display();
    d2.Display();
    add.Display();
    return 0;
}