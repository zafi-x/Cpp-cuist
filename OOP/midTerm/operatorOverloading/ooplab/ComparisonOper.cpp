#include <iostream>

using namespace std;

class Number
{
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }

    bool operator!=(const Number &other) const
    {
        return value != other.value;
    }

    bool operator<(const Number &other) const
    {
        return value < other.value;
    }

    bool operator>(const Number &other) const
    {
        return value > other.value;
    }

    int getValue() const { return value; }
};
int main()
{

    Number num1(10);
    Number num2(20);

    cout << "Comparison Results:" << endl;
    cout << "num1 != num2: " << (num1 != num2) << endl;
    cout << "num1 < num2: " << (num1 < num2) << endl;
    cout << "num1 > num2: " << (num1 > num2) << endl;

    return 0;
}