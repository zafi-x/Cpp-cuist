// Q3: Inheritance: Library Management System

// Base Class: Item
// Public Attributes: title, author, publicationYear
// Derived Class: Book
// Inherits from Item
// Add public attribute: genre
// Add public method: displayBook(): Show book details (title, author, publication year, and genre).
// Derived Class: Magazine
// Inherits from Item
// Add public attribute: issueNumber
// Add public method: displayMagazine(): Show magazine details (title, author, publication year, and issue number).
#include <iostream>

using namespace std;

class Item
{
public:
    string title;
    string author;
    int publicationYear;
    Item(string t, string a, int p)
    {
        title = t;
        author = a;
        publicationYear = p;
    }
};

class Book : public Item
{
public:
    string genre;
    Book(string t, string a, int p, string g) : Item(t, a, p)
    {
        genre = g;
    }
    void BookDetails()
    {
        cout << "Title :" << title << endl;
        cout << "author :" << author << endl;
        cout << "Publication Year  :" << publicationYear << endl;
        cout << "genre :" << genre << endl;
    }
};
class Magazine : public Book
{
public:
    int issueNumber;
    Magazine(string t, string a, int p, string g, int i) : Book(t, a, p, g)
    {
        issueNumber = i;
    }

    void magzineDetatils()
    {
        cout << "Title: " << title << endl;
        cout << "author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "genre: " << genre << endl;
        cout << "Issue Number: " << issueNumber << endl;
    }
};

int main()
{
    Book book1("One pice", "Oda", 1998, "adventure");
    book1.BookDetails();
    Magazine mag("Peere Kamil", "idk", 1990, "mystray", 2);
    mag.magzineDetatils();

    return 0;
}