#include <iostream>

using namespace std;

template <typename T>
void swap(T num1, T num2)
{
    T temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "Swapped values: " << num1 << " and " << num2 << endl;
}

int main()
{
    swap(2, 3);
    swap('a', 'b');
    swap(2.5, 3.5);
    swap("Hello", "World");
    return 0;
}