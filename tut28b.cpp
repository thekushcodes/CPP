#include <iostream>
using namespace std;

// Extended part of Lect. 28

// Swapping the values between variables of two different classess.
class c2; // Forward declaration of class c2.
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    int indata(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    int indata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1; // oc1- Object of c1.
    c2 oc2; // oc2- Object of c2.

    oc1.indata(34);
    oc2.indata(62);

    exchange(oc1, oc2);

    cout << "The value of oc1 after exchanging becomes ";
    oc1.display();
    cout << "The value of oc2 after exchanging becomes ";
    oc2.display();
    return 0;
}