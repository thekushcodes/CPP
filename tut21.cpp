#include <iostream>
using namespace std;

// Why we use classes instead of structures??
// It is because structures don't provide data hiding like security features, we cannot enter functions in structures and many other things. In structures members were public(wahi data hiding not possible) and we can not use methods.

class Employee
{
private:
    int a, b, c; // Important variables, cannot be accessed outside, like as we tried in main, it threw an error.
public:
    int d, e;                             // These are not protected like the private variables.
    void setData(int a1, int b1, int c1); // Declared this function here and the function is defined outside the class to prevent a mess.
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    };
};
void Employee ::setData(int a1, int b1, int c1) // '::' This is Scope-resolution operator. //This function was declared within above class.
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    // harry.a = 12;  //This will give an error because a is declared in Private
    harry.d = 34; // d, e can be accessed because it was public as in the class.
    harry.e = 89;
    harry.setData(1, 2, 4);
    harry.getData();
    return 0;
}