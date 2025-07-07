#include <iostream>

using namespace std;
class BlackCafe
{
private:
    int customerWithCard;
    int customerWithoutCard;

public:
    BlackCafe()
    {
        cout << "Welcome to Black Cafe" << endl;
    }
    string CustomerName;
    string CustomerOrder;
    int CustomerTableNumber;
    int CustomerOrderNumber;
    void CustomerDetails()
    {
        cout << "Enter your name: ";
        cin >> CustomerName;
        cout << "Enter your order: ";
        cin >> CustomerOrder;
        cout << "Enter your table number: ";
        cin >> CustomerTableNumber;
        cout << "Enter your order number: ";
        cin >> CustomerOrderNumber;
    }
    void CustomerCard()
    {
        cout << "Do you have a customer card? (1 for yes, 0 for no): ";
        cin >> customerWithCard;
        if (customerWithCard == 1)
        {
            cout << "You are eligible for a discount!" << endl;
        }
        else
        {
            cout << "You are not eligible for a discount!" << endl;
        }
    }
};

int main()
{

    BlackCafe customer1;
    customer1.CustomerDetails();
    customer1.CustomerCard();
    return 0;
}