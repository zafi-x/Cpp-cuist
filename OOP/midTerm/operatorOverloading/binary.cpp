#include <iostream>

using namespace std;
// Right = argument
// left = function call
class Test
{
public:
    int num1;
    int num2;
    Test(int n)
    {
        num1 = n;
        num2 = 1;
    }
    Test operator+(Test t2)
    {
        Test t3(0);
        t3.num1 = num1 + t2.num1;
        // t3.num2 = num2 + t2.num2;
        return t3;
    }

    void Display()
    {
        cout << "Value: " << num1 << endl;
        // cout << "Value of num2 " << num2 << endl;
    }
};

int main()
{
    Test t1(10);
    Test t2(2);

    t1 + t2;
    Test sum(0);
    sum = t1 + t2;
    t1.Display();
    t2.Display();
    sum.Display();
    return 0;
}