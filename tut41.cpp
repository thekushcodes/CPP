#include <iostream>
using namespace std;

// Multiple Inheritence Deep Dive with Code Example in C++
/*
SYNTAX:
class Derived : Visibility-mode Base1, visibility-mode Base-2
{
    class body of 'Derived' class
};
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The value of base3 is " << base3int << endl;
        cout << "The sum of these values is " << (base1int + base2int + base3int) << endl;
    }
};

/*
The inherited derived class will look something like this:
Data members:
    base1int -> Protected
    base2int -> Protected
    base3int -> Protected
Member functions:
    set_base1int -> Public
    set_base2int -> Public
    set_base3int -> Public
    show -> Public
*/

int main()
{
    Derived harry;
    harry.set_base1int(24);
    harry.set_base2int(37);
    harry.set_base3int(25);
    harry.show();

    return 0;
}