#include <iostream>

using namespace std;
class Server
{
protected:
    string password;

public:
    static int count;
    Server()
    {
        count++;
    }
    void setPassword(string p)
    {
        password = p;
    }
};
int Server::count = 0;

class Client : public Server
{
public:
    void getPassword()
    {
        cout << "Password: " << password << endl;
    }
};

int main()
{
    // Server a;
    Client d, e;
    d.setPassword("secret123");
    d.getPassword();
    cout << "Total count: " << Server::count << endl;
}
