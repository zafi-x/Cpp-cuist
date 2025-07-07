#include <iostream>
using namespace std;
class GameProfile
{
private:
    int score;
    string playerName;

public:
    GameProfile(int s, string name)
    {
        score = s;
        playerName = name;
    }
    friend void checkPlayerRank();
};
void checkPlayerRank()
{
    GameProfile Player(10000, "Huzaifa");
    if (Player.score >= 1000)
    {
        cout << Player.playerName << " is a ProPlayer" << endl;
    }
    else
    {
        cout << Player.playerName << " Needs Practice" << endl;
    }
}
int main()
{
    checkPlayerRank();
    return 0;
}