// 🔹 Q1. Create a class Book with private members: title, author. Write a constructor to initialize them and a method displayInfo() to show them.

#include <iostream>

using namespace std;
class Book
{
private:
    string tilte;
    string author;

public:
    Book()
    {
        tilte = "One Pice ";
        author = "Oda";
    }
    void displayinfo()
    {
        cout << "book info\nTitle: " << tilte << "\nAuthor: " << author;
    }
};
int main()
{
    Book book1;
    book1.displayinfo();

    return 0;
}