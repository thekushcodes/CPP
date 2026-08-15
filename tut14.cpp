#include <iostream>
using namespace std;

// Structure is a user-defined data type, used to combine different types of items. (Same type of elements is combined through arrays)
typedef struct employee
{
    /* data */
    int id;
    char favChar;
    float salary;
} ep; //I wrote typedef in first line and 'ep' in last, so that i can call this structure 'ep' in short.

// Unions -> These are just like Structures but they provide better memory-management
union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};
//Lets say we are about to use "any one" of these(above 3) data types at a time, so what C++ does is, it allocates the maximum memory of the above data types to this union, like if pounds take 4 bytes and others take 1 byte, then C++ allocates 4 bytes to this union. If iw was structure, it would take 6 bytes instead of 4.-->> That's how it does the memory-management.


int main()
{ 
    enum meal{breakfast, lunch, dinner}; //In C++, enum makes things in '{}' as a data type and we can store 0,1,2... values in them.
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    // meal a1 = breakfast;
    // cout<<a1<<endl;


    union money m1;
    
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car<<endl; //Here if we print rice, it will give wrong value because in union we can use one data type at a time, hence the last one is car so it will give correct value of car.
    

    struct employee harry;
    ep shubham; //'struct employee' ki jgah 'ep' in short as I made it above in struct.
    ep rohan;

    harry.id = 1;
    harry.favChar = 'c';
    harry.salary = 1200000;
    cout << "The id is: " << harry.id << endl;
    cout << "The favChar is: " << harry.favChar << endl;
    cout << "The salary is: " << harry.salary << endl;

    return 0;
}