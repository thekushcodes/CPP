#include <iostream>
using namespace std;

// C++ Function Template and Function Templates with Parameters

// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// Template function for swapping two variables.
template <class T>
void swapp(T &a, T &b) // We named it swapp because swap is already available in namespace.
{
    T temp = a;
    a = b;
    b = temp;
}

// Instead of making the above numerous functions with different data types, we can create a function template as below:

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(5.8, 2.4);
    printf("The average of these numbers is %.3f \n", a); // '%.3f'-> Upto 3 decimal places in form of float.

    int x = 5, y = 7;
    swapp(x, y);
    cout << x << endl << y;

    return 0;
}