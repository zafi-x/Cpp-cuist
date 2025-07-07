#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
};
class Publisher
{
public:
    int publicationYear;
};
class PrintedBook : public Book, public Publisher
{
public:
    int limitedCopies;
};
class SpecialEdition : public PrintedBook
{
public:
    void displaySpecs()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publcation Year: " << publicationYear << endl;
        cout << "Limited Copies: " << limitedCopies << endl;
    }
};
int main()
{
    SpecialEdition se1;
    se1.title = "Huzaifa The Chess Master";
    se1.author = "ShakeSpeare";
    se1.publicationYear = 2050;
    se1.limitedCopies = 10;

    se1.displaySpecs();
    return 0;
}