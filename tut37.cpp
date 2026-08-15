#include <iostream>
using namespace std;

// Inheritence Syntax and Visibility Mode in C++

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {} // Default constructor to prevent error while making object of Programmer class.
};

// Derived Class Syntax*****
/*
{{class derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods, etc.
}
->> Visibility mode can be either public or private. By default, it is private.*****
->> If visibility mode is public, then public members of base class becomes public members of derived class.
->> If visibility mode is private, then public members of base class becomes private members of derived class.
->> Private members are never inherited.
*/
class Programmer : public Employee
{
public:
    int languageCode = 9;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9; // Let's say the language is denoted by a serial number.
    }
    void getData()
    {
        cout << id;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl; // We were able to fetch ID because the visibility mode is public.
    skillF.getData();

    return 0;
}