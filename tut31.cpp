#include <iostream>
using namespace std;

// Constructors Overloading- Several constructors having same name. C++ decides which one to use according to the given parameters.

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex (int x) // Here we made another constructor with same name whose purpose to set '0' as default value of 'b'
    {
        a = x;
        b = 0;
    }
    Complex() // Here we made another constructor whose purpose is to set '0' as default values of a and b if no arguments given.
    {
        a = 0;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 6); // This will accept the 1st constructor (as we defined above).
    c1.printNumber();
    
    Complex c2(5); // This will accept the 2nd constructor (as we defined above).
    c2.printNumber();

    Complex c3; // This will accept the 3rd constructor (as we defined above).
    c3.printNumber();
    return 0;
}