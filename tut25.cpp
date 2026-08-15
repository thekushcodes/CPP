#include <iostream>
using namespace std;

// Array of Objects and Passing Objects as Function Arguments in C++

class Employee
{
    int id;
    int salary;

public:
    void setID(void)
    {
        salary = 120;
        cout << "The ID of Employee: " << endl;
        cin >> id;
    }

    void getID(void)
    {
        cout << "The ID of this Employee is " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setID();
    // harry.getID();
    Employee fb[4]; // 'fb' is a company in which there are 4 employees. The ID is enetred in form of array.

    for (int i = 0; i < 4; i++)
    {
        fb[i].setID();
        fb[i].getID();
    }

    return 0;
}