#include <iostream>
using namespace std;

// Copy Constructor in C++
// This makes copy of another object.

class Number
{
    int a;

public:
    // Number(){} //This is default constructor . If we do not make this, the compiler will throw an error- "no default constructor exists for class "Number". But we made a constructor below that sets '0' as default value so no need for this now.

    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // C++ assigns a copy constructor to every class by itself so even if we do not make the below copy constructor, it will not give an error.
    Number(Number &obj) // Here we made a reference object.
    {
        cout << endl
             << "**Copy constructor called**" << endl; // To know if copy constructor is called.
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is: " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number x1(x);
    x1.display(); // x1 should exactly resemble x (or maybe x or y, any). This is made using copy constructor and we did this by making the reference object.

    // Copy constructor will not be called for below because object is made already.
    z2 = z;
    z2.display();

    Number z3 = z; // Copy constructor will be invoked here, because we made this object here in this line.
    z3.display();

    return 0;
}