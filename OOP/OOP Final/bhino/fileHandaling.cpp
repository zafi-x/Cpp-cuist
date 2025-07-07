#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // for appending the data in the file
    // ofstream Hello("hello.cpp", ios app);
    // ofstream Hello("hello.cpp");
    // if (Hello.is_open())
    // {
    //     Hello << "#include <iostream>\n ";
    //     Hello << "using namespace std;\n ";
    //     Hello << "int main (){\n cout << \" hello world \";}\n ";
    // }

    ifstream Reading("hello.cpp");
    string n;
    if (Reading.is_open())
    {
        Reading >> n;
        cout << n;
        Reading.close();
    }
    return 0;
}