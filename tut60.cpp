#include <iostream>
#include <fstream>
using namespace std;

// File I/O in C++ : Reading and Writing Files

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream -->> Derived from fstreambase
3. ofstream -->> Derived from fstreambase
*/

/*
In order to work with files in C++, we have to open it. There are two ways to open a file:
1. Using the constructor.
2. Using the member function open() of the class.

*/

int main()
{
    string st = "Harry bhai";
    string st2;

    // Opening files using constructor and writing it.
    // ofstream out("sample60.txt"); // Write operation // ofstream ka object h 'out'
    // out<<st;
    // Opening files using constructor and reading it.
    ifstream in("sample60.txt"); // Write operation // ifstream ka object h 'in'
    // in>>st2;
    getline(in, st2); // As argument we have to give-> instream object and the string variable.
    cout << st2;
    return 0;
}