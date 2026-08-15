#include <iostream>
using namespace std;

/*
There are two types of header files-
1- System header files: Comes with the compiler.
Eg.- #include<iostream>
2- User-defined header files: Written by the programmer.
Eg.- #include "this.h"

****cppreference is a website where a lot of header files are present for usage.
*/

// #include "this.h"
// To include this user-defined header, we need to have this header file in current directory(folder, i guess).

int main()
{
    cout << "Arithmentic operators in C++" << endl; //<<endl is used to go to next line, like \n
    cout << "Following are the types of operators in C++" << endl;
    cout << "+" << endl;
    cout << "-" << endl;
    cout << "*" << endl;
    cout << "/" << endl;
    cout << "%(modulus)" << endl;
    cout << "a++" << endl; // a++ means a+1; print then increment
    cout << "a--" << endl; // a-- means  a-1; print then decrement
    cout << "++a" << endl; // means a+1; increment then print
    cout << "--a" << endl; // means a-1; decrement then print

    cout << endl;

    int a = 8, b = 7;
    // cout << --a;
    // cout << ++a;
    // cout << a++;
    // cout << a--;

    // *****Asssignment operators*****->> Used to assign value to operetors
    // int a = 9, b = 4;
    // char d = 'a';

    // *****Comparison operators*****->> Compare values
    cout << "Comparison operators in C++" << endl;        // <<endl is used to go to next line, like \n
    cout << "The value of a==b is: " << (a == b) << endl; // Parenthesis is used so that error is not projected. C++ gets confused and throws an error.
    cout << "The value of a!=b is: " << (a != b) << endl;
    cout << "The value of a>b is: " << (a > b) << endl;
    cout << "The value of a<b is: " << (a < b) << endl;
    cout << "The value of a>=b is: " << (a >= b) << endl;
    cout << "The value of a<=b is: " << (a <= b) << endl;

    cout << endl;

    //*****Logical operators*****->>&&(and), ||(or), !(not)
    cout << "Logical operators in C++" << endl;
    cout << "The value of 'and' logical operator is: " << ((a == b) && (a > b)) << endl;
    cout << "The value of 'or' logical operator is: " << ((a == b) || (a > b)) << endl;
    cout << "The value of 'not' logical operator is: " << (!(a == b)) << endl; //'not' operator just changes the result, i.e., if true then it turns it into false and vice versa.

    return 0;
}