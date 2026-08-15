#include <iostream>
using namespace std;

// Ambiguity Resolution in Inheritence in C++
// Eg.- Let's say, in multiple inheritence, there is a 'greet()' function in class A and B, then which one will be executed? This is resolved by Ambiguity.

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet(); // This is how we resolve ambiguity, this tells that the compiler has to use greet() function of 'Base1' class.
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};
class C : public B
{
    int a;
    // public:
    //     void say(){
    //         cout<<"Hello my beautiful people."<<endl;
    //     }
};

int main()
{
    // Ambiguity example 1 ( Classes used Base1, Base2 )
    /*
    Base1 base1obj;
    base1obj.greet();

    Base2 base2obj;
    base2obj.greet();

    Derived d;
    d.greet(); // Ambiguous error because it got confused which greet() to call, as there are two greet() functions in each Base class.
    */

    // Ambiguity example 2 ( Classes used B and C )
    // Here if we write say() function of class 'D' in private which is inherited from 'B', then say() of 'D' cannot be invoked in main, in this case the say function of 'C' class will be invoked automatically. Ambiguity is resolved by itself in this case.
    // If there is say() function in derived class, in our case 'C', then that one will be invoked. 
    B b;
    b.say();

    C c;
    c.say();

    return 0;
}