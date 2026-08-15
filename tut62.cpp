#include <iostream>
#include <fstream>
#include <string> // To use getline()
using namespace std;

// File I/O in C++ : open() and eof() functions

int main()
{
    fstream out;
    out.open("sample60.txt"); // Another way of opening file. This is done using open() FUNCTION. Previously we were doing it using ofstream object.
    out << "This is me\n";
    out << "This is me also\n";
    out << "This is also me";
    out.close();

    ifstream in;
    string st, st1, st2;
    in.open("sample60.txt");
    // in>>st1>>st2;
    // cout<<st1<<st2;
    while (in.eof() == 0) // To print whole text file.
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();

    return 0;
}