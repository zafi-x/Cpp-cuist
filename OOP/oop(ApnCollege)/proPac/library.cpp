#include <iostream>
using namespace std;

class Library
{
private:
    int id;
    string FullName;
    string MemberShipType;
    int BookIssued;

public:
    Library()
    {
        id = 16894;
        FullName = "null";
        MemberShipType = "null";
        BookIssued = 0;
    }

    void setFullName(string n)
    {
        if (n == "")
        {
            cout << "ERROR: Name cannot be empty " << endl;
                }
        else
        {
            FullName = n;
        }
    }
    void setMemberShipType(string type)
    {
        if (type == "Standard" || type == "Premium" || type == "VIP")
        {
            MemberShipType = type;
        }
        else
        {
            cout << "Invalid Membership TYpe";
        }
    }
    void setBookIssued(int issued)
    {
        if (issued >= 0)
        {
            BookIssued = issued;
        }
        else
        {
            cout << " cant in negative";
        }
    }
    string getFullName()
    {
        return FullName;
    }
    string getMemberShipType()
    {
        return MemberShipType;
    }
    int getBookIssued()
    {
        return BookIssued;
    }

    void DisplayMemberInfo()
    {
        cout << "ID: " << id << endl;
        cout << "Full Name: " << FullName << endl;
        cout << "Membership Type " << MemberShipType << endl;
        cout << "Book Issued " << BookIssued << endl;
    }
};

int main()
{

    Library Member;
    Member.setFullName("");
    Member.setMemberShipType("VIP");
    Member.setBookIssued(2);
    Member.DisplayMemberInfo();
    return 0;
}