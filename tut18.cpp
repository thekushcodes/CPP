#include <iostream>
using namespace std;

// Recursions and recursive functions
// Recursion means a function calls itself till the base condition fulfills.
// Usage example: Factorial of a number
// It is not always good to use recursions because it calls the function several times depending on the code and condition.

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    /*Steps of finding Factorial of a number
    4! = 4 * factorial(3)
    4! = 4 * 3 * factorial(2)
    4! = 4 * 3 * 2 * factorial(1) -->> The if statement returns 1 when n<=1, so factorial(1) = 1
    */

    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

    cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) << endl;

    return 0;
}