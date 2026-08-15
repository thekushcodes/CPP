/*Variable is named as:
int a = 4, b=6;

Based on scope(kaha pr wo variable available h), variables are of 2 types:
1- Local variable->> Declared in a function and only used inside that function.
2- Global variable->> Declared outside the function, used overall in program.
***Global and Local variables can have same name!!

Data type->> Type of data a variable can hold. It is categorised into 3 groups:
1- Built-in (which we talked in lect. 3, like int, char...)
2- User defined->> struct, union, enum
3- Derived->> array, function, pointer

Naming of variables:
> Variable name range from 1 to 255 characters.
> Begin with alphabet or underscore then anything.
> Case-sensitive.
> No space or special characters.
> No reserved keywords of C++ is allowed.

'\n' is used to go in the next line. This is known as escape sequence character.
*/

#include <iostream>
using namespace std;

int glo = 56; // This is a global variable made outside any function.

void sum()
{
    int a;
    cout << glo << "\n"; // Here it takes 'glo' of global variable.
}

int main()
{
    // int a = 4;
    // int b = 5;
    int glo = 100; // This is local variable.
    //'glo' naam ke 2 variable bnae gye h, but the local one always takes the lead.
    int a = 4, b = 5;
    float pi = 3.14;
    char c = 'd'; // char me kewal ek character hoga, like 'a'
    char d = '4';
    bool is_true = true;
    sum(); // here sum func is called
    cout << "value of a is " << a << ". Value of b is " << b;
    cout << "\nvalue of pi is: " << pi;
    cout << "\nvalue of c is: " << c;
    cout << "\nvalue of d is: " << d << "\n";
    cout << glo;
    cout << "\nvalue of is_true is " << is_true;
    return 0;
}