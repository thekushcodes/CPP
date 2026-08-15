#include <iostream>
using namespace std;

// Function Overloading->> Functions having same name that do different work.

int sum(int a, int b)
{
    cout << "Using 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using 3 arguments" << endl;
    return a + b + c;
}
// C++ will automatically select which function to use, here, depending on the number of arguments. It simply tries to match the arguments and then selects which function to use.

int volume(double r, int h)
{ // Volume of a cylinder
    return (3.14 * r * r * h);
}
int volume(int a)
{ // Volume of cube
    return (a * a * a);
}

int volume(int l, int b, int h)
{ // Volume of cuboid
    return (l * b * h);
}

int main()
{
    cout << "The sum of 3 and 6 is: " << sum(3, 6) << endl;
    cout << "The sum of 3, 7 and 6 is: " << sum(3, 7, 6) << endl;

    cout << "The volume of cuboid of 3,7,6 is: " << volume(3, 7, 6) << endl;
    cout << "The volume of cylinder of 3,6 is: " << volume(3, 6) << endl;
    cout << "The volume of cube of 3 is: " << volume(3) << endl;

    return 0;
}