// Create two classes: Author and Book.
// Author class contains name and email.
// Book class contains title, price, and has an Author object inside it (composition).
// Create a Book object and display its details along with the author's information.

#include <iostream>

using namespace std;

class Author
{
protected:
    string name;
    string email;

public:
    Author()
    {
        name = "";
        email = "";
    }
    Author(string n, string e)
    {
        name = n;
        email = e;
    }

    void displayAuthor()
    {
        cout << "Author: " << name << endl;
        cout << "email: " << email << endl;
    }
};

class Book
{
public:
    string title;
    int price;
    Author auth; // has-a composition
    Book(string t, int p, Author a)
    {
        title = t;
        price = p;
        auth = a;
    }
    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Book price: " << price << endl;
        auth.displayAuthor();
    }
};
int main()
{
    Author a1("Oda", "Oda12@gmai.com");
    Book b1("One Pice", 1000, a1);

    b1.display();

    return 0;
}