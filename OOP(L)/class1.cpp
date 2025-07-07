#include <iostream>
using namespace std;
class MyType
{
public:
    int age;
    float height;
    string hairStyle;
    string loyaltyLevel;
    bool glasses;
    bool thickThighs;
    bool nosePiercing;

    void Display()
    {
        cout << " Her age " << age << std::endl;
        cout << " Her height " << height << std::endl;
        cout << " Her hair Style " << hairStyle << std::endl;
        cout << " Her Loyal Level " << loyaltyLevel << std::endl;
        cout << " Glasses " << glasses << std::endl;
        cout << " Thick Thighs " << thickThighs << std::endl;
        cout << " Nose Pirecing " << nosePiercing << std::endl;
    }
};

int main()
{
    MyType her;
    her.age = 17;
    her.height = 5.3;
    her.hairStyle = "Long hairs";
    her.loyaltyLevel = "Ultra promax";
    her.glasses = true;
    her.thickThighs = true;
    her.nosePiercing = true;
    her.Display();

    return 0;
}