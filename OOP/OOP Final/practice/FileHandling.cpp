#include <iostream>
#include <fstream>

using namespace std;

class User
{
private:
    string userName, password;

public:
    void setUserName(string n)
    {
        userName = n;
    }
    void setPassword(string p)
    {
        password = p;
    }
    void savingData()
    {
        ofstream Data("user.txt");
        if (Data.is_open())
        {

            Data << "User name " << userName << endl;
            Data << "Password " << password << endl;
            cout << "data added";
        }
        Data.close();
    }
};

int main()
{
    User u1;
    u1.setUserName("zafi");
    u1.setPassword("asd123");
    u1.savingData();
    return 0;
}