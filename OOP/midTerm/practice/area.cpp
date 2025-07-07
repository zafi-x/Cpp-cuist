// W.A.P To calculate area using operator overloading
// create a class Area which take length and width form user and stores area in object findArea
#include <iostream>
using namespace std;
class Area
{
public:
    int length, width;
    Area(int l, int w)
    {
        length = l;
        width = w;
    }
};

int main()
{
    Area a1(5, 2);
    return 0;
}