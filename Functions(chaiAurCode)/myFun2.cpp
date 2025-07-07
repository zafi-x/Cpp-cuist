// // Lambda function : often used in Frame works

/// A lambda function in C++ is an anonymous, inline function that can be used like a function object. It allows defining short, temporary functions without explicitly declaring them.///

// #include <iostream>
// using namespace std;

// int main()
// {
//     auto greet = []()
//     { cout << "Hello, Zafi!"; };
//     greet(); // Output: Hello, Zafi!
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    auto add = [](int a, int b)
    { return a + b; };
    cout << add(5, 3); // Output: 8
    return 0;
}
