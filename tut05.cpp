/*
Basic input/output in C++

C++ comes with libraries which helps us in performing input/output. In C++, sequence of bytes corresponding to input and output are commonly known as STREAMS.
Input stream->> Direction of flow of bytes takes place from input device(like keyboard) to the main memory.
Output stream->> Direction of flow of bytes takes place from main memory to the output device.

'<<' This is called insertion operator, used in cout.******************************************************
'>>' This is called extraction operator, used in cin.******************************************************
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter value of num1: ";
    cin >> num1;

    cout << "Enter value of num2: ";
    cin >> num2;

    cout << "The sum is: " << num1 + num2;

    return 0;
}

/*
Reserved keywords in C++
int, true, bool, for, float, char, try, private, public, bitand, etc.
*/