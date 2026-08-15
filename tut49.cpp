#include <iostream>
using namespace std;

// Initialization of list in Constructors in C++
// Initialization section is generally used when constructor-body is too complex. 

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}

Eg.
class Test{
    int a;
    int b;
public:
    Test(int i, int j): a(i), b(j){
        constructor-body;
    }
};
*/
class Test
{
    int a;
    int b;

public:
    // Instead of writing (a = i) and (b = j) in the constructor body, we can initialize it here.*****
    // Test(int i, int j) : a(i), b(j) --->>> Valid
    // Test(int i, int j) : a(i), b(i+j) --->>> Valid
    // Test(int i, int j) : a(i), b(2*j) --->>> Valid
    // Test(int i, int j) : a(i), b(a+j) --->>> Valid
    // Test(int i, int j) : b(j), a(i+b) --->>> Give garbage value in 'a'!!! // This is because "Which gets declared first is initialized first"*****. This is implemented in whole C++.
    // Test(int i, int j) : a(i) // We can declare value of other variables in the constructor-body
    Test(int i, int j) : a(i), b(j)
    {

        cout << "Constructor executed." << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}