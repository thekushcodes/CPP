#include <iostream>
#include <iomanip> // For using manipulator-> <<setw()*******
using namespace std;

int main()
{
    // Constants in C++ (It is made by 'const' keyword. It is used when we don't want the value of a variable to be changed.)
    const int a = 1;
    cout << "The value of constant a is: " << a << endl;

    // *****Manipulators******
    /* We have already used a manipulator <<endl. This is used to enter a new line. */
    int d = 2888, b = 2, c = 78;
    // <<setw(NUM) manipulator takes a numeric value in (). This numeric value states that the element will take that much width(space) entered in parenthesis after setw.
    // It is used in such a case when we have a number with several digits then we set high value to <<setw, so that it will *****RIGHT-JUSTIFY***** the numbers.

    cout << "Manipulators in C++";
    cout << "The value of b is:" << setw(4) << b << endl; //<<set w is a manipulator just like <<endl
    cout << "The value of c is:" << setw(4) << c << endl;
    cout << "The value of d is:" << setw(4) << d << endl;

    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;
    cout << "The value of d is: " << d << endl;

    cout << "Operator precedence in C++" << endl;
    int p = 4, q = 5;
    // We already know the precedence is like BODMAS rule of programming languages. But we have also seen that some set of operators lie in the same group. Here, ******ASSOCIATIVITY****** comes into play. It is either 'left to right' or 'right to left', i.e., if a few operators are in same group,then their order is either one of the above(left to right or right to left). The precedence and associativity order is given on cppreference.com
    int r = ((((p * 5) + q) - 45) + 87);
    cout << r;

    return 0;
}
