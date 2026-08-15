#include <iostream>
using namespace std;

// Revisiting pointers: new and delete Keywords in C++

int main()
{
    // Pointer is a variable/data type that stores the address of another variable.
    int a = 4;
    int *ptr = &a;

    cout << "The value of a is " << *(ptr) << endl; // * is deferencing operator.

    // new Operator
    float *p = new float(40.78);
    cout << "The value at of address p is " << *(p) << endl; // * is deferencing operator.

    // Let's say we want to allocate block of memory to store, maybe a set of integers:
    int *arr = new int[4];
    arr[0] = 10;
    *(arr + 1) = 40;
    arr[2] = 20;
    arr[3] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;

    // delete Operator
    // delete arr; // Not all values will be erased.
    delete[] arr; // Entire dynamically allocated block of memory(array in this case) will be deleted and memory will be freed.

    return 0;
}