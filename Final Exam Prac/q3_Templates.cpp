// Write a C++ template function to find the maximum of two values.
// Template to swap any two data type

#include <iostream>

using namespace std;

template <typename myType>
myType maxVal(myType a, myType b)
{

    return (a > b) ? a : b;
}

template <typename DataType>
DataType swap(DataType a, DataType b)
{
    DataType temp = a;
    a = b;
    b = temp;
    cout << "Swapped values: " << a << " and " << b << endl;
}

int main()
{

    cout << maxVal(1, 2) << endl;
    cout << maxVal(2.5, 4.3) << endl;
    cout << maxVal('a', 'b') << endl;

    swap(2, 3);
    swap(5.1, 9.6);
    swap('a', 'd');
    swap("hello", "world");

    return 0;
}