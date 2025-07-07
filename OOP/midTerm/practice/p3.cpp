#include <iostream>

using namespace std;

class A
{
protected:
    int a;

public:
    void setA(int num1)
    {
        a = num1;
    }
};
class B : public A
{
private:
    int b;

public:
    void setB(int num2)
    {
        b = num2;
    }
    void addBoth()
    {
        cout << a << " + " << b << " = " << a + b;
    }
};

int main()
{
    B num1;
    num1.setA(1);
    num1.setB(2);
    num1.addBoth();
    return 0;
}