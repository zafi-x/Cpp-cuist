#include <iostream>

using namespace std;

int ballPrice(int &price)
{
    price = 5;
    cout << "price of ball is " << price;
}
int main()
{
    int pr = 10;
    ballPrice(pr);
    cout << "\nog price of ball is " << pr;
    return 0;
}