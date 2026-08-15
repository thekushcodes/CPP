#include <iostream>
using namespace std;

// Constructors in C++
// Constructor is a special member function with same name as of the class used to initialise objects of it's class.
// Constructor is just like a function having same name as the class and it gets automatically invoked as we make an object.

class Complex
{
    int a, b;

public:
    // Creating a constructor:
    Complex(void); // Constructor declaration

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

};

Complex ::Complex(void) // Default constructor. // Here we define the constructor that we declared in the class above.
{
    a = 10;
    b = 20;
    // cout<<"Hello World!";
}

int main()
{
    Complex c1, c2, c3; // The constructor that we made will be invoked for each of the objects that we specified.
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

// Characteristics of Constructors:
/*
->> The constructor which takes no parameter is called a 'Default constructor'. The one we made in this program is a default constructor.
->> It should be declared in the public section of the class.
->> They are invoked whenever the object is created.
->> Do not have return types, not even void.
->> It can have default arguments (as it is just like functions).
->> We cannot refer to their address.
*/