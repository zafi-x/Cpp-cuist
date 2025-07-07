#include <iostream>
using namespace std;
class Test
{
public:
    int num;
    float num2;
    Test()
    {
        num = 1;
        num2 = 2.2;
    }

    void operator++()
    {
        ++num;
        // ++num2;
    }
    void disply()
    {
        cout << "Value: " << num << endl;
        cout << "Value: " << num2 << endl;
    }
};
int main()
{
    Test t1;
    t1.disply();
    ++t1;

    t1.disply();
    return 0;
}