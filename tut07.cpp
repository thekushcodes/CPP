#include <iostream>
using namespace std;

int c = 10; // global variable

int main()
{
    // int a,b,c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;

    // c = a+b;

    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The global c is: "<<::c; // '::' This is scope resolution operator, used to use global variable.**********

    float d = 34.4f;       //'f'/'F' refers to float
    long double e = 34.4l; //'l'/'L' refers to long double
                           // agr hm iss jaankaari ke saath bhejna chahte h ki yeh kya h to f,l ye sb lga lete h
                           // *****Any decimal number is regarded as double by the compiler, like 34.4 is double for compiler.
                           // In order to pass a decimal number as float we need to write it as "34.4f" or "34.4F"
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e << endl;

    cout << "The size of 34.4 is: " << sizeof(34.4) << endl; // sizeof()
    cout << "The size of 34.4f is: " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is: " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is: " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is: " << sizeof(34.4L) << endl;

    // ********Reference variables************

    float x = 455;
    float &y = x;
    // Original variable is x. y is a reference variable of x. It is made using '&' sign.
    cout << "The value of x is: " << x << endl;
    cout << "The value of reference y is: " << y << endl;

    // Typecasting->> Changing one type of variable into another.

    int p = 45;
    float q = 45.76;
    // Below are the methods of typecasting:
    cout << "The value of float p is: " << (float)p << endl;
    cout << "The value of float q is: " << float(q) << endl;

    cout << "The value of int p is: " << (int)p << endl;
    cout << "The value of int q is: " << int(q) << endl;

    int r = int(q);
    cout << "The value is: " << (p + q) << endl;
    cout << "The value is: " << (p + int(q)) << endl;
    cout << "The value is: " << (p + (int)q) << endl;

    return 0;
}
