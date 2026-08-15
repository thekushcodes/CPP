#include <iostream>
using namespace std;

// Static Data Members and Methods in C++
// -->> We cannot pass a variable like 'count'(using to store the count of the employees) in between the objects in a class, so we use static variables.
// -->> Static variable is written outside the class. Static variable means a variable related to a class. So they are also known as Class Variables.
// -->> Static variable's scope is still in the class only.

// Static Functions->> Functions which can only access static members(variables or functions). Or if we want to *****run a function just by the name of class, without the need the name of an object.

class Employee
{
    int id;
    static int count; // 'count' is a static member of this class. // *****By default, a static variable is initialised from 0 so we do not need to do it manually.*****

public:
    void setData(void)
    {
        cout << "Enter the ID: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The ID of employee is: " << id << " and this is employee number: " << count << endl;
    }

    static void getCount(void) // Static Member Function
    {
        // cout<<id; // This will throw an error because it is using a non-static variable.
        cout << "The value of count is: " << count << endl;
    }
};

// 'count' is a **Static Data Member** in the class 'Employee'.
// What if we want to start the 'count' from 1000? We can do it in the below line like, "int Employee ::count == 1000;".
int Employee ::count; // Static Variable, outside the 'Employee' class. // Default value of 'count' is 0.

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1; // Cannot do this because 'ID' and 'Count' is private.
    // harry.count = 1;
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}

/*
*****Running a file in terminal manually*****
"g++ .\tut24.cpp"
".\a.exe"
*/