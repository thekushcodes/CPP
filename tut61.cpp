#include <iostream>
#include <fstream>
using namespace std;

// File I/O in C++ : Read/Write in the Same Program and Closing Files

/*
Read operation:
->> ifstream in("this.txt");
    string st;
    in st; // Just like cin

Write operation:
->> ofstream out("this.txt")
    string st = "Harry"
    out<<st; // Just like cout, but it will write in the file.
*/

int main()
{
    ofstream hout("sample60.txt"); // Connecting our file with hout stream(object)
    cout << "Enter your name: ";
    string name;
    cin >> name;

    hout << "My name is " + name; // Writing the string in the file.
    hout.close();                 // Closing the file.

    string content;
    ifstream hin("sample.txt");
    hin >> content;
    // cout<<"The content of the file is: "<<content;
    cout << content;
    hin.close();
    return 0;
}