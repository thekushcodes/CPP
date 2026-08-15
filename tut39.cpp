#include <iostream>
using namespace std;

// Protected Access Modifier in C++

class Base
{
protected: // It is same as private but the only difference is, it can be inherited.*****
    int a = 100;

private:
    int b;
};

/*
Table to know what will be what?
                        Public derivation        Private derivation      Protected derivation --->>> These are the derivations which is described in the derived class.
-> Private member->     Not inherited            Not inherited           Not inherited
-> Protected member->   Protected                Private                 Protected
-> Public member->      Public                   Private                 Protected

->> Private members can never be inherited (as seen above).
->> In public derivation, jo jaisa h base class me waisa hi rhega in the derived class.
*/
class Derived : protected Base
{
public:
    // I myself made this 'getA()' function because in the main function, if we try 'cout<<d.a;' it will give an error because 'a' is protected member of Base class. But as we have learnt above that the protected member can be inherited by public function of the Derived class so I did the same. Also, I have assigned the value of 'a' to get an output and see if my program is correct.
    void getA();
};
void Derived ::getA()
{
    cout << a;
}

int main()
{
    Base b;
    Derived d;

    d.getA();

    return 0;
}