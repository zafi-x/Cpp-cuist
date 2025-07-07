#include <iostream>
#include <string>

using namespace std;

class GymMembership
{
private:
    int ID;
    string Name;
    string MembershipPlan;
    int SessionAttended;

public:
    GymMembership()
    {
        ID = 0;
        Name = "N/A";
        MembershipPlan = "Basic";
        SessionAttended = 0;
    }

    void setID(int id)
    {
        ID = id;
    }

    void setName(string n)
    {
        if (n.empty())
        {
            cout << "Error: Name cannot be empty." << endl;
        }
        else
        {
            Name = n;
        }
    }

    void setMembershipPlan(string Membership)
    {
        if (Membership == "Basic" || Membership == "Gold" || Membership == "Elite")
        {
            MembershipPlan = Membership;
        }
        else
        {
            cout << "Error: Invalid membership plan. Choose Basic, Gold, or Elite." << endl;
        }
    }

    void setSessionAttended(int Session)
    {
        if (Session >= 0)
        {
            SessionAttended = Session;
        }
        else
        {
            cout << "Error: Sessions attended cannot be negative." << endl;
        }
    }

    string GetName() const { return Name; }
    string GetMembershipPlan() const { return MembershipPlan; }
    int GetSessionAttended() const { return SessionAttended; }
    int getID() const { return ID; }

    void displayMemberInfo() const
    {
        cout << "Member ID: " << ID << endl;
        cout << "Full Name: " << Name << endl;
        cout << "Membership Plan: " << MembershipPlan << endl;
        cout << "Sessions Attended: " << SessionAttended << endl;
    }
};

int main()
{
    GymMembership GymMembership1;
    GymMembership1.setID(123);
    GymMembership1.setName("Ali");
    GymMembership1.setMembershipPlan("Basic");
    GymMembership1.setSessionAttended(1);
    GymMembership1.displayMemberInfo();

    return 0;
}
