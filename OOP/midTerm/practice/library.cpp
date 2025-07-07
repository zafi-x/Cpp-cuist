// Class Book with title, author, ISBN.
// Class Library with libraryName and a list of Book objects (Array of Book objects).
// Add methods in Library to:
// Add new books,
// Display all books.
#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;

    Book(string t, string a)
    {
        title = t;
        author = a;
    }
    Book()
    {
        title = "";
        author = "";
    }
    void displayBook()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "-------------------------" << endl;
    }
};
class Library
{
public:
    string libraryName;
    Book books[100];
    int bookcount;
    Library(string name)
    {
        libraryName = name;
        bookcount = 0;
    }

    void addBooks(string t, string a)
    {
        if (bookcount < 100)
        {
            books[bookcount] = Book(t, a);
            bookcount++;
        }
        else
        {
            cout << "Library is full! Cannot add more books." << endl;
        }
    }
    void displayBooks()
    {
        cout << "Library: " << libraryName << endl;
        cout << "Total Books: " << bookcount << endl;
        cout << "-------------------------" << endl;
        for (int i = 0; i < bookcount; i++)
        {
            books[i].displayBook();
        }
    }
};
int main()
{
    Library myLibaray("cusit");
    myLibaray.addBooks("c++", "me");
    myLibaray.addBooks("java", "me");
    myLibaray.addBooks("python", "me");
    myLibaray.displayBooks();

    return 0;
}