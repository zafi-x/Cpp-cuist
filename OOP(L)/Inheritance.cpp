#include <iostream>

using namespace std;

class Resturant
{
public:
    string name;
    string location;
    int rating;
};

class FastFood : public Resturant
{
public:
    string type;
    int price;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Location: " << location << endl;
        cout << "Rating: " << rating << endl;
        cout << "Type: " << type << endl;
        cout << "Price: " << price << endl;
    }
};
class KFC : public FastFood
{
public:
    string specialDish;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Location: " << location << endl;
        cout << "Rating: " << rating << endl;
        cout << "Type: " << type << endl;
        cout << "Price: " << price << endl;
        cout << "Special Dish: " << specialDish << endl;
    }
};
class PizzaHut : public FastFood
{
public:
    string specialDish;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Location: " << location << endl;
        cout << "Rating: " << rating << endl;
        cout << "Type: " << type << endl;
        cout << "Price: " << price << endl;
        cout << "Special Dish: " << specialDish << endl;
    }
};

int main()
{
    FastFood f1;
    f1.name = "McDonald's";
    f1.location = "New York";
    f1.rating = 4;
    f1.type = "Fast Food";
    f1.price = 10;
    KFC k1;
    k1.name = "KFC";

    return 0;
}