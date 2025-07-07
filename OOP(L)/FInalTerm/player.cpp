#include <iostream>

using namespace std;

class Player
{
public:
    virtual void walk()
    {
        cout << "Player walk" << endl;
    }
};
class Zombie : public Player
{
public:
    void walk()
    {
        cout << "Zombie walk" << endl;
    }
};

int main()
{
    Player *P = new Zombie();
    (*P).walk();
    Player *P1 = new Player();
    P1->walk();
}