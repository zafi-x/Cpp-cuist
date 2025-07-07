// Create a class Company with companyName and location.
// Create a class Employee with employeeName, id, and a Company object.
// Employee belongs to a Company.
// Display employee details along with their company's information.
#include <iostream>

using namespace std;

class Company
{
public:
    string companyName;
    string location;
    Company(string name, string loc)
    {
        companyName = name;
        location = loc;
    }
    void CompanyDetails()
    {
        cout << "Company Name: " << companyName << endl;
        cout << " location : " << location << endl;
    }
};
class Employee
{
public:
    string employeeName;
    int id;
    Company company;
    Employee(string emName, int ID, string name, string loc) : company(name, loc)
    {
        employeeName = emName;
        id = ID;
    }
    void Display()
    {
        cout << "Employ name: " << employeeName << endl;
        cout << "Employ ID: " << id << endl;
        company.CompanyDetails();
    }
};

int main()
{
    Employee employee1("Zafi", 212, "Zaddy", "Peshawar");
    employee1.Display();
    return 0;
}