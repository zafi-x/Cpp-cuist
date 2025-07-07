// Q1. complex number using operator overloading
// Q2. Write a class that overloads the '+' operator to add two distances in meters.
// Q3. Comarison of two objects using operator overloading
//  Right = argument
//  left = function call
#include <iostream>
using namespace std;

// Q1. complex number using operator overloading
class Complex
{
private:
    float real;
    float imag;

public:
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex obj)
    {
        return Complex(real + obj.real, imag + obj.imag); // Right = argument
                                                          // left = function call
    }
    void display() const // why we use const here?

    {
        // imag =  9; // This line seems to be an error, as it sets imag to a constant value.
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }
};

// Q2. Write a class that overloads the '+' operator to add two distances in meters.
class Distance
{
private:
    int meters;

public:
    Distance(int m) : meters(m) {}
    Distance operator+(const Distance d) const // Overloading '+' operator
    {
        return Distance(meters + d.meters); // Right = argument, left = function call
    }
};
// Q3. Comarison of two objects using operator overloading
class Marks
{
private:
    int marks;

public:
    Marks(int m)
    {
        marks = m;
    }
    bool operator>(Marks other)
    {
        return (marks > other.marks ? true : false); // Overloading '>' operator
    }
};

int main()
{
    Complex c1(3, 2);
    Complex c2(1, 4);
    Complex c3 = c1 + c2;
    c3.display();

    Distance d1(5);
    Distance d2(10);
    Distance d3 = d1 + d2;

    Marks m1(2);
    Marks m2(1);
    bool bhino = m1 > m2;
    cout << bhino;
    return 0;
}

// shady u can get the code from my github repo