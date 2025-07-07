#include <iostream>

using namespace std;

class Room
{
public:
    Room(string name) : roomName(name) {}

    void displayRoom() const
    {
        cout << "Room: " << roomName << endl;
    }

private:
    string roomName;
};

class Home
{
public:
    Home(string name) : homeName(name) {}

    void addRoom(const Room &room)
    {
        rooms.push_back(room);
    }

    void displayHome() const
    {
        cout << "Home: " << homeName << endl;
        for (const auto &room : rooms)
        {
            room.displayRoom();
        }
    }

private:
    string homeName;
    vector<Room> rooms;
};
int main()
{

    return 0;
}