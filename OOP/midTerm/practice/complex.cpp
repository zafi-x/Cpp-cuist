// Create a class ComplexNumber with real and imaginary parts.
// Overload the + and - operators to add and subtract two complex numbers.

#include <iostream>

using namespace std;

class ComplexNumber
{
private:
    float real, imaginary;

public:
    ComplexNumber()
    {
        real = 0.0;
        imaginary = 0.0;
    }
    ComplexNumber(float r, float i)
    {
        real = r;
        imaginary = i;
    }
    ComplexNumber operator+(ComplexNumber c2)
    {
        ComplexNumber temp;
        temp.real = real + c2.real;
        temp.imaginary = imaginary + c2.imaginary;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};
int main()
{
    ComplexNumber c1(4.4, 5.3);
    ComplexNumber c2(5.6, 4.7);
    ComplexNumber c3;
    c3 = c1 + c2;
    c1.display();
    cout << "+\n";
    c2.display();
    cout << "=\n";
    c3.display();

    return 0;
}