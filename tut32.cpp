#include <iostream>
using namespace std;

// Constructors with Default Arguments in C++

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple ::printData()
{
    cout << "The value of data1, data2, data3 is " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s(1); // Value of 'data2' is 9 and 'data3' is 8, by default.
    // Simple s(1, 4);
    // Simple s(12, 13, 14);
    s.printData();

    return 0;
}