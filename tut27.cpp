#include <iostream>
using namespace std;

// Friend Classes and Member Friend Functions in C++

// Forward Declaration-> Giving compiler a guarantee that 'Complex' class is ahead in the program.
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    // Below function adds the real part of the complex number.
    int sumRealComplex(Complex, Complex); // This is a decaration and we haven't written the function code here but in last because, compiler does not know that there are o1, o2 variables in the upcoming 'Complex' class so here we just declare it and we will write the code thereafter.
    int sumCompComplex(Complex, Complex); // This function adds the complex part of the complex number.
};

class Complex
{
    int a, b;
    // friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator ::sumCompComplex(Complex o1, Complex o2);
    // Instead of declaring each function of another class as a friend like above, we can make friend the class itself, like below.
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

// Here we have written the code of the function declared in the 'Calculator' class.
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc; // We will use 'calc' instead of 'Calculator'

    int real = calc.sumRealComplex(o1, o2); // 'real' is a variable.
    int comp = calc.sumCompComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << real << endl;
    cout << "The sum of complex part of o1 and o2 is " << comp << endl;
    return 0;
}