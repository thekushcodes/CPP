#include <iostream>
using namespace std;

// An *****ARRAY***** is a collection of items of similar type stored in contiguous memory locations.
// Sometimes, a simple variable is not enough to hold all data, like for storing marks of 2500 students, we would have to make 2500 variables
// To solve this this problem, we can define an array with size 2500 that can hold marks of 2500 students.

int main()
{
    int marks[] = {24, 25, 26, 27}; // This is ****ARRAY****. '[]' iske andar number daal skte h kitne data h, like [4] in this case, else khaali chod denge to bhi C++ smjh jaega

    // The position is given as numbers like 0 then 1 and so on.

    cout << "These are marks: " << endl;
    marks[2] = {123}; // Here I changed the value of marks that is at position(INDEX) 2.
    // Indexing in C++ is like 0,1,2,3...
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int mathMarks[4];
    mathMarks[0] = {1};
    mathMarks[1] = {7};
    mathMarks[2] = {9};
    mathMarks[3] = {10};

    cout << "These are math marks: " << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // Below, I am using for loop to print the marks.
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is: " << marks[i] << endl;
    }

    // TOPIC: C++ Pointers and Arrays
    /*
    The way we could know the address of a variable like '&a', it is not the case in Arrays.
    In arrays, the name of the variable is it's address itself. Like, marks is the address of the array- marks. '&marks' is wrong.
    */
    //*****Ponter Arithmetic*****
    /*
    ----->>>>>Formula:
    address(new) = address(current) + i * size of data type
    where, address(new)-> p + i (p is array element, i is any index)
           address(current)-> p
           size of data type-> kitne values hai array me
    */

    int *p = marks; // p is pointer variable equal to 'marks'
    cout<<"The value of *p is: "<<*p<<endl; // Here, we get these values by dereferencing pointers.
    cout<<"The value of *(p+1) is: "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is: "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is: "<<*(p+3)<<endl;
    return 0;
}