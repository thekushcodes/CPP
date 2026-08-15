#include <iostream>
using namespace std;

// Friend Functions in C++

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend Complex sumComplex(Complex o1, Complex o2); // sumComplex() is a function that tries to access private variables of Complex class. So, compiler will throw an error. To prevent this we can make that function a 'friend' function of this class. It is declared as we did here.

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    // cout<<a; // Invalid because friend function cannot directly access private members.
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    // '.' is membership operator.
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
/*
Properties of friend functions
1. The friend function does not get into the scope of class. It just means that friend function gets the access to the private data of the class.
2. Since it i not in the scope of the class, it cannot be called from the object of that class. Eg.- c1.sumComplex() ->> Invalid
3. It can be invoked without the help of any object.
4. Usually contains the objects as arguments.
5. It can be declared inside public or private section of the class. Like we declared it in the public section, but it can also be declared in private section.
6. It cannot access the members directly by their names and need 'object_name.member_name' to access any member.
*/