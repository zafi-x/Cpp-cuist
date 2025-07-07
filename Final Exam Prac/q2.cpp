/// What is a pure virtual function? Write an example using abstract class.
/// **A pure virtual function makes a class abstract, meaning objects of it cannot be created directly.

#include <iostream>

using namespace std;
class Shape
{
public:
    virtual void draw() = 0;
};
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a circle";
    };
};
int main()
{
    Shape *ptr = new Circle();
    ptr->draw();
    return 0;
}