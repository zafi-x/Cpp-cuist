#include <iostream>

using namespace std;

class Product
{
private:
    string name;
    static int count;

public:
    Product(string name)
    {
        this->name;
        count++;
    }
    static void showCount()
    {
        cout << " Total Product " << count;
    }
};
int Product ::count = 0;
int main()
{
    Product p1("mouse");
    Product p2("keyboard");
    Product p3("wire");
    // p3.showCount();   // ** both ways are valid **
    Product::showCount(); // ** both ways are valid **
    return 0;
}