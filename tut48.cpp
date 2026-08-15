#include <iostream>
using namespace std;

// Code Example: Constructors in Derived Class in C++

/*
Case1:
Class B : public A{
// Order of execution of constructor-> First A then B (Base class ka constructor pehle run hoga)
}

Case2:
Class A : public B, public C{
// Order of execution of constructors-> First B then C then A (Jo pehle likha hai wo pehle run hoga)
}

Case3:
class A : public B, virtual public C{
// Order of execution of constructors-> First C then B then A (Virtual wala pehle run hota h)
}
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called." << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called." << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of data1 is " << data2 << endl;
    }
};

class Derived : public Base1, virtual public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) :  Base2(b), Base1(a) // This order does not matter.
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called." << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl
             << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived harry(1,2,3,4);
    harry.printDataDerived();
    return 0;
}